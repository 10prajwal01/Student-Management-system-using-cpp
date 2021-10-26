#include<iostream>
using namespace std;

string ar1[20],ar2[20],ar4[20];
int ar3[20];
float ar5[20];
int total=0;

void enter()
{
		int ch=0;
			cout<<"How many students do you want to enter??"<<endl;
			cin>>ch;
			if(total==0)
			{
			total=ch+total;
			for(int i=0;i<ch;i++)
			{
				cout<<"\nEnter the Data of student "<<i+1<<endl<<endl;
				cout<<"Enter name ";
				cin>>ar1[i];
				cout<<"Enter USN ";
				cin>>ar2[i];
				cout<<"Enter semester ";
				cin>>ar3[i];
				cout<<"Enter course ";
				cin>>ar4[i];
				cout<<"Enter GPA ";
				cin>>ar5[i];
			}
	    	}
	    	else
	    	{
	    		for(int i=total;i<ch+total;i++)
			{
				cout<<"\nEnter the Data of student "<<i+1<<endl<<endl;
				cout<<"Enter name ";
				cin>>ar1[i];
				cout<<"Enter USN ";
				cin>>ar2[i];
				cout<<"Enter semester ";
				cin>>ar3[i];
				cout<<"Enter course ";
				cin>>ar4[i];
				cout<<"Enter GPA ";
				cin>>ar5[i];
			}
			total=ch+total;
			}
}

void show()
{
	if(total==0)
	{
		cout<<"No data is entered"<<endl;
	}
	else
	{
		for(int i=0;i<total;i++)
    		{
	    		cout<<"\nData of Student "<<i+1<<endl<<endl;
	    		cout<<"Name "<<ar1[i]<<endl;
	    		cout<<"USN "<<ar2[i]<<endl;
	    		cout<<"Semester "<<ar3[i]<<endl;
	    		cout<<"Course "<<ar4[i]<<endl;
	    		cout<<"GPA "<<ar5[i]<<endl;
	    	}
    }
}

void search()
{
	if(total==0)
        {
        cout<<"No data is entered"<<endl;
        }
 	else
	{
    string rollno;
	cout<<"Enter the USN of student"<<endl;
    cin>>rollno;
		for(int i=0;i<total;i++)
				{
					if(rollno==ar2[i])
				    {
						cout<<"Name "<<ar1[i]<<endl;
	    	        	cout<<"USN "<<ar2[i]<<endl;
	    		        cout<<"Semester "<<ar3[i]<<endl;
	    		        cout<<"Course "<<ar4[i]<<endl;
	    	        	cout<<"GPA "<<ar5[i]<<endl;
					}
				}
			}
}

void update()
{
	if(total==0)
	{
		cout<<"No data is entered"<<endl;
    }
    else
    {
		string rollno;
				cout<<"Enter the USN of student which you want to update"<<endl;
				cin>>rollno;
					for(int i=0;i<total;i++)
				{
					if(rollno==ar2[i])
					{
						cout<<"\nPrevious data"<<endl<<endl;
						cout<<"Data of Student "<<i+1<<endl;
						cout<<"Name "<<ar1[i]<<endl;
	    	        	cout<<"USN "<<ar2[i]<<endl;
	    		        cout<<"Semester "<<ar3[i]<<endl;
	    		        cout<<"Course "<<ar4[i]<<endl;
	    	        	cout<<"GPA "<<ar5[i]<<endl;
	    	        	cout<<"\nEnter new data"<<endl<<endl;

							cout<<"Enter name ";
				            cin>>ar1[i];
				            cout<<"Enter USN ";
							cin>>ar2[i];
			             	cout<<"Enter semester ";
				            cin>>ar3[i];
				            cout<<"Enter course ";
				            cin>>ar4[i];
				            cout<<"Enter GPA ";
				            cin>>ar5[i];
					}
				}
			}
		}

void deleterecord()
{
	if(total==0)
	{
		cout<<"No data is entered"<<endl;
	}
	else
	{
		int a;
	        	cout<<"Press 1 to delete all record"<<endl;
				cout<<"Press 2 to delete specific record"<<endl;
				cin>>a;
				if(a==1)
				{
					total=0;
					cout<<"All record is deleted.!"<<endl;
				}
				else if(a==2)
				{
				string rollno;
				cout<<"Enter the USN of student which you wanted to delete"<<endl;
				cin>>rollno;
				for(int i=0;i<total;i++)
				{
					if(rollno==ar2[i])
					{
						for(int j=i;j<total;j++)
						{
						ar1[j]=ar1[j+1];
						ar2[j]=ar2[j+1];
					    ar3[j]=ar3[j+1];
						ar4[j]=ar4[j+1];
						ar5[j]=ar5[j+1];
				     	}
					total--;
					cout<<"Your required record is deleted"<<endl;
					}
				}
				}
			else 
			{
				cout<<"Invalid input";
			}
}
}

main()
{
	int value;
	cout<<"\n-----------------------------"<<endl;
	cout<<"| STUDENT MANAGEMENT SYSTEM |"<<endl;
	cout<<"-----------------------------"<<endl;
	while(true)
	{
	cout<<"\nPress 1 to enter data"<<endl;
	cout<<"Press 2 to show data"<<endl;
	cout<<"Press 3 to search data"<<endl;
	cout<<"Press 4 to update data"<<endl;
	cout<<"Press 5 to delete data"<<endl;
	cout<<"Press 6 to exit"<<endl;
	cout<<"-----------------------------"<<endl;
	cin>>value;
	cout<<"-----------------------------"<<endl;

	switch(value)
	{
		case 1:
			enter();
			break;
		case 2:
			show();
			break;
		case 3:
			search();
			break;
		case 4:
			update();
			break;
		case 5:
			deleterecord();
			break;
		case 6:
			exit(0);
			break;
		default:
			cout<<"Invalid input"<<endl;
			break;
	}
}
}