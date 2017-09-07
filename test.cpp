#include<iostream>
using namespace std;


int main(){

	int* ptr = (int*)malloc(sizeof(int));
	*ptr = 10;
	cout<<*ptr<<endl;
	cout<<ptr<<endl;
	
	free(ptr);
	
	cout<<*ptr<<endl;
	cout<<ptr<<endl;
	
	
	int* ptr2 = new int;
	*ptr2 = 20;

	cout<<*ptr2<<endl;
	cout<<ptr2<<endl;
	
	delete ptr2;
	
	*ptr2 = 10;
	
	cout<<*ptr2<<endl;
	cout<<ptr2<<endl;
	
	
	return 0;
}
