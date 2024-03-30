#include<iostream>

using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
    for(int i=0, j=n-1; i<n; i++, j--){
        if(a[i]!=a[j]){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
	return 0;
}
