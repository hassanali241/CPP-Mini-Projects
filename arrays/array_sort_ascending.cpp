#include <iostream>
using namespace std;
void sorting( int arr[] , int size){
	int temp;
	for(int i = 0 ; i<size ; i++)
	{
		for(int j= i+1 ; j<size ; j++)
		{
			if(arr[i] > arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;	
			}
		}
	}	
}

int main()
{
	int temp;
	int arr[5];
	
	for(int i = 0 ; i<5 ; i++)
	{
		cout<<"Enter Digit "<<i+1<<" : ";
		cin>>arr[i];
	}

	sorting(arr,5);
	
	cout<<"Ascending order \n";
	for(int i = 0 ; i<5 ; i++)
	cout<<arr[i]<<" ";
	
return 0;
}

