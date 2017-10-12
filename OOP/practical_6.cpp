/*
Imagine a publishing company which does marketing for book and audiocassette versions.
Create a class publication that stores the title (a string) and price (type float) of a publication.
From this class derive two classes: book, which adds a page count (type int), and tape, which
adds a playing time in minutes (type float).
Write a program that instantiates the book and tape classes, allows user to enter data and
displays the data members. If an exception is caught, replace all the data member values with
zero values.

Virtual Function
*/

#include<iostream>
using namespace std;

class Publication{
	protected: 
		string title;
		float price;
};

class Book: private Publication{};
class Tape: private Publication{};

int main(){

	return 0;
}
