#include<iostream>
using namespace std;

int main()
{
    int i;
    float mark, sum=0, avg;
    cout<<"Enter Marks obtained in 6 Subjects: ";
    for(i=0; i<5; i++)
    {
        cin>>mark;
        sum = sum+mark;
    }
    avg = sum/6;
    cout<<"\nGrade = ";
    if(avg>=90 && avg<=100)
    {
    	cout<<"A";
	}
    else if(avg<=80 && avg<=89)
    {
    	cout<<"B";
	}
    else if(avg>=70 && avg>=79)
    {
    	cout<<"C";
	}
    else if(avg>=60 && avg<=69)
    {
    	cout<<"D";
	}
    else
   {
   	 cout<<"F";
   }
    return 0;
}