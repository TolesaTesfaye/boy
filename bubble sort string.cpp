#include<iostream>
using namespace std;
int main(){
    int n ;
    string temp;
    cout<<"inter the size of array";
    cin>>n;
    cin.ignore();
    string A[n];
    for(int i=0;i<n;i++){
            cout<<"inter the element of array"<<i<<" ";
            getline(cin,A[i]);
            }
        for(int i=0;i<n;i++){
        for(int j=0 ;j<n-i-1;j++){

            if(A[j]<A[j+1]){
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
                            }
                        }
                    }
    cout<<"sorted array ";
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
return 0;}
