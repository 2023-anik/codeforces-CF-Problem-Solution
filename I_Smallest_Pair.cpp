#include<iostream>
#include<limits>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        int mini=numeric_limits<int>::max();
        for(int i=0; i<n; i++)
            for(int j=i+1; j<n; j++)
                if(mini>a[i]+a[j]+j-i)
                    mini=a[i]+a[j]+j-i;
        cout<<mini<<endl;
    }return 0;
}
