#include<iostream>
using namespace std;

int main ()
{
	float age;
	
	cout<<"Please enter your age:"<<endl;
	cin>>age;
	
	if(age>=18)
	{
		cout<<"You are a College Student";
	}
	else if(age<=12)
	{
		cout<<"You are an Elementary Student";
	}
	else
	{
		cout<<"You are a High School Student";
	}
	return 0;	
}