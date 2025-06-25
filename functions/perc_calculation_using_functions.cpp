#include <iostream>
using namespace std;
float perc(int crs[6]);
char grade(float perc);
int main()
{
	int id;
	string name;
	char gen;
	int crs[6];
	
	cout<<"Enter your CMS ID :";
	cin>>id;
	cout<<"Enter your Name :";
	cin>>name;
	cout<<"Enter your Gender :";
	cin>>gen;
	
	for(int i = 0 ; i < 6 ; i++)
	{
		cout<<"Enter your score of course "<<i+1<<" : ";
		cin>>crs[i];
	}
	
	float percentage=perc(crs);
	cout<<"\nYour percentage is : "<<percentage;
	cout<<"\nYour Grade is : "<<grade(percentage);

return 0;
}

float perc(int crs[6])
{
	int sum = 0;
	for(int i=0 ; i<6; i++)
		 sum += crs[i]; 
	
		float perc = (sum*100.0)/600.0;
		return perc;
}

char grade(float perc)
{
	char grade;
	if (perc >=80 && perc <=100)
		grade='A';
	else if (perc >=70 && perc <=79)
		grade='B';
	else if (perc >=60 && perc <=69)
		grade='C';
	else 
		grade='F';		

	return grade;
}
