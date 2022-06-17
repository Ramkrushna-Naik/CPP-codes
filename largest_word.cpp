#include <bits/stdc++.h>
using namespace std;
int  main()
{
    int n;
    cin>>n;
    char s[n];
    cin.ignore();
    cin.getline(s,n);
    cin.ignore();

    int curlen=0;
    int maxlen=0;
    int st=0;
    int i=0;
    while (i<n)
    {
        if(s[i] == ' ' || s[i]=='\0')
        {
            if(curlen > maxlen)
            {
                maxlen=curlen;
            }
            st=i+1;
            curlen=0;
        }
        else
            curlen++;

        if (s[i]=='\0')
        {
           break;
        }
        i++;
        
        
    }
    cout<<maxlen;
    
    return 0;
    
}