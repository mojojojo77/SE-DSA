/*
A  square is an n * n matrix of the integers 1 to n^2 such that the sum of each row,
column, and diagonal is the same. Write C/C++ Program for magic square.

Note- This magic square is for when n is odd!
*/

#include<iostream>
using std::cout;
using std::cin;
using std::endl;


void generate_square(int n){
	int matrix[n][n];

// Set all the elements of matrix to zero
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			matrix[i][j]=0;
		}
	}
	
	int i = n/2;
    int j = n-1;
 
    // One by one put all values in magic square
    for(int num=1; num<=n*n;){
    	if (i==-1 && j==n){ //3rd condition
            j = n-2;
            i = 0;
        }
        else{
            if (j == n)
                j = 0;
                
            if (i < 0)
                i=n-1;
        }
        if (matrix[i][j]){ //2nd condition
            j -= 2;
            i++;
            continue;
        }
        else
            matrix[i][j] = num++; //set number
 
        j++; i--; //1st condition
	}
	
// Print Square	
	cout<<"The Magic Square Constant is : "<<n*(n*n+1)/2<<endl;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<matrix[i][j]<<"\t";
		}
		cout<<endl;
	}
}

int main(){
	int n;
	cout<<"Enter dimension: ";
	cin>>n;
	
	generate_square(n);
	
	return 0;
}
