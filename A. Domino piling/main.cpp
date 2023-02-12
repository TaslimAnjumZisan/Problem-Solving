#include <iostream>

using namespace std;

int main()
{
    int m,n,c=0;
    cin>> m >>n;
    int d=m*n;

    for(int i=d;i>=0;i=i-2)
    {
        if (i>=2)
        {
            c++;
        }
        else
            break;
    }
    cout<<c;
}
