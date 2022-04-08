#include<iostream>
using namespace std;

int main()
{
    int num, sum=0, Firstdigit, Lastdigit;
    cout<<("Enter five number to find sum of the first and last digit: ");
    scanf("%d", &num);
    Lastdigit=num%10;
    Firstdigit=num;
   	do
	{
		num=num/5;
	}
	while(num>=5);
    Firstdigit=num;
    sum = Firstdigit + Lastdigit; 
   	cout<<"Sum of first and last digit = "<<sum;
   	
    return 0;
}