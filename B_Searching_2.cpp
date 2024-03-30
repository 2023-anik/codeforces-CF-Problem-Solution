#include<iostream>
using namespace std;

int search(int a[], int n, int x){
    for(int i=0; i<n; i++){
        if(a[i]==x)
            return i;
    }return -1;
}

int main(){
	int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int x;
    cin>>x;
    // int index=search(a, n, x);
    cout<<search(a, n, x)<<endl;
	return 0;
}
