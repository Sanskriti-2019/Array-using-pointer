#include <iostream>
using namespace std;

int main() 
{
	int *p;
	int arr[5];
	cout<<"Enter 5 Elements\n";
	for(int x=0;x<5;x++)
	{
		cin>>arr[x];
	}
	p = arr;
	cout<<"You Entered\n";
	for(int x=0;x<5;x++)
	{
		cout<<*p;
		p++;
	}
	return 0;
}
