/*
Problem statement
 
A magazine committee is to be formed that consists of any 3 members to be selected from
{ Nikhita, Aboli, Megha, Sanika, Pratik, Saurabh}. Write C/C++ program to list all possible
committees.

IN SHORT - COMBINATION

Efficient way is to use recursion
*/


#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int* array;
int size;
int n;
int r;

void fill_array(){
	for(int i=0; i<size; i++){
		cout<<"ENter a number: ";
		cin>>array[i];
	}
}

void swap(int l_index, int r_index){	
	int temp=array[l_index];
	array[l_index]=array[l_index+1];
	array[l_index+1]=temp;
}

void recursion(int l_index,int r_index){
	if(l_index != r_index){
		for(int i=l_index; i<l_index+r; i++){
			cout<<array[i]<<" ";
		}cout<<endl;
		swap(++l_index, r_index);
		recursion(l_index, r_index);
	}	
}



int main(){
	cout<<"Enter the size of array: ";
	cin>>size;
	array = new int[size];
	fill_array();
	
	cout<<"Enter r: ";
	cin>>r;
	
	recursion(0, r);
	
	return 0;
}
