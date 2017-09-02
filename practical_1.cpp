/*

Problem statement

Write C/C++ program to store marks scored for first test of subject 'Data Structures and
Algorithms' for N students. Compute
I. The average score of class
ii. Highest score and lowest score of class
iii. Marks scored by most of the students
iv. list of students who were absent for the test

*/

#include<iostream>
using std::cout;
using std::cin;
using std::endl;

struct Student_database{
	char name[20];
	int roll_no;
	char present;
	float marks;
}stu_data[20];

int size; // Number of students

void fill_details(){
	cout<<"\nEnter the number of students: ";
	cin>>size;
	for(int i=0; i<size; i++){
		cout<<"----------------------------------\n";
		cout<<"Name of the student: ";
		cin>>stu_data[i].name;
		cout<<"RollNo of the student: ";
		cin>>stu_data[i].roll_no;
		cout<<"Enter 'p' if student was present: ";
		cin>>stu_data[i].present;
		cout<<"Marks scored by the student: ";
		cin>>stu_data[i].marks;		
	}
}
void display_details(){
	for(int i=0; i<size; i++){
		cout<<"\nName of the student: "<<stu_data[i].name<<endl;
		cout<<"RollNo of the student: "<<stu_data[i].roll_no<<endl;
		cout<<"Marks scored by the student: "<<stu_data[i].marks<<endl;
	}
}
void average_marks(){
	float average=0;
	for(int i=0; i<size; i++){
		average = average + stu_data[i].marks;
	}
	cout<<"\nAverage marks scored by the class: "<<average/size<<endl;
}
void highest_marks(){
	int highest=0;
	for(int i=0; i<size; i++){
		if(stu_data[i].marks>highest){
			highest = stu_data[i].marks;		
		}
	}
	cout<<"\nHighest marks scored in the test: "<<highest<<endl;
}
void common_marks(){}

void absent_students(){	
	for(int i=0; i<size; i++){
		if(stu_data[i].present!='p')
			cout<<"\n"<<stu_data[i].name<<" was absent\n";
	}
}

void menu(){
	int choice;
	int on=1;
	cout<<"1. Fill student details\n";
	cout<<"2. Display student details\n";
	cout<<"3. Show average score\n";
	cout<<"4. Show highest score\n";
	cout<<"5. Show absent students\n";
	cout<<"6. Show most scored marks\n";
	while(on == 1){
		cout<<"\nEnter your choice: ";
		cin>>choice;
		switch(choice){
			case 0:				
				on=0;//To exit out of the loop(Program)	
				break;		
			case 1:
				fill_details();
				break;
			case 2:
				display_details();
				break;
			case 3:
				average_marks();
				break;
			case 4:
				highest_marks();
				break;		
			case 5:
				absent_students();
				break;		
			case 6:
				common_marks();
				break;						
			default:	
				cout<<"Invalid Entry!\n";
		};
	}
}


int main(){
	menu();
	return 0;
}

















