//Using "transform"-->algorithm
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
    transform(a, a+n, a, [](int x){
        if(x>0)
            return 1;
        else if(x<0)
            return 2;
        else
            return 0;//for elements equal to zero
    });
    for(int i=0; i<n; i++){
        cout<<a[i]<<' ';
    }
	return 0;
}
