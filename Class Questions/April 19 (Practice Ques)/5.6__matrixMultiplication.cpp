#include<bits/stdc++.h>
using namespace std;


class Matrix{
	public:
		int **inputMatrix(int r,int c){
			int**mat = new int*[r];
			for(int i=0;i<r;i++){
				mat[i] = new int[c];
				for(int j=0;j<c;j++){
					cin>>mat[i][j];
				}
			}
			return mat;
		}

		void printMatrix(int **mat,int r,int c){
			for(int i=0;i<r;i++){
				for(int j=0;j<c;j++){
					cout<<mat[i][j]<<" ";
				}
				cout<<endl;
			}
		}

		void prodMatrix(int** A,int ar,int ac,int** B,int br,int bc){
			if(ac==br){
				int **C = new int*[ar];
				for(int i = 0; i < ar; i++){
		        	C[i] = new int[bc];
		        	for(int j = 0; j < bc; j++){
		        		C[i][j] = 0;
			            for(int k = 0; k < ac; k++){
			                C[i][j] += (A[i][k] * B[k][j]);
		            	}
					}
				}

				for(int i = 0; i < ar; i++){
		        	for(int j = 0; j < bc; j++){
			            cout<<C[i][j]<<" ";
					}
					cout<<endl;
				}
//				printMatrix(C,ar,bc);
			}
			else{
				cout<<"Multiplication not possible\n";
			}
		}
};






int main(){
	int ar,ac,br,bc;

	cout<<"\nEnter number of rows of matrix A: ";
	cin>>ar;
	cout<<"Enter number of columns of matrix A: ";
	cin>>ac;

	cout<<"Enter number of rows of matrix B: ";
	cin>>br;
	cout<<"Enter number of columns of matrix B: ";
	cin>>bc;

	Matrix m1, m2, m3;

    cout << "\nEnter the elements of matrix-1: ";
    int **A = m1.inputMatrix(ar,ac);
    cout << "Enter the elements of matrix-2: ";
    int **B = m2.inputMatrix(br,bc);

	cout<<"\nMatrix A is \n";
	m1.printMatrix(A,ar,ac);

	cout<<"Matrix B is \n";
	m2.printMatrix(B,br,bc);

	cout<<"\nProduct of matrices is \n";
	m3.prodMatrix(A,ar,ac,B,br,bc);


	return 0;
}


