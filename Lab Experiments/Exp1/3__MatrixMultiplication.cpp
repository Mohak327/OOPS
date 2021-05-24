
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

	cout<<"Enter number of rows of matrix A: ";
	cin>>ar;
	cout<<"Enter number of columns of matrix A: ";
	cin>>ac;

	cout<<"Enter number of rows of matrix B: ";
	cin>>br;
	cout<<"Enter number of columns of matrix B: ";
	cin>>bc;

	Matrix m;
	cout << "\nEnter the elements of matrix A: ";
	int **A = m.inputMatrix(ar,ac);
	cout << "Enter the elements of matrix B: ";
	int **B = m.inputMatrix(br,bc);

	cout<<"Matrix A is \n";
	m.printMatrix(A,ar,ac);

	cout<<"Matrix B is \n";
	m.printMatrix(B,br,bc);

	cout<<"Product of matrices is \n";
	m.prodMatrix(A,ar,ac,B,br,bc);


	return 0;
}