//Using algorithm
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int count_odd=0;
    for(int i=0; i<n; i++)
        cin>>a[i];
    
    int mini=*min_element(a, a+n);//to find minimum element of the array
    int count=0;
    for(int i=0; i<n ; i++)
        if(mini==a[i])
            count++;
    if(count%2!=0)
        cout<<"Lucky"<<endl;
    else
        cout<<"Unlucky"<<endl;
    return 0;
}
