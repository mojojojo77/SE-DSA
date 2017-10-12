// Exception Handling

#include<iostream>
#include<string>
using namespace std;

//Prototypes
void checkAge(int);
void checkIncome(double);
void checkWheels(int);
void checkCity(string);

int main(){
// Try for User's Age
	try{
		int age;
		cout<<"Enter users age: ";
		cin>>age;
		checkAge(age);
	}
	catch(int){
		cout<<"Age doesn't satisfy the cirteria!"<<endl;
	}

// Try for user's income
	try{
		double income;
		cout<<"Enter users Income: "<<endl;
		cin>>income;
		checkIncome(income);
	}
	catch(double){
		cout<<"Income doesn't satisfy the cirteria!"<<endl;	
	}

// Try for user's type of car
	try{
		int wheels;
		cout<<"Number of wheels: "<<endl;
		cin>>wheels;
		checkWheels(wheels);
	}
	catch(int){
		cout<<"Number of wheels doesn't satisty the criteria!"<<endl;	
	}
	
// Try for user's city of stay
	try{
		string city;
		cout<<"Enter users city: "<<endl;
		cin>>city;
		checkCity(city);
	}
	catch(string){
		cout<<"City of stay doesn't satisfy the criteria!"<<endl;	
	}
	
	return 0;
}

// Function definitions

void checkAge(int age){
	if(!(age>17&&age<56)){
		throw age;
	}	
	else{
		cout<<"Age is: "<<age<<endl;
	}
}

void checkIncome(double income){
	if(!(income>=50000&&income<=100000)){
		throw income;
	}	
	else{
		cout<<"Income is: "<<income<<endl;
	}
}

void checkWheels(int wheels){
	if(wheels != 4){
		throw wheels;
	}	
	else{
		cout<<"Wheels are: "<<wheels<<endl;
	}
}

void checkCity(string city){
	if(city=="Pune"||city=="Delhi"||city=="Mumbai"||city=="Chennai"){
		cout<<"City is: "<<city<<endl;
	}	
	else{
		throw city;
	}
}


