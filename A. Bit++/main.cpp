#include <iostream>

using namespace std;

int main()
{
   int n,c=0;
   cin>>n;

   while(n--)
   {
       string m;
       cin>>m;
       if(m[0]=='+'&& m[1]=='+')
        c++;
       else if(m[1]=='+'&&m[2]=='+')
        c++;

       else if(m[0]=='-'&&m[1]=='-')
        c--;
       else if(m[1]=='-'&&m[2]=='-')
        c--;
       else
        break;

   }
   cout<<c;

}
