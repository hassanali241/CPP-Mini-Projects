#include <iostream>
using namespace std;
int main()
{

	int units,bill,tax;

	cout<<"\n Enter Units Consumed : ";
	cin>>units;

	if(units >= 0 && units <=100)

 		{
 			bill = 5 * units;
 			cout<<"\n Your electricity bill is : "<<bill;
		}
		
		
	else if(units >100 && units <=200)
 		{
 			bill = (10 * (units - 100) ) + 100*5;
 			cout<<"\n Your electricity bill is : "<<bill;
		}
	else if(units > 200 && units <=300)
 		{
 			bill = (20 * (units - 200) ) + (100*10)+ (100*5);
 			cout<<"\n Your electricity bill is : "<<bill;
		}
	else if(units >300)
 		{
 			bill = (50 * (units - 300) ) + (100*20)+ (100*10)+ (100*5);
 			cout<<"\n Your electricity bill is : "<<bill;
 			
		}
	else 
		cout<<"Invalid Entry";
	
		
	    	if (bill >2000 && bill <=5000)
		{
			float tamount=(bill*0.1)+bill;
	       cout<<"\n total amount with tax :"<<tamount;
		}
	    else if (bill >5000)
	
	{
							
		float tamount=(bill*0.2)+bill;
	      cout<<"\n total amount with tax :"<<tamount;
 	}
	    	else 
			cout<<"\n NO TAX INCLUDED";
		
	
	
	


	return 0 ;
}

