#include<iostream>
using namespace std;

int main()
{
    int i, n, number[4][5];
    cout<<"Enter 20 numbers in the 5 Column and 4 Row Size for Array: ";
    for(i=0;i<4;i++)
    {
    	for(n=0;n<5;n++)
    	{
    		cin>>number[i][n];
		}
    }
    cout<<"_______________________________"<<endl;
        cout<<"The Array of 5 Column and 4 Rows is: "<<endl;
    for(i=0;i<4;i++)
    {
        for(n=0;n<5;n++)
            cout<<number[i][n]<<"  ";
        cout<<endl;
    }
    cout<<"_____________________________________"<<endl;
    cout<<"Array Elements and its Index: "<<endl;
    for(i=0;i<4;i++)
    {
        for(n=0;n<5;n++)
            cout<<"number["<<i<<"]["<<n<<"] = "<<number[i][n]<<"  ";
        cout<<endl;
    }
    cout<<endl;
    
    return 0;
}