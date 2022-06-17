#include <bits/stdc++.h>
using namespace std;

int getbit(int n, int pos){
    return (n & (1<<pos));
}
int  main()
{
    int n,pos;
    cin>>n>>pos;
    cout<<"bit at pos " <<pos<< " is "<<getbit(n,pos)<<endl;  
    return 0;
    
}