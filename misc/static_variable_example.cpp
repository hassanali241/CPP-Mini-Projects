#include <iostream>
using namespace std;

static int a = 10;

void stat( int a , int b){
   a = 5;
   b=6;
}
int main()
{

static int a = 2;
int b = 3;
stat(a,b);
cout<<a<<b;


return 0;
}

