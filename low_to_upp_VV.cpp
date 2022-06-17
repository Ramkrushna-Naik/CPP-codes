#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    transform( s.begin() , s.end() , s.begin() , ::toupper ) ;// transform( start , end , from where to start, funtion);
    cout<<s<<endl;
    transform( s.begin() , s.end() , s.begin() , ::tolower ) ;
    cout<<s;
    return 0;
}