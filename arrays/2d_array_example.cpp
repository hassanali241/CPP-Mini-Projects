#include <iostream>
using namespace std;
int main()
{
	int r=4;
	int c=3;
	int arr[r][c];
	
	cout<<"input values :";
	
	for(int i = 0 ; i<r ;i++)
		for(int j=0 ; j<c ;j++)
			cin>>arr[i][j];
			
	cout<<"\nEntered Values\n";		
	for(int i = 0 ; i<r ;i++)
	{
		for(int j=0 ; j<c ;j++)
			cout<<arr[i][j]<<" ";
			cout<<endl;
	}
	
		cout<<"\nafter conversion\n";	
		for(int i = 0 ; i<c ;i++)
	{
		for(int j=0 ; j<r ;j++)
			cout<<arr[j][i]<<" ";
			cout<<endl;
	}
return 0;
}

