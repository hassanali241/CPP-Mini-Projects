#include <iostream>
using namespace std;
int main()
{

int num,a,b,c,d;

cout<<"Enter number: ";
cin>>num;

cout<<num%10;
cout<<num%100/10;
cout<<num%1000/100;
cout<<num%10000/1000;
 
 a = num%10;
 b = num%100/10;
 c = num%1000/100;
 d = num%10000/1000;
 
 if(a==d && b==c)
 cout<<endl<<"they are matching numbers!";
 
 	else 
 	cout<<endl<<"they are not matching numbers :(";
 
 





return 0;
}

