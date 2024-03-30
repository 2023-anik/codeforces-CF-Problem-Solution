#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
    int a[n];
    long long int sum=0;
    int i=0;
	while(i<n){
        cin>>a[i];
        sum+=a[i];
        i++;
	}
    cout<<abs(sum)<<endl;
	return 0;
}
