#include <iostream>
#include <iomanip>

using namespace std;

void fill(int **p, int rowSize, int columnSize);
void print(int **p, int rowSize, int columnSize);
void max(int **p, int rowSize, int columnSize);
void min(int **p, int rowSize, int columnSize);
void totalAvg(int **p, int rowSize, int columnSize);
void replace(int **p, int row, int column, int repRow, int repCol,int repNum);
int main() {
	int rows, columns, choice, choice2 = 0;
	int **board = 0;	//set to 0 to not be seen as unitialized variable
	bool created = false;
	char nuArry;
	bool leave = false, leave2 = false;
	int replaceNum, rowReplace, columnReplace;
	//leave:main menu leave/close program | leave2: leave 2nd menu
	//replace: replace num for change 1 component value
	//board: pointer for rows and columns
	//choice: primary menu option selector | choice2:menu option selector for 2nd menu
	//created: if a 2D array is already made created = true, else its false
	//nuArry: char to read the user yes/ no choice for new array

	while (leave == false) {
		cout << "Main Menu: \n";
		cout << "Enter 1 to create a new two-dimensional array: " <<
			"\nEnter 2 for existing two-dimensional array: \nEnter 9 to exit: \n";
		cin >> choice;
		if (choice == 1) {//create new 2D array
			if (created == false) {
				cout << "Enter the number of rows "
					<< "and columns: ";
				cin >> rows >> columns;
				cout << endl;
				board = new int*[rows];
				//creates the array row/col with number
				for (int row = 0; row < rows; row++)
					board[row] = new int[columns];

				fill(board, rows, columns);
				created = true;
			}
			else if (created == true) {//ask user if wanna create new array
				cout << "do you want to create a new array Y/N?: ";
				cin >> nuArry;
				if (nuArry == 'y' || nuArry == 'Y') {
					created = false;
					delete[] board;
					cout << "Enter the number of rows "
						<< "and columns: ";
					cin >> rows >> columns;
					cout << endl;
					board = new int*[rows];

					for (int row = 0; row < rows; row++)
						board[row] = new int[columns];

					fill(board, rows, columns);
					created = true;
				}
			} else {
				cout << "NO existing 2D array, create one first \n";
			}
		} else if (choice == 2) {//existing 2D array
				if (created == true) {
					while (leave2 == false) {
						cout << "Existing array:\n"
							<< "Enter 1 to print current 2D array: \nEnter 2 to show stats: \n"
							<< "Enter 3 to change a components value: \nEnter 9 to exit: ";
						cin >> choice2;
						if (choice2 == 1) {
							cout << "Board:" << endl;
							print(board, rows, columns);
							cout << endl;
						} else if (choice2 == 2) {//show max,min,total,avg
							cout << "\nStats: \n";
							min(board, rows, columns);
							max(board, rows, columns);
							totalAvg(board, rows, columns);
							cout << endl;
						}
						else if (choice2 == 3) {//edit a component
							cout << "\nEnter row number (range 0-" << rows -1 << ") of the number you want to change: ";
							cin >> rowReplace;
							cout << "\nEnter column number (range 0-" << columns -1 << ") of the number you wan to change: ";
							cin >> columnReplace;
							cout << "\nEnter new value to change at row " << rowReplace << ", column "<< columnReplace<< ": ";
							cin >> replaceNum;
							replace(board, rows, columns, rowReplace, columnReplace,replaceNum);
							cout << endl <<"new value updated! \n";
						} else if (choice2 == 9) {
							leave2 = true;
						} else {
							cout << "Invalid input\n";
						}
					}//menu 2 end bracket
					leave2 = false;
				} else {
					cout << "NO array exist \n";
				}
			
		} else if (choice == 9) {
			leave = true;
		} else {
			cout << "Invalid input\n";
		}

	}//menu 1 end bracket
	cin.ignore(2);
	return 0;
}
//fill board
void fill(int **p, int rowSize, int columnSize) {
	for (int row = 0; row < rowSize; row++) {
		cout << "Enter " << columnSize << " number(s) for row "
			<< "number " << row << ": ";
		for (int col = 0; col < columnSize; col++)
			cin >> p[row][col];
		cout << endl;
	}
}
//print board
void print(int **p, int rowSize, int columnSize) {
	for (int row = 0; row < rowSize; row++) {
		for (int col = 0; col < columnSize; col++)
			cout << setw(5) << p[row][col];
		cout << endl;
	}
}
//board max
void max(int **p, int rowSize, int columnSize) {
	int max = p[0][0];
	for (int row = 0; row < rowSize; row++) {
		for (int col = 0; col < columnSize; col++) {
			if (max < p[row][col]) {
				max = p[row][col];
			}
		}
	}
	cout << "Max number: " << max << endl;
}
//board min
void min(int **p, int rowSize, int columnSize) {
	int min = p[0][0];
	for (int row = 0; row < rowSize; row++) {
		for (int col = 0; col < columnSize; col++) {
			if (min > p[row][col]) {
				min = p[row][col];
			}
		}
	}
	cout << "Min nunber: " << min << endl;
}
//board total and average
void totalAvg(int **p, int rowSize, int columnSize) {
	int total= 0, average, count = 0;
	for (int row = 0; row < rowSize; row++) {
		for (int col = 0; col < columnSize; col++) {
			count++;
			total += p[row][col];
		}
	}
	average = total / count;
	cout << "Total: " << total << "\nAverage: " << average << endl;
}

void replace(int **p, int row, int column, int repRow, int repCol,int repNum) {
	row = repRow;
	column = repCol;
	p[row][column] = repNum;
}
