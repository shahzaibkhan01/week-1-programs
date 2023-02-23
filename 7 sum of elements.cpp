//input 5 num from user and print sum of all elements
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int arr[5],i,sum;
	for(i=0; i<5; i++)
	{
		cout<<"Enter a number ";
		cin>>arr[i];
	}
	for(i=0; i<5; i++)
	{
		cout<<"The number at "<<i<<" is "<<arr[i]<<endl;
	}
	sum=0;
	for(i=0; i<5; i++)
	{
		sum=sum+arr[i];
	}
	cout<<"The sum is "<<sum;
}
