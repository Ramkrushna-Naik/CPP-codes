#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    for(int i=a;i>0;--i)
    {
        for (int j= 1; j < i+1; ++j)
        {
            cout<<j<<" ";
        
        }
        cout<<endl;
    }
    return 0;
}
