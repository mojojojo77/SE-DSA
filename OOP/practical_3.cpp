/*
	Create a student database with Name, Roll number, Class, division,  Date of Birth, Blood group, Contact address, telephone 	   		number, driving license no. etc Construct the database  with  suitable  member  functions  for  initializing  and  destroying 		the  data  viz constructor, default constructor, Copy constructor, destructor, static member functions, friend class,			 		this pointer, inline code and dynamic memory allocation operators- new and delete.

	Roll no - 40
	  Batch - C
*/

#include<iostream>
#include<iomanip>
using namespace std;

// Class which consist of student's personal details
class StudentDatabase{
	private:
		char name[20], bloodGroup[2],telephoneNumber[11], drivingLicenseNumber[10];
		static int pincode;
	public:
		friend class AccessDatabase;
		StudentDatabase();		
};

// Class which stores the student's marks and prints the personal details from the above class.	
class AccessDatabase{
	private:
		float* marks_physics, *marks_chemistry, *marks_mathematics;
	public:
		AccessDatabase(); // Dynamically, memory will be allocated in constructor
		~AccessDatabase(); // Dynamically, alloted memory will be freed using destructor 
		void displayDatabase(StudentDatabase&);
};

//StudentDatabase functions here
int StudentDatabase::pincode = 001;

StudentDatabase::StudentDatabase(){
	cout<<setw(30)<<"Enter name: ";
	cin>>this->name;
	cout<<setw(30)<<"Enter telephone number: ";
	cin>>this->telephoneNumber;
	cout<<setw(30)<<"Enter Driving License Number: ";
	cin>>this->drivingLicenseNumber;
	cout<<setw(30)<<"Enter Blood Group: ";
	cin>>this->bloodGroup;
}

//AccessDatabase functions here

AccessDatabase::AccessDatabase(){
	marks_physics = new float;
	marks_chemistry = new float;
	marks_mathematics = new float;
	
	cout<<endl;
	cout<<setw(30)<<"Marks in Physics: ";
	cin>>*marks_physics;
	cout<<setw(30)<<"Marks in Chemistry: ";
	cin>>*marks_chemistry;
	cout<<setw(30)<<"Marks in Mathematics: ";
	cin>>*marks_mathematics;
}

AccessDatabase::~AccessDatabase(){
	delete marks_physics;
	delete marks_chemistry;
	delete marks_mathematics;
}

void AccessDatabase::displayDatabase(StudentDatabase& stdb){
	cout<<"\n\n\n";
	cout<<setw(45)<<"---------Output-----------"<<endl;
	cout<<setw(30)<<"Name:"<<stdb.name<<endl;
	cout<<setw(30)<<"Blood Group:"<<stdb.bloodGroup<<endl;
	cout<<setw(30)<<"Telephone Number:"<<stdb.telephoneNumber<<endl;
	cout<<setw(30)<<"Driving License:"<<stdb.drivingLicenseNumber<<endl;
	cout<<setw(30)<<"Pincode: "<<StudentDatabase::pincode<<endl;
	
	cout<<setw(30)<<"Marks in physics: "<< *this->marks_physics<<endl;
	cout<<setw(30)<<"Marks in Chemistry: "<< *this->marks_chemistry<<endl;
	cout<<setw(30)<<"Marks in Mathematics: "<< *this->marks_mathematics<<endl;
}


int main(){
	StudentDatabase sdObj;
	AccessDatabase adObj;
	
	adObj.displayDatabase(sdObj);
	
	return 0;
}
