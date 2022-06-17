/*                       LOGIC

lets n=8, n-1=7
        8--->  1 0 0 0
        7--->  0 1 1 1
            &
            --------------
               0 0 0 0
        
    so here we can see that when a number(here 8) is power of 2 then when it is performed 
    (&) operator with its n-1 value then the value comes out to be 0000. 
*/





#include <bits/stdc++.h>
using namespace std;
bool IsPowerOf2(int n )
    {
        return !(n && (n & n-1));
    }
int  main()
{
    cout<<IsPowerOf2(512)<<endl;  
    return 0;
    
}