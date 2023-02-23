//input 5 num from user and print max num
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int arr[5],i,max;
	for(i=0; i<5; i++)
	{
	    cout<<"Enter the Number ";
	    cin>>arr[i];
    }
    for(i=0; i<5; i++)
    {
    	cout<<"The number is "<<arr[i]<<endl;
    }
    max=arr[0];	
    for(i=0; i<5; i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	cout<<"The max number is "<<max;
}
