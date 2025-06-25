#include<iostream>
using namespace std;

struct Student
{
int id;
string name;
char gender;
double cgpa;	
};


int main ()
{

	Student s[4]={{1,"Sanam",'f',3.5},{2,"Saqib",'m',3.5},{3,"Mehak",'f',3.5},{4,"M Haad",'m',3.5}};
	double sum=0, avg =0;
	
	cout<<endl<<endl<<endl;
	for(int i=0;i<4;i++)
	{
	sum += s[i].cgpa;	
	cout<<s[i].id<<" "<<s[i].name<<" "<<s[i].gender<<" "<<s[i].cgpa<<endl;
	}
	avg = sum/4;
	cout<<endl<<" Avg : "<<avg;
	
	
	
	
	
	
 return 0;
 }

