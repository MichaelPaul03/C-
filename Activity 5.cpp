#include <iostream>
using namespace std;

int main() 
{
   int a = 5;
   int b = 5;
   int c = 10;

   if(a == a) 
   {
     printf("1 - if the relational value is True\n");
   } 
   else 
   {
      printf("0 - if the relational value is False\n");
   }
	
   if (a > b) 
   {
      printf("1 - if the relational value is True\n");
   } 
   else 
   {
     printf("0 - if the relational value is False\n");
   }
	
   if (b < c) 
   {
     printf("1 - if the relational value is True\n");
   } 
   else 
   {
     printf("0 - if the relational value is False\n");
   }
  	if (a > c) 
   {
     printf("1 - if the relational value is True\n");
   } 
   else 
   {
     printf("0 - if the relational value is False\n");
   }
  return 0;
}