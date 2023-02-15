#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s1;
    getline(cin,s1);
    int j=s1.length();
    int c=0;


    for(int i=1; i<j; i++)
    {
        if(s1[i]>=65&& s1[i]<=90)
        {
           c++;
        }
    }

    if(c==j-1)
    {
        for(int i=0;i<j;i++)
        {
            if(s1[i]>='a'&&s1[i]<='z')
                s1[i]-=32;
            else
                s1[i]+=32;
        }
        cout<<s1<<endl;

    }
    else
        cout<<s1<<endl;


}
