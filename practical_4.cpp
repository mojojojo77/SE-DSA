/*
C++ Program for string operations
1. Copy
2. Concatanate
3. Length
4. Compare for equality
5. Revere
*/

#include<iostream>
using namespace std;

// Character string array declared
// Two strings are declared which we will be working on. 
char str_one[20];
char str_two[20];
int test = 0;
int control;

// Function prototypes
int str_length(char str_one[20]);
void get_strings();
void display_strings();
void str_copy();
void str_concate();
void str_reverse(char (&temp)[20]);
void menu();//  FOR MENU DRIVEN PROGRAM

// Functions declared
void get_strings(){
	cout<<"(Caution - String length should be less than 10!)"<<endl;
	cout<<"Enter first string: ";
	cin>>str_one;
	cout<<"Enter second string: ";
	cin>>str_two;
}
void display_strings(){
	cout<<"First string: "<<str_one<<endl;
	cout<<"Second string: "<<str_two<<endl;
}
void str_copy(){
	int temp = str_length(str_one);
	for(int i=0; i<20; i++){
		str_one[i] = '\0'; 		
	}
	for(int i=0;i<temp; i++){
		str_one[i] = str_two[i];
	}
	cout<<"String two copied to string one/-"<<endl;	
}
void str_concat(){
	int temp_length_one = str_length(str_one);
	int temp_length_two = str_length(str_two);
	for(int i=temp_length_one; i<temp_length_one+temp_length_two; i++){
		str_one[i] = str_two[i-temp_length_one];
	}
	cout<<"String two concatanated with string one/-"<<endl;
}

int str_length(char str_one[20]){
	int length = 0;
	for(int i=0; str_one[i] != '\0'; i++){
		length++;
	}
	return length;
}

void str_compare(){
	if(str_length(str_one) == str_length(str_two)){
		for(int i=0; i<str_length(str_one); i++){
			if(str_one[i] != str_two[i]){
				cout<<"Strings are not equal"<<endl;
				break;
			}else if(i == (str_length(str_one)-1)){
				cout<<"Strings are equal"<<endl;
			}
		}
	}
	else{
		cout<<"String are not equal"<<endl;
	}
}
void str_reverse(char (&temp)[20]){
	char temp_local;	
	int str_length_var = str_length(temp);
	for(int i=0; i<str_length_var/2; i++){
		temp_local = temp[i];
		temp[i] = temp[str_length_var-i-1];
		temp[str_length_var-i-1] = temp_local;
	}
	cout<<"Reversed String: "<<temp;
}

// Menu here
void menu(){
	cout<<"1. Enter strings"<<endl;
	cout<<"2. Display strings"<<endl;
	cout<<"3. Copy strings"<<endl;
	cout<<"4. Concatanate strings"<<endl;
	cout<<"5. String lengths"<<endl;
	cout<<"6. Compare Strings"<<endl;
	cout<<"7. Reverse strigns"<<endl;
	while(true)
	{
		cout<<"\nEnter your choice: ";
		cin>>control;

		switch(control){
			case 0:
				exit(0);
				break;
			case 1:
				get_strings();
				break;
			case 2:
				display_strings();
				break;
			case 3:
				str_copy();
				break;
			case 4:
				str_concat();
				break;
			case 5:
				cout<<"Length of first string: "<<str_length(str_one)<<endl;
				cout<<"Length of second string: "<<str_length(str_two)<<endl;
				break;
			case 6:
				str_compare();
				break;
			case 7:
				str_reverse(str_one);
				str_reverse(str_two);
				break;
			default:
				cout<<"Ivalid entry!."<<endl;
		}
	}
}


int main(){
	menu();
	return 0;
}
