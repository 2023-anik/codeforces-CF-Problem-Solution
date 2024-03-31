#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    // Bubble sort algorithm to sort the array in ascending order
    for(int i=0; i<n; i++)
        for(int j=0; j<n-i-1; j++)
            if(a[j]>a[j+1]){
                //swap the elements
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
    
    for(int i = 0; i < n; i++)
        cout << a[i] << ' ';
    
    return 0;
}
