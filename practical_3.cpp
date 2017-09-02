/*
A magic square is an n * n matrix of the integers 1 to n^2 such that the sum of each row,
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
			matrix[n][n]=0;
		}
	}
}

int main(){
	int n;
	cout<<"Enter dimension: ";
	cin>>n;
	
	generate_square(n);
	
	return 0;
}
