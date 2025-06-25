#include <iostream>
using namespace std;

int sum(int n){
	int sum  = 0 ;
	
	while (n != 0)
	{
		sum += n % 10,
		n /= 10; 	
	}
	return sum;
}


int odd(int n){
	int odd  = 0 ;
	
	while (n != 0)
	{
		if( (n % 10)%2 == 1)
		{
			odd++; 			
		}
		
		n /= 10;
	}
	return odd;
}

int even(int n){
	int even  = 0 ;
	
	while (n != 0)
	{
		if( (n % 10)%2 == 0)
		{
			even++; 			
		}
		
		n /= 10;
	}
	return even;
}

int rev(int n) {
    int reversed = 0;

    while (n != 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    return reversed;
}

int main()
{
int num;	
cout<<"enter num :";
cin>>num;
cout<<endl<<sum(num);
cout<<endl<<odd(num);
cout<<endl<<even(num);
cout<<endl<<rev(num);

return 0;
}

