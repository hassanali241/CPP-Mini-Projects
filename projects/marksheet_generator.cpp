/*
Developer HASSAN ALI
THIS PROGRAM SHOWS MARKSHEET USING SWITCH METHOD
*/
#include <iostream>
using namespace std;
int main()
{
	int maths, eng, phy, chem, urd, isl, sum;
	int perc;
	
	cout<<endl<<"MARKSHEET  ";
	cout<<endl<<"HASSAN ALI\n  ";
	
	cout<<endl<<"Enter maths marks : ";
	cin>>maths;
	cout<<endl<<"Enter english marks : ";
	cin>>eng;
	cout<<endl<<"Enter physics marks : ";
	cin>>phy;
	cout<<endl<<"Enter chemistry score : ";
	cin>>chem;	
	cout<<endl<<"Enter urdu score : ";
	cin>>urd;	
	cout<<endl<<"Enter islamiat score : ";
	cin>>isl;

	sum = maths + eng + phy + chem + urd + isl;	
	cout<< "\nObtained marks : " << sum ;
	
	perc = (sum*100)/600;
	cout << endl << "Percentage : " << perc << "%" ;
	cout<<endl;
	
	switch (perc / 10)
	{
		
		case 10 :
		case 9 :
		case 8 :
			cout<<"GRADE A";
			break;
			
		case 7 :
			cout<<"GRADE B";
			break;
			
			case 6 :
			cout<<"GRADE C";
			break;
			
			case 5 :
			cout<<"GRADE D";
			break;
			
			case 4 :
			case 3 :
			case 2 :
			case 1 :
			case 0 :	
			cout<<"Fail!";
			break;
		
		default:
			cout<<endl<<"invalid entry";
			break;
		
	}
	
	
	return 0;
	}

