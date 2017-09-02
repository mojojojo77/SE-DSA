/*
Problem statement
 
A magazine committee is to be formed that consists of any 3 members to be selected from
{ Nikhita, Aboli, Megha, Sanika, Pratik, Saurabh}. Write C/C++ program to list all possible
committees.

IN SHORT - COMBINATION
*/




#include<iostream>

using std::cout;
using std::cin;
using std::endl;

struct magzine_committee{
	char name[10];
}str[6];


int main(){
	int counter=0;
	
	for(int i=0; i<6; i++){
		cout<<"Enter Name: ";
		cin>>str[i].name;
	}
	cout<<"\n\n";
	for(int i=0; i<6; i++){
		for(int j=i+1; j<6; j++){
			for(int k=j+1;k<6;k++){
				cout<<str[i].name<<" "<<str[j].name<<" "<<str[k].name<<endl;
				counter++;
			}
		}
	}
	cout<<"\n\n"<<counter<<endl;
}
