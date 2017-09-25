#include<iostream>

using namespace std;

int main(){
	float num_one,num_two;
	char controller = 'Y',var_operator;
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
		cout<<"Enter 'Y' to continue: ";
		cin>>controller;
	}while(controller == 'Y');
	return 0;
}


//setw();
