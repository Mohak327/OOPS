#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

int** inputMatrix(int row,int col){
	int** A = new int*[row];
	for(int i=0; i<row; i++){
		A[i] = new int[col];
		for(int j=0; j<col; j++){
			cin >> A[i][j];
		}
	}
	return A;
}

void printMatrix(int **arr,int row,int col){
	for(int i=0; i<row; i++) {
		for(int j=0; j<col; j++) {
			cout<< arr[i][j] << " ";
		}
		cout << endl;
	}
}

int** transposeMatrix(int **arr,int row,int col){
	int** tr = new int*[col];
	for(int i=0;i<col;i++){
		tr[i] = new int[row];
	}

	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			tr[j][i] = arr[i][j];
		}
	}
	return tr;
}

int main(){
	int row,col;

	cout<<"Enter number of rows of matrix: ";
	cin>>row;
	cout<<"Enter number of columns of matrix: ";
	cin>>col;

	cout << "Enter the elements of matrix: ";
	int**A = inputMatrix(row,col);

	cout<<"Matrix A is \n";
	printMatrix(A,row,col);

	int ** transpose = transposeMatrix(A,row,col);
    cout<<"Transpose of matrix is \n";
	printMatrix(transpose,col,row);

	return 0;
}
