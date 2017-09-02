#include<iostream>
#include<string>

using namespace std;


int str_len(string str){
	int i;
	for(i=0; str[i]!='\0'; i++);
	return i;
}

void recurrence(int l_index, int r_index, string str){
	if(l_index!=r_index){
		for(int i=0; i<r_index; i++){
			cout<<str<<endl;
			char temp=str[l_index+i];
			str[l_index+i] = str[l_index+i+1];
			str[l_index+i+1] = temp;
			recurrence(l_index+i,r_index,str);
		} 
	}
}


int main(){
	string str;
	int l_index,r_index;
	
	cout<<"Enter a string: ";
	cin>>str;
	
	l_index=0;
	r_index=str_len(str);
	

	recurrence(l_index,r_index,str);
	return 0;
}
