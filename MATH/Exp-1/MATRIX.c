#include<stdio.h>
#include<stdlib.h>


// function to add two 3x3 matrix
void add(int m[10][10], int n[10][10], int sum[10][10], int rows, int cols)
{
  for(int i=0;i<rows;i++)
    for(int j=0;j<cols;j++)
      sum[i][j] = m[i][j] + n[i][j];
}

// function to subtract two 3x3 matrix
void subtract(int m[10][10], int n[10][10], int result[10][10], int rows, int cols)
{
  for(int i=0;i<rows;i++)
    for(int j=0;j<cols;j++)
      result[i][j] = m[i][j] - n[i][j];
}

// function to multiply two 3x3 matrix
void multiply(int m[10][10], int n[10][10], int result[10][10], int rows, int cols)
{
  for(int i=0; i < rows; i++)
  {
    for(int j=0; j < cols; j++)
    {
      result[i][j] = 0; // assign 0
      // find product
      for (int k = 0; k < cols; k++)
      result[i][j] += m[i][k] * n[k][j];
    }
  }
}

// function to display 3x3 matrix
void display(int mat[10][10], int rows, int cols)
{
  for(int i=0; i<rows; i++)
  {
    for(int j=0; j<cols; j++)
      printf("%d\t",mat[i][j]);

    printf("\n");
  }
}

int main() {
    int a[10][10], b[10][10], c[10][10], i, j, rows, cols;

    printf("Enter the no. of rows: ");
    scanf("%d", &rows);
    printf("Enter the no. of columns: ");
    scanf("%d", &cols);

    printf("Enter the elements of matrix-1: \n");
        for(i=0;i<rows;i++)
            for(j=0;j<cols;j++)
                scanf("%d",&a[i][j]);

    printf("Enter the elements of matrix-2: \n");
    for(i=0;i<rows;i++)
        for(j=0;j<cols;j++)
            scanf("%d",&b[i][j]);


    printf("First Matrix:\n");
    display(a, rows, cols);
    printf("Second Matrix:\n");
    display(b, rows, cols);

    int choice;

    do {
        printf("\nChoose the matrix operation,\n");
        printf("----------------------------\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Exit\n");
        printf("----------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            add(a, b, c, rows, cols);
            printf("Sum of matrix: \n");
            display(c, rows, cols);
            break;
        case 2:
            subtract(a, b, c, rows, cols);
            printf("Subtraction of matrix: \n");
            display(c, rows, cols);
            break;
        case 3:
            multiply(a, b, c, rows, cols);
            printf("Multiplication of matrix: \n");
            display(c, rows, cols);
            break;
        case 4:
            printf("Exiting...\n");
            exit(0);
        default:
            printf("Invalid input.\n");
            printf("Please enter the correct input.\n");
        }
    }   while(1);


    // char bool;
	// do
	// {
	// 	//..............
	// 	printf("Code\n");
	// 	//..........



	// 	//..at the end of your code
	// 	printf("Do you Want to Continue(yes/no) ?");
	// 	scanf("%c",&bool);
	// 	 if(bool=='n' || bool=='N')
	// 		break;
    //   else if(bool=='y' || bool=='Y')
    //
	// }while(1);

    printf("\nBy: Mohak Sharma\n12-CSEA-19");
    printf("\nPerformed on: 16th March, 2021.");


    return 0;
}