//input 5 num from user and check whether num is present or not
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int arr[5],i,a;
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
    cout<<"Enter the number for finding ";
    cin>>a;
    for(i=0; i<5; i++)
    {
    	if(a==arr[i])
    	{
    		flag++;
		}
	}
		if(flag==1)
		{
			cout<<"Number is present";	
		}
		else
		{
			cout<<"Number is not present";
		}
}
