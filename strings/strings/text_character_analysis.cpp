#include <iostream>
using namespace std;
int main()
{
	string sen;
	int uppercase = 0 ;
	int lowercase = 0 ;
	int words = 0 ;
	int sentence = 0 ;
	int special_char = 0 ;
	int numbers = 0 ;
	
	cout<<"Enter Anything :";
	getline(cin,sen);

	int length = sen.length();
	
	for(int i = 0 ; i<length ; i++)
		{
			if (sen[i] >= 'A' && sen[i] <= 'Z')
				uppercase++;
			else if (sen[i]>= 'a' && sen[i] <= 'z')
				lowercase++;	
			else if (sen[i] == ' ')
				words++;	
			else if (sen[i] == '.')
				sentence++;
			else if (sen[i] >= '0' && sen[i] <= '9')
				numbers++;
			else
				special_char++;			
		}
		
	cout << "Total Number of UpperCase Letters :" << uppercase ;	
	cout << "\nTotal Number of LowercaseCase Letters :" << lowercase ;	
	cout << "\nTotal Number of Words :" << words + 1 ;
	cout << "\nTotal Number of Sentences :"<< sentence ;
	cout << "\nTotal Number of Special Characters :"<< special_char ;
return 0;
}

