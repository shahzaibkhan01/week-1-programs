//input 5 num from user and print only odd numbers
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int arr[5],i;
	for(i=0; i<5; i++)
	{
	    cout<<"Enter the Number ";
	    cin>>arr[i];
    }
    for(i=0; i<5; i++)
    {
    	cout<<"The number is "<<arr[i]<<endl;
    }
    bool flag;
    for(i=0; i<5; i++)
    {
    	if(arr[i]%2!=0)
    	{
    		cout<<"Odd number "<<arr[i]<<endl;
    		flag++;
		}
	}
	if(flag==0)
	{
		cout<<"No odd number is present";
	}
}
