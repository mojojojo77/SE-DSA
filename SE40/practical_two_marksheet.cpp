#include<iostream>
using namespace std;

struct student_database{
	char name[20];
	int roll_no;
	
	float marks_physics, marks_chemistry, marks_mathematics;
};

int main(){
	struct student_database student[10];
	int number;
	
	cout<<"Enter the number of students: ";
	cin>>number;
	
	
//Get Values	
	for(int i=0; i<number; i++){
		cout<<"Enter name: ";
		cin>>student[i].name;
		cout<<"Enter Roll.No: ";
		cin>>student[i].roll_no;
		cout<<"Marks in Physics: ";
		cin>>student[i].marks_physics;
		cout<<"Marks in Chemistry: ";
		cin>>student[i].marks_chemistry;
		cout<<"Marks in Mathematics: ";
		cin>>student[i].marks_mathematics;
	}
	return 0;
}
