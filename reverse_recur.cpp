#include <bits/stdc++.h>
using namespace std;
void revstr(string s){
    if(s.length()==0)
    return;

    string temp = s.substr(1);
    revstr(temp);
    cout<<s[0];
}
int main()
{
    revstr("binod");
    return 0;
} 

