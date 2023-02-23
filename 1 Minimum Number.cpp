//input 5 num from user and print min num
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int arr[5],i,min;
	for(i=0; i<5; i++)
	{
	    cout<<"Enter the Number ";
	    cin>>arr[i];
    }
    for(i=0; i<5; i++)
    {
    	cout<<"The number is "<<arr[i]<<endl;
	}
	min=arr[0];
	for(i=0; i<5; i++)
	{
		if(min>arr[i])
		{
			min=arr[i];
		}
	}
	cout<<"The min number is "<<min;
}
