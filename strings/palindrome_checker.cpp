#include <iostream>
#include <string>
using namespace std;
int main()
{
	string word;

	cout<<"Enter a word: ";
	cin>>word;

	int length=word.length();
	
	bool check=false;
	
	for(int i = 0 ; i<length ; i++)
	{
		if(word[i] == word[length-i-1])
			check = true;
		else
		break;
	}
	if (check == true)
	cout<<"\nis a palindrome. ";
	else
	cout<<"\nno";
return 0;
}

