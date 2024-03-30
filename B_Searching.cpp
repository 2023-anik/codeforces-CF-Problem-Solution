//Using Algorithm
#include<iostream>
#include<algorithm>//for "find"
using namespace std;
int main(){
	int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int x;
    cin>>x;
  //***
    int* ptr=find(a, a+n, x);
  //***
    if(ptr != a+n)
        cout<<ptr-a<<endl;
    else
        cout<<"-1"<<endl;    
	return 0;
}
