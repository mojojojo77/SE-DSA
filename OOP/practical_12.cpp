#include<iostream>
#include<stack>
using namespace std;

int main()
{
	stack<int> s;
	int ch;
	char y;
	do
	{
		cout<<"Menu of operation to be perform\n";
		cout<<"1:push element\n2:pop element\n3:size of stack\n4:desplay";
		cout<<"Enter the choice\n";
		cin>> ch;
		switch(ch)
			{
				case 1:
						int no;
						cout<<"Enter the Element:";
						cin>>no;
						s.push(no);
						cout<<"element is push\t"<<s.top();
				break;
				
				case 2:
						int p;
						if(!s.empty())
						{
							cout<<"element is pop\t"<<s.top();
							s.pop();
						}
						else
						{
							cout<<"Stack is empty\n";
						}
				break;
			
				case 3:
						if(s.empty())
						{
							cout<<"Stack is empty\n";
						}
						else
						cout<<"size of stack\t"<<s.size();
				break;

				case 4:
						while(!s.empty())
							{
								cout<<" "<<s.top();
								s.pop();
							}
			}
			cout<<"\ndo you whant to continue enter y\n";
			cin>>y;
	}while(y=='y' || y=='Y');
cout<<"\n";
return 0;
}


/* output

indro@indro:~/Desktop/c_program$ g++ stl_stack.cpp -o stl
indro@indro:~/Desktop/c_program$ ./stl
Menu of operation to be perform
1:push element
2:pop element
3:size of stack
4:desplayEnter the choice
1
Enter the Element:10
element is push	10
do you whant to continue enter y
y
Menu of operation to be perform
1:push element
2:pop element
3:size of stack
4:desplayEnter the choice
1
Enter the Element:20
element is push	20
do you whant to continue enter y
y
Menu of operation to be perform
1:push element
2:pop element
3:size of stack
4:desplayEnter the choice
1
Enter the Element:30
element is push	30
do you whant to continue enter y
y
Menu of operation to be perform
1:push element
2:pop element
3:size of stack
4:desplayEnter the choice
2
element is pop	30
do you whant to continue enter y
y
Menu of operation to be perform
1:push element
2:pop element
3:size of stack
4:desplayEnter the choice
4
 20 10
do you whant to continue enter y
y
Menu of operation to be perform
1:push element
2:pop element
3:size of stack
4:desplayEnter the choice
3
Stack is empty

do you whant to continue enter y
n

indro@indro:~/Desktop/c_program$
*/
