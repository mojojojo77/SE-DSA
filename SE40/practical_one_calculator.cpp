/*
Write a C++ program create a calculator for an arithmetic operator (+, -, *, /). The program
should take two operands from user and performs the operation on those two operands
depending upon the operator entered by user. Use a switch statement to select the operation.
Finally, display the result.

Roll no - 40 
  Batch - C
*/

#include<iostream>

using namespace std;

int main(){
	float num_one,num_two;
	char controller = 'y',var_operator;
	
	do{
		cout<<"Enter Number One: ";
		cin>>num_one;
		cout<<"Enter Number Twoe: ";
		cin>>num_two;
		cout<<"Enter Operator: ";
		cin>>var_operator;
		
		switch(var_operator){
			case '+':
				cout<<num_one+num_two<<endl;
				break;
			case '-':
				cout<<num_one-num_two<<endl;
				break;
			case '*':
				cout<<num_one*num_two<<endl;
				break;
			case '/':
				cout<<num_one/num_two<<endl;
				break;
			case '%':
				cout<<(int)num_one%(int)num_two<<endl;
				break;
			default:
				cout<<"Invalid operator entry"<<endl;
		}
		cout<<"Enter 'y' to continue: ";
		cin>>controller;
	}while(controller == 'y');
	
	return 0;
}
