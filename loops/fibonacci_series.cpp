#include <iostream>
using namespace std;
int main()
{
	int a = 0 , b = 1 , sum = 0 ;
	
	cout<<"fabnioci series \n\n";
	
	for (int i = 0 ; i <= 10 ; i++)
		{
			cout << a ;
			cout << " " ;
			sum = a + b ;
			a = b ;
			b = sum ;
		}


return 0;
}

