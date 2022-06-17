#include <bits/stdc++.h>
using namespace std;
int  main()
{
    int n;
    cin>>n;
    char s[n];
    cin>>s;
    int flag=-1;
    for (int i = 0; i<n; i++)
    {
        if(s[i]==s[n-1-i])
        flag=1;
        else
        flag=0;
    }
    if(flag==1)
    {
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }
    
    return 0;
    
}