//input 5 num from user and check how many times a number is present
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int arr[5],i,a,count;
	for(i=0; i<5; i++)
	{
	    cout<<"Enter the Number ";
	    cin>>arr[i];
    }
    for(i=0; i<5; i++)
    {
    	cout<<"The number is "<<arr[i]<<endl;
    }
    count=0;
    cout<<"Enter the number for count ";
    cin>>a;
    for(i=0; i<5; i++)
    {
    	if(a==arr[i])
    	{
    		count++;
		}
	}
	cout<<count;
}
