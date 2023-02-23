#include<iostream>
using namespace std;
int main()
{
     int choice;
     
    
     cout<<"Enter program number from 1 to 9 to run that program";
     cin>>choice;
     switch(choice)
     {
           case 1:
			    int arr444[5],i,min;
				for(i=0; i<5; i++)
				{
				    cout<<"Enter the Number ";
				    cin>>arr444[i];
			    }
			    for(i=0; i<5; i++)
			    {
			    	cout<<"The number is "<<arr444[i]<<endl;
				}
				min=arr444[0];
				for(i=0; i<5; i++)
				{
					if(min>arr444[i])
					{
						min=arr444[i];
					}
				}
				cout<<"The min number is "<<min;
                
                break;
           case 2:
           	int arr4442[5],j,max;
			for(j=0; j<5; j++)
			{
			    cout<<"Enter the Number ";
			    cin>>arr4442[j];
		    }
		    for(j=0; j<5; j++)
		    {
		    	cout<<"The number is "<<arr4442[j]<<endl;
		    }
		    max=arr4442[0];	
		    for(j=0; j<5; j++)
			{
				if(max<arr4442[j])
				{
					max=arr4442[j];
				}
			}
			cout<<"The max number is "<<max;
               
                break;
		      	case 3:
		      			int arr4443[5],a;
				for(i=0; i<5; i++)
				{
				    cout<<"Enter the Number ";
				    cin>>arr4443[i];
			    }
			    for(i=0; i<5; i++)
			    {
			    	cout<<"The number is "<<arr4443[i]<<endl;
			    }
			    bool flag;
			    cout<<"Enter the number for finding ";
			    cin>>a;
			    for(i=0; i<5; i++)
			    {
			    	if(a==arr4443[i])
			    	{
			    		flag++;
					}
				}
					if(flag==1)
					{
						cout<<"Number s present";	
					}
					else
					{
						cout<<"Number is not present";
					}
               
                break;
                case 4:
                	int arr4[5],count;
					for(i=0; i<5; i++)
					{
					    cout<<"Enter the Number ";
					    cin>>arr4[i];
				    }
				    for(i=0; i<5; i++)
				    {
				    	cout<<"The number is "<<arr4[i]<<endl;
				    }
				    count=0;
				    cout<<"Enter the number for count ";
				    cin>>a;
				    for(i=0; i<5; i++)
				    {
				    	if(a==arr4[i])
				    	{
				    		count++;
						}
					}
					cout<<count;
                	               	
                	break;
                case 5:
                		int arr5[5];
						for(i=0; i<5; i++)
						{
						    cout<<"Enter the Number ";
						    cin>>arr5[i];
					    }
					    for(i=0; i<5; i++)
					    {
					    	cout<<"The number is "<<arr5[i]<<endl;
					    }
					    bool flag1;
					    for(i=0; i<5; i++)
					    {
					    	if(arr5[i]%2!=0)
					    	{
					    		cout<<"Odd number "<<arr5[i]<<endl;
					    		flag1++;
							}
						}
						if(flag1==0)
						{
							cout<<"No odd number is present";
						}

                	break;
                	case 6:
                		int arr6[5];
						for(i=0; i<5; i++)
						{
						    cout<<"Enter the Number ";
						    cin>>arr6[i];
					    }
					    for(i=0; i<5; i++)
					    {
					    	cout<<"The number is "<<arr6[i]<<endl;
					    }
					    bool flag2;
					    for(i=0; i<5; i++)
					    {
					    	if(arr6[i]%2==0)
					    	{
					    		cout<<"Even Number "<<arr6[i]<<endl;
					    		flag2++;
							}
						}
						if(flag2==0)
						{
							cout<<"No even number is present";
						}

                		break;
                	case 7:
                			int arr7[5],sum;
							for(i=0; i<5; i++)
							{
								cout<<"Enter a number ";
								cin>>arr7[i];
							}
							for(i=0; i<5; i++)
							{
								cout<<"The number at "<<i<<" is "<<arr7[i]<<endl;
							}
							sum=0;
							for(i=0; i<5; i++)
							{
								sum=sum+arr7[i];
							}
							cout<<"The sum is "<<sum;
                		break;
                		case 8:
                			int arr8[5];
							for(i=0; i<5; i++)
							{
								cout<<"Enter a number ";
								cin>>arr8[i];
							}
							for(i=0; i<5; i++)
							{
								cout<<"The number at "<<i<<" is "<<arr8[i]<<endl;
							}
							cout<<"The reverse values are"<<endl;
							for(i=4; i>=0; i--)
							{
								cout<<"The number at "<<i<<" is "<<arr8[i]<<endl;
							}

                			break;
                			case 9:
                					int arr9[10];
										for (int i = 0; i < 10; i++)
										{
											cout << "Enter value of " << i + 1 << " : ";
											cin >> arr9[i];
									
										}
										cout << "\n Values of arr9ay are : ";
										for (int i = 0; i < 10; i++)
										{
											cout << arr9[i] << "  ";
										}
										cout << "\n";
										//Printing Unique elements
										cout << "\n Unique elements are ";
										int count1;
										for (int i = 0; i < 10; i++)
										{
											count1 = 0;
											for (int j = 0; j < 10; j++)
											{
												if (i != j)
												{
													if (arr9[i] == arr9[j])
													{
														count1++;
													}
												}
											}
											if (count1 == 0)
											{
												cout << "'"<<arr9[i] << "'       ";
											}
										}
	                				break;
	                				
	                				
                	
			                              
     
 	 }
 	
 	 {
 	 	
 	 	
	  }
          return 1;
}     

