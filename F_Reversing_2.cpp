#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
    int rev_a[n];
    for(int i=n-1, j=0; i>=0; i--, j++){
        rev_a[j]=a[i];
    }
    for(int i=0; i<n; i++){
        cout<<rev_a[i]<<' ';
    }
	return 0;
}
