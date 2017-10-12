#include<iostream>
#include<stack>
using namespace std;

int main()
{
	stack<int> a;
	stack<int> b;
	stack<int> c;
	char str1[5],str2[5];
	cout<<"enter the first binar no:";
	cin>>str1;
	cout<<"enter the second binary no:";
	cin>>str2;
	for(int i=0;str1[i]!='\0';i++)
	{
		if(str1[i]=='0')
			a.push(0);
		else
			a.push(1);
	}

	for(int i=0;str2[i]!='\0';i++)
	{
		if(str2[i]=='0')
			b.push(0);
		else
			b.push(1);
	}
	
	int carry=0,sum,x,y;
	while(!a.empty())
	{
		x=a.top();
		y=b.top();
		a.pop();
		b.pop();
		sum=carry+x+y;
		carry=sum/2;
		sum=sum%2;
		c.push(sum);
	}
	c.push(carry);
	cout<<"Binary Addition is:\n";
	while(!c.empty())
	{
		cout<<c.top();
		c.pop();
	}
cout<<"\n";
return 0;
}

/*output

indro@indro:~/Desktop/c_program$ g++ stl_binary_add.cpp -o stl
indro@indro:~/Desktop/c_program$ ./stl
enter the first binar no:1111
enter the second binary no:0001
Binary Addition is:
10000
indro@indro:~/Desktop/c_program$ 
*/
