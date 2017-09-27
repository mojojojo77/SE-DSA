<<<<<<< HEAD
/*			PROBLEM DEFINITION
Write C++ program for storing appointment schedule for day. Appointments are booked
randomly using linked list. Set start and end time and min and max duration for visit slot.
Write functions for-
a) Display free slots
b) Book appointment
c) Cancel appointment ( check validity, time bounds, availability etc)
d) Sort list based on time
e) Sort list based on time using pointer manipulation
*/


// Time slots will be based on hours and minutes in 24 hours format
// Working hours are between 7 to 17 hours (7AM - 5PM)
// 60 Minutes margin will have to be set. Otherwise it will count till 100.
// Minimum and Maximum time for an appointment has to be between 30 minutes to 2 hours


// Time Will be represented using array.
// Appointments will be represented using linked list.

#include<iostream>
#include<string>

// i'th index represents hour
// 0 = 7 and 10 = 17
// j'th index represents minutes 

// If and index is set to char 'A' it means it is available. 'B' represents Booked.
char time[10][60]; 

void free_all_slots(){
	for(int i=0; i<10; i++){
		for(int j=0; j<60; j++){
			time[i][j]='A';
		}
	}
}

// Appointments will be set randomly using linked list with struct
struct appointment{

	
	
	string name;
	string purpose;
	

	int starting_point_h;
	int starting_point_m;
	
	int ending_point_h;
	int eding_point_m;
	
};
