/*
Create employee bio-data using following classes 
i)   Personal record 
ii)  Professional record 
iii) Academic record Assume appropriate data members and member function to accept required data & print bio-data. Create bio-data using multiple inheritance using C++.
*/

#include<iostream>
using namespace std;

// This class will store employees personal record. 
// name, age, gender, contact_no
class Personal_record{
	protected:
		string name;
		short age;
		char gender;
		string contact;	
};

// This class will store employees professional record
// experience, salary 
class Professional_record{
	protected:
		short experience;
		int salary;
};

// This class will store employees academic record
// degree, year of graduation, grade
class Academic_record{
	protected:
		string degree;
		short grd_year;
		char grade;
};

class Bio_data:private Personal_record, private Professional_record, private Academic_record{
	public:
		void set_record(){
			// Personal Record
			cout<<"Personal Record: \n";
			cout<<"Enter Name: ";
			cin>>name;
			cout<<"Enter Age: ";
			cin>>age;
			cout<<"Enter Gender: ";
			cin>>gender;
			cout<<"Enter Contact Info: ";
			cin>>contact;	
			
			// Professional Record
			
			cout<<"Enter Years of experience: ";
			cin>>experience;
			cout<<"Enter Salary: ";
			cin>>salary;
			
			// Academic Record
			cout<<"Enter Degree: ";
			cin>>degree;
			cout<<"Enter Graduation Year: ";
			cin>>grd_year;
			cout<<"Enter Grade: ";
			cin>>grade;
		}
		void get_record(){
			// Printing Record
			cout<<"Printing Record for "<<name;
			cout<<"\n Employees Age: "<<age<<"\n Employees Gender: "<<gender<<"\n Employees Contact Info: "<<contact<<"\n Employees Years of Experience: "<<experience<<"\n Employees Salary: "<<salary<<"\n Employees Degree: "<<degree<<"\n Employees Graduation Year: "<<grd_year<<"\n Employees Grade: "<<grade<<endl;
		}
};

int main(){
	int n;
	cout<<"Enter data for how many employees: ";
	cin>>n;
	
	Bio_data* bio = new Bio_data[n];
	for(auto i=0; i<n; i++){
		bio[i].set_record();
	}
	
	for(auto i=0; i<n; i++){
		bio[i].get_record();
	}
	
	delete [] bio;
	return 0;
}	
