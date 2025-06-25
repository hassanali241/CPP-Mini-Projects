#include <iostream>
using namespace std;
int main()
{
	char option;

	do{
		int num;
		int factorial = 1;
			
		cout<<"Enter number : ";
		cin >> num;
	
		for (int i = num; i > 0 ; i-- )
			factorial = factorial * i;
	

		cout<<"Factorial = "<<factorial;
		
		cout<<"\n Do you want to continue (y,n) :";
		cin>>option;
	}
	while (option == 'y');

return 0;
}
