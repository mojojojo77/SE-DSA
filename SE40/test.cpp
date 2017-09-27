#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char city[10]="Pune";

	if(strcmp(city, "Pune")&& strcmp(city, "Mumbai") && strcmp(city, "Nashik")){
		cout<<"Doesnt Matche";
	}
	else{
		cout<<"Mathces";
	}
	
	return 0;
}
