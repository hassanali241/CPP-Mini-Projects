#include <iostream>
using namespace std;

struct Shop
{
	int shopId;
	string shopName;
	string shopAdd;
	string shopcity;
};

int main ()
{
Shop s[2];

for(int i=0 ; i<2 ; i++)
{
	cout<<"\n Enter ShopID : ";
	cin>>s[i].shopId;
	cout<<"\n Enter ShopName : ";
	cin>>s[i].shopName;
	cout<<"\n Enter ShopAdd : ";
	cin>>s[i].shopAdd;
	cout<<"\n Enter ShopCity : ";
	cin>>s[i].shopcity;
}

int ans;
cout<<"\nPress 1 to Search detail by Shop Name.";
cout<<"\nPress 2 to Search detail by Shop City.";
cin>>ans;

if (ans == 1)
	{
		string shop;
		cout<<"\nEnter Shop Name:";
		cin>>shop;
		
			for(int i=0 ; i<2 ; i++)
			{
				if(shop == s[i].shopName)
				{
					cout<<"\n ShopID : "<<s[i].shopId;
					cout<<"\n ShopName : "<<s[i].shopName;
					cout<<"\n ShopAdd : "<<s[i].shopAdd;
					cout<<"\n ShopCity :"<<s[i].shopcity;
				}
			}
	}
	
else if (ans == 2)
	{
		string city;
		cout<<"Enter Shop City :";
		cin>>city;
		
			for(int i=0 ; i<2 ; i++)
			{
				if(city==s[i].shopcity)
				{
					cout<<"\n ShopID : "<<s[i].shopId;
					cout<<"\n ShopName : "<<s[i].shopName;
					cout<<"\n ShopAdd : "<<s[i].shopAdd;
					cout<<"\n ShopCity :"<<s[i].shopcity;
				}
			}
	}

else
cout<<"\nNo Information found.";		
cout<<endl;

return 0;
}
