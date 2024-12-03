#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"inter the size of array: ";
    cin>>n;
    int A[n];
    for(int i=0;i<n; i++){
        cout<<"inter the element of array:"<<i<<" ";
        cin>>A[i];
    }
    for(int i=0;i<n-1;i++){
        int sm=i;
        for(int j=i+1;j<n;j++){
            if(A[j]< A[sm]){
                sm=j;
                }
                }
        int temp=A[sm];
        A[sm]=A[i];
        A[i]=temp;
    }
    cout<<"sorted array";
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }

return 0;}
