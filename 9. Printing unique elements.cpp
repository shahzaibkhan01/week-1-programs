#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		cout << "Enter value of " << i + 1 << " : ";
		cin >> arr[i];

	}
	cout << "\n Values of array are : ";
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << "\n";

	//Printing Unique elements
	cout << "\n Unique elements are ";
	int count;
	for (int i = 0; i < 10; i++)
	{
		count = 0;
		for (int j = 0; j < 10; j++)
		{
			if (i != j)
			{
				if (arr[i] == arr[j])
				{
					count++;
				}
			}
		}
		if (count == 0)
		{
			cout << "'"<<arr[i] << "'       ";
		}
	}
	
}