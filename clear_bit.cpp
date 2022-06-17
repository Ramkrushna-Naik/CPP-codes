#include <bits/stdc++.h>
using namespace std;

int clearbit(int n, int pos){
    return (n & ~(1<<pos));
}
int  main()
{
    int n,pos;
    cin>>n>>pos;
    cout<<clearbit(n,pos)<<endl;  
    return 0;
    
}