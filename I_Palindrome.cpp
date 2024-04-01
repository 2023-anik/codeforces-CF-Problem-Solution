//Using Algorithm
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    reverse(s.begin(), s.end());
    bool leading_zero=true;
    for(char c: s){
        if(leading_zero && c=='0')
            continue;
        leading_zero=false;
        cout<<c;
    }
    if(s==string(s.rbegin(), s.rend()))
        cout<<endl<<"YES"<<endl;
    else
        cout<<endl<<"NO"<<endl;
    return 0;
}
