/*
	Create a student database with Name, Roll number, Class, division,  Date of Birth, Blood group, Contact address, telephone 	   		number, driving license no. etc Construct the database  with  suitable  member  functions  for  initializing  and  destroying 		the  data  viz constructor, default constructor, Copy constructor, destructor, static member functions, friend class,			 		this pointer, inline code and dynamic memory allocation operators- new and delete.
*/

#include<iostream>
using namespace std;


class StudentDatabase{
	private:
		char name[20], bloodGroup[2],telephoneNumber[11], drivingLicenseNumber[10];
		static int pincode;
	public:
		friend class AccessDatabase;
		StudentDatabase();		
};

class AccessDatabase{
	private:
		float* marks_physics, *marks_chemistry, *marks_mathematics;
	public:
		AccessDatabase(); // Dynamically memory will be allocated in constructor
		~AccessDatabase(); // Dynamically alloted memory will be freed using destructor 
		void displayDatabase(StudentDatabase& );
};

//StudentDatabase functions here
int StudentDatabase::pincode = 001;

StudentDatabase::StudentDatabase(){
	cout<<"Enter name: ";
	cin>>this->name;
	cout<<"Enter telephone number: ";
	cin>>this->telephoneNumber;
	cout<<"Enter Driving License Number: ";
	cin>>this->drivingLicenseNumber;
	cout<<"Enter Blood Group: ";
	cin>>this->bloodGroup;
}

//AccessDatabase functions here

AccessDatabase::AccessDatabase(){
	marks_physics = new float;
	marks_chemistry = new float;
	marks_mathematics = new float;
	
	cout<<"Marks in Physics: ";
	cin>>*marks_physics;
	cout<<"Marks in Chemistry: ";
	cin>>*marks_chemistry;
	cout<<"Marks in Mathematics: ";
	cin>>*marks_mathematics;
}

AccessDatabase::~AccessDatabase(){
	delete marks_physics;
	delete marks_chemistry;
	delete marks_mathematics;
}

void AccessDatabase::displayDatabase(StudentDatabase& stdb){
	cout<<"\n\n\n---------Output-----------"<<endl;
	cout<<"Name :"<<stdb.name<<endl;
	cout<<"Blood Group :"<<stdb.bloodGroup<<endl;
	cout<<"Telephone Number :"<<stdb.telephoneNumber<<endl;
	cout<<"Driving License :"<<stdb.drivingLicenseNumber<<endl;
	cout<<"Pincode: "<<StudentDatabase::pincode<<endl;
	
	cout<<"Marks in physics: "<< *marks_physics<<endl;
	cout<<"Marks in Chemistry: "<< *marks_chemistry<<endl;
	cout<<"Marks in Mathematics: "<< *marks_mathematics<<endl;
}


int main(){
	StudentDatabase sdObj;
	AccessDatabase adObj;
	
	adObj.displayDatabase(sdObj);
	
	return 0;
}

/*
	Roll no - 40
	SE C-Batch
*/
