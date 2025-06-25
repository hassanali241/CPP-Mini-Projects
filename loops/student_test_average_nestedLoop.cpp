#include <iostream>
using namespace std;
int main()
{	
	int k , n;
	float avg;
	 
	cout<<"For how many students do have score? ";
	cin>>k;
	
	cout<<"How many test scored does each student have? ";
	cin>>n;
	
	cout<<endl;
	
	for (int j = 1 ; j <= k ; j++ )
	{	
		float score = 0 ,sum = 0 ;
		
		for ( int i=1 ;  i <= n ; i++ )
		{	
			cout<<"\n Enter score "<<i<<" for student "<<j<<": ";
			cin>>score;
		 	sum += score ;
		 	avg = sum/n;
		}
		cout<<" The average score for student "<<j<< " is "<<avg;
		cout<<endl;
	}

return 0;
}

