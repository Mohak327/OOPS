#include <iostream>
#include<conio.h>
#include <math.h>

using namespace std;

void multiply(int m[10][10], int n[10][10], int result[10][10], int r1, int c1, int r2, int c2) {
  for(int i=0; i < r1; i++)
    for(int j=0; j < c2; j++) {
      result[i][j] = 0; // assign 0

      for (int k = 0; k < c1; k++)
        result[i][j] += m[i][k] * n[k][j];
    }
}

void display(int mat[10][10], int rows, int cols) {
  for(int i=0; i<rows; i++) {
      for(int j=0; j<cols; j++) {
        cout <<" "<< mat[i][j];
      }
    cout<<"\n";
  }
}

int main() {
    int a[10][10], b[10][10], c[10][10], i, j, r1, c1, r2, c2;

    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;

    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;

    while (c1!=r2) {
        cout << "Error! Column of first matrix not equal to row of second matrix.";

        cout << "Enter rows and columns for first matrix: ";
        cin >> r1 >> c1;

        cout << "Enter rows and columns for second matrix: ";
        cin >> r2 >> c2;
    }

    cout << "Enter the elements of matrix-1: \n";
    for(i=0;i<r1;i++)
        for(j=0;j<c1;j++)
            cin >> a[i][j];

    cout << "Enter the elements of matrix-2: \n";
    for(i=0;i<r2;i++)
        for(j=0;j<c2;j++)
            cin >> b[i][j];


    cout << "First Matrix:\n";
    display(a, r1, c1);
    cout << "Second Matrix:\n";
    display(b, r2, c2);

    multiply(a, b, c, r1, c1, r2, c2);
    cout << "Multiplication of the matrices is: \n";
    display(c, r1, c2);

    cout << "\n By: Mohak Sharma\n 12-CSEA-19";
    return 0;
}
