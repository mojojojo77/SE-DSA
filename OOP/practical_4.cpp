/*
Implement a class Complex which represents the Complex Number data type. Implement the
following operations:
1. Constructor (including a default constructor which creates the complex number 0+0i).
2.
2. Overloaded operator+ to add two complex numbers.
3. Overloaded operator* to multiply two complex numbers.
4. Overloaded << and >> to print and read Complex Numbers.
*/

#include<iostream>
using namespace std;

class Complex{
	private:
		int real; // Stores real part of the complex number
		int imag; // Stores the imaginary part of the complex number
	public:
		Complex(); // Constructor to set the values of real and imag variables
		Complex operator+(const Complex&);
		Complex operator*(const Complex&);
/*
Why these operators must be overloaded as global?

In operator overloading, if an operator is overloaded as member, then it must be a member of the object on left side of the operator. For example, consider the statement “ob1 + ob2” (let ob1 and ob2 be objects of two different classes). To make this statement compile, we must overload ‘+’ in class of ‘ob1’ or make ‘+’ a global function.
The operators ‘<<' and '>>' are called like 'cout<<ob1' and 'cin>>ob1'. So if we want to make them a member method, then they must be made members of ostream and istream classes, which is not a good option most of the time. Therefore, these operators are overloaded as global functions with two parameters, cout and object of user defined class.
*/
		friend ostream& operator<<(ostream& out, const Complex&);
		friend istream& operator>>(istream& in, Complex&); // In the parameteres Complex is not declared as const because we will be inserting value into it. Which then, by definition can't be a const or it will give an error 
};

Complex::Complex(){
	this->real = 0;
	this->imag = 0;
}

Complex Complex::operator+(const Complex& c){
	Complex cr;
	
	cr.real = this->real + c.real;
	cr.imag = this->imag + c.imag; 
	
	return cr;
}

Complex Complex::operator*(const Complex& c){
	Complex cr;
	
	cr.real = (this->real*c.real)-(this->imag*c.imag);
	cr.imag = (this->real*c.imag)+(this->imag*c.real);
	
	return cr;
}

ostream& operator<<(ostream& out, const Complex& c){ // Referrence of cout is stored as out
    out<<c.real<<"+"<<c.imag<<"i";
    return out;
}

istream& operator>>(istream& in, Complex& c){ // Referrence of cin is stored as in
	cout<<"Enter Real: ";
	in>>c.real;
	cout<<"Enter Imag: ";
	in>>c.imag;
	return in;
}

int main(){
	Complex cObj1, cObj2;
	
	cin>>cObj1; // operator>>(cin, cObj);
	cin>>cObj2;
	
	cout<<cObj1+cObj2<<endl;
	cout<<cObj1*cObj2<<endl; // operator<<(cout,cObj1.operator(cObj2));
	 
	return 0;
}


/*
	We can't directly make an object of the ostream class as use it for output instead of cout;
	cout has special privelleges which our object won't have. 
	That's why we used reference of cout and cin in our argument list while overloading the insertion and 
	extraction operators.
*/

