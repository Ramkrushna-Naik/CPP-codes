#include <bits/stdc++.h>
using namespace std;
int updatebit(int n , int pos , int ubit)
    {
        n=(n & ~(1<<pos));
        return(n | (ubit<<pos));
    }
int  main()
{
    int n,pos;
    cin>>n>>pos;
    cout<<updatebit(n,pos,1)<<endl;  
    return 0;
    
}