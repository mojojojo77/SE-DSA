#include<iostream>
#include<queue>
using namespace std;

int main(){
	bool test = true;
	queue<int> q;
	int ch;
	char y;
	while(test){
		cout<<"\n1. Enter element 2. Remove elements 3. Display elemens 4. size of queue  5. Quit: ";
		cin>>ch;
		switch(ch){
			case 1:
				int no;
				cout<<"\Enter Number to ADD: \n";
				cin>>no;
				q.push(no);
				cout<<no<<"Element is added\n";
				break;
			case 2:
				if(q.empty())
					cout<<"Queue is empty\n";	
				else{
					cout<<q.pop()<<"- Deleted from the queue";
				}
				break;
			case 3:
				if(!q.empty()){
					while(!q.empty()){
						cout<<" "<<q.front();	
						q.pop();
						}
				}
				else
				cout<<"queue is empty"<<endl;
				break;
			case 4:
				if(q.empty())
					cout<<"queue is empty";
				else
					cout<<"size of queue is"<<q.size()<<"\n";
				break;
			case 5: 
				test = false;
				break;
			default:
				cout<<"Enter a valid Entry! ";
		}
	}
	return 0;
}
