#include <iostream>
using namespace std;
int main()
{
int num,num1,num2,num3,num4,num5,sum;

cout<<"enter your 5 digits number: ";
cin>>num;

 num%10;
 num%100/10;
 num%1000/100;
 num%10000/1000;
 num%100000/10000;

 num1 = num%100000/10000 ;
 num2 = num%10000/1000 ;
 num3 = num%1000/100 ;
 num4 = num%100/10 ;
 num5 = num%10 ;

 sum=num1+num2+num3+num4+num5;
 int oddsum = 0;
 int evensum = 0;
 
   if (num1 % 2 == 1) 
   oddsum = num1 + oddsum;
		else
		{
		evensum = num1 + evensum;
		}
		
   if (num2 % 2 == 1)
   oddsum = num2 + oddsum;
  		else
		{
		evensum = num2 + evensum;
		}
		
   if (num3 % 2 == 1)
   oddsum = num3 + oddsum;
		else
		{
		evensum = num3 + evensum;
	    }
	    
   if (num4 % 2 == 1)
   oddsum = num4 + oddsum;
  		else
		{
		evensum = num4 + evensum;
		}
		
   if (num5 % 2 == 1)
   oddsum = num5 + oddsum;
 		else
		{
		evensum = num5 + evensum;
		}
	
	if (num > 99999 || num < 9999)
	cout<<endl<<"invalid input";
	
	 else
	{	 	
	cout<<endl<<"Sum of digits      :"<<sum;	
  	cout<<endl<<"Sum of odd digits  :"<<oddsum;
 	cout<<endl<<"Sum of even digits :"<<evensum;
 	}
 
  

return 0;
}

