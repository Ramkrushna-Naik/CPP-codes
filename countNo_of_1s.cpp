/*                       LOGIC

lets n=19, n-1=18
        19---> 0 1 0 1 1
        18---> 0 1 0 1 0
            &
            --------------
               0 1 0 1 0 ------- 18 (n & n-1 has same bits as n except the rihtmost set bit)
        
        then n=18 and n-1 =17
                ...
                ..
                . loop continue till n=0
                every time update the counter
*/





#include <bits/stdc++.h>
using namespace std;
int count1s(int n )
    {
        int count =0;
        while (n!=0)
        {
           n=n&n-1;
           count++;
        }
        
        return count;
    }
int  main()
{
    cout<<count1s(19)<<endl;  
    return 0;
    
}