#include<iostream>
using namespace std;
int main()
{
    int n,a=0, ans=0;
    string s;
    cin>>n>>s;
    for(int i =0;i<n; i++){
        if(s[i] =='x'){
            a++;
            if(a>2)
                ans++;
            
        }
        else
            a=0;
    }
    cout<<ans<<endl;
    return 0;
}
