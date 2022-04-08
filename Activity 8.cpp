#include<iostream>
using namespace std;

int main()
{
	char ch;
	cout<<"Enter Any UPPERCASE Alphabet Only:";
	cin>>ch;
	
	switch(ch)
	{
		case 'A':
    	case 'E':
    	case 'I':
    	case 'O':
    	case 'U':
    	cout<<ch<<" is a vowel";
    	break;
    	
    	case 'B':
    	case 'C':
    	case 'D':
    	case 'F':
    	case 'G':
    	case 'H':
    	case 'J':
    	case 'K':
    	case 'L':
    	case 'M':
    	case 'N':
    	case 'P':
    	case 'Q':
    	case 'R':
    	case 'S':
    	case 'T':
    	case 'V':
    	case 'W':
    	case 'X':
    	case 'Y':
    	case 'Z':
    	cout<<ch<<" is a consonant";
    	break;
    	
    	default:
    	cout<<ch<<" is an Invalid Input";
    	break;
    	
    	return 0;
	}
}
  