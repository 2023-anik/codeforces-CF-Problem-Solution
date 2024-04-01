#include<bits/stdc++.h>
using namespace std;

void print(string n){
    bool leading_zero=true; 
    for(int i=n.size()-1; i>=0; i--){
        if(n[i]=='0' && leading_zero){
            continue;
        }
        leading_zero=false;
        cout<<n[i];
    }
}
int main(){
    string n;
    cin>>n;
    bool palindrome=1;
    for(int i=0, j=n.size()-1; i<=n.size()/2 ; i++, j--)
        if(n[i]!=n[j]){
                palindrome=0;
                break;
        }
    if(!palindrome){
        print(n);
        cout<<endl<<"NO"<<endl;
    }
    else{
        print(n);
        cout<<endl<<"YES"<<endl;
    }
    return 0;
}
