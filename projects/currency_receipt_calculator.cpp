#include <iostream>
using namespace std;
int main()
{
int tamnt, gamnt , back;
int a,b,c,d,e,f,g,h,i,j;

cout<<"Bill :";
cin>>tamnt;

cout<<"Amount recieved :";
cin>>gamnt;

back = gamnt - tamnt ;

cout<<"Amount returned :"<<back;

if ( back < 10000 )
 {
 a = back/5000;
 back = back %= 5000;
  b = back/1000;
  back = back %= 1000,
   c = back/500;
   back = back %= 500,
    d = back/100;    
    back = back %= 100,
     e = back/50;
     back = back %= 50,
      f = back/20;
      back = back %= 20,
       g = back/10;
       back = back %= 10,
        h = back/5;
        back = back %= 5,
         i = back/2;
         back = back %= 2,
          j = back/1;
          back = back %= 1,
 
cout<< "\n5000......."<<a<<endl;
cout<< "1000......."<<b<<endl;
cout<< "500........"<<c<<endl;
cout<< "100........"<<d<<endl;
cout<< "50........."<<e<<endl;
cout<< "20........."<<f<<endl;
cout<< "10........."<<g<<endl;
cout<< "5.........."<<h<<endl;
cout<< "2.........."<<i<<endl;
cout<< "1.........."<<j<<endl;

}


return 0;
}

