#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the range upto which you want to find tables: ";
	cin>>n;
	
	for (int j = 1 ; j <= n ; j++)
	{
		cout<<"\nTable of "<<j<<endl;
		
		for (int i = 1 ; i <= 10 ; i++)
		{
			cout<<i<<" x " <<j<< " = "<<i*j<<endl;
		}
	}
return 0;
}

