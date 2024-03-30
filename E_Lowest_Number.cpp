#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
    int min=a[0];
    int k=1;
    for(int i=1; i<n; i++){
        if(min>a[i]){
            min=a[i];
            k=i+1;
        }
    }cout<<min<<' '<<k<<endl;
	return 0;
}
