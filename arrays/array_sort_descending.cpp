#include <iostream>
using namespace std;
int main()
{
	int temp;
	int arr[10];
	
	for(int i = 0 ; i<10 ; i++)
	{
		cout<<"Enter value "<<i+1<<" : ";
		cin>>arr[i];
	}
	for(int i = 0 ; i<10 ; i++)
	{
		for(int j = i+1 ; j<10 ; j++)
		{
			if(arr[i]<arr[j])
			{
				temp = arr[i];
				arr[i]=arr[j];
				arr[j]=temp;				
			}
		}
	}
	cout<<"descending order is \n";
	for(int i = 0 ; i<10 ; i++)
	{
		cout<<arr[i]<<" ";
	}
return 0;
}

