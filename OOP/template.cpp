#include<iostream>
#include<iomanip>	//setw() will be used to align the output 

using namespace std;

template<class sort>// Here sort is a generic datatype which will replace the datatype of the array passed
void selectionSort(sort* arr, int size){
	sort temp;
	for(int i=0; i<size; i++){ // Algorithm for selection sort
		for(int j=i; j<size; j++){
			if(arr[j]<arr[i]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}                     
	}
}

template<class sort>
void displayArray(sort* arr, int size){
	for(int i=0; i<size; i++){
		cout<<setw(5)<<arr[i]<<" ";
	}	
	cout<<endl;
}


int main(){
	int array_1[] = {2,3,4,5,6,1,34};
	float array_2[] = {2.2,3,4,5,6,1,34};
	char array_3[] = "arnavsa";
	string array_4 = "rafarna";

	selectionSort(array_1,7);
	displayArray(array_1,7);
	
	selectionSort(array_2,7);
	displayArray(array_2,7);
	
	selectionSort(array_3,7);
	displayArray(array_3,7);
	
	selectionSort(&array_4[0],7);
	displayArray(&array_4[0],7);
	
	 
	return 0;
}
