/*
Developer Hassan Ali
This program is made to calculate vowels and consonent using switch method
14 sept 2023
*/
#include<iostream>
using namespace std;
int main()
{
  char alph;
  cout<<"\nEnter any alphabet:";
  cin>>alph;
	
	switch(alph)
  {
  	case 'a':  
  	case 'e': 
  	case 'i':   
  	case 'o':    
 	case 'u':
 		
  	 cout<<endl;
     cout<<alph<<" is a vowel."<<endl;
	 break;
	 
  	case 'b':  
  	case 'c': 
  	case 'd':   
  	case 'f':    
  	case 'g':
  	case 'h':  
  	case 'j': 
  	case 'k':   
  	case 'l':    
  	case 'm':
  	case 'n':   
  	case 'p':   
  	case 'q':    
  	case 'r':
  	case 's':  
  	case 't': 
  	case 'v':   
  	case 'w':    
  	case 'x':
  	case 'y':  
  	case 'z':
  		
    cout<<endl;
	cout<<alph<<" is a consonant."<<endl;
	break;
		  	
  	default:
  		
  	cout<<endl;
    cout<<alph<<"A above input is invalid "<<endl;
	   
	}
	
	system("PAUSE");
	return 0;
	}

