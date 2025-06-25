#include <iostream>
#include <string> 
using namespace std;
int main()
{

int length,width,height,volume;

cout<<"length :";
cin>>length;

cout<<"width :";
cin>>width;

cout<<"height :";
cin>>height;

volume=length*width*height;

cout<<"volume :"<<volume ;

cout<<endl;

if (volume >=1 && volume <=10)
cout<<"Extra Small";

else if (volume >=11 && volume <=25)
cout<<"Small";

else if (volume >=26 && volume <=75)
cout<<"Medium";

else if (volume >=76 && volume <=100)
cout<<"Large";

else if (volume >=101 && volume <=250)
cout<<"Extra Large";

else if (volume >=251 )
cout<<"Extra-Extra Large";

return 0;
}

