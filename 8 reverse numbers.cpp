//input 5 num from user and print numbers in reverse
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int arr[5],i;
	for(i=0; i<5; i++)
	{
		cout<<"Enter a number ";
		cin>>arr[i];
	}
	for(i=0; i<5; i++)
	{
		cout<<"The number at "<<i<<" is "<<arr[i]<<endl;
	}
	cout<<"The reverse values are"<<endl;
	for(i=4; i>=0; i--)
	{
		cout<<"The number at "<<i<<" is "<<arr[i]<<endl;
	}
}
