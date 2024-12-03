#include<iostream>
using namespace std;
int main(){
int n, loc;
int data;
    //do{
    cout<<"inter the number of array: ";
    cin>>n;
    int A[n];
    for ( int i=0; i<n; i++){
    cout<<"inter element of the array";
    cin>>A[i];
                            }
    loc=-1;
    cout<<"inter the data to be search:";
    cin>>data;
    int lb=0,ub=n-1,mid;
    while(lb<=ub)
        {
                mid=(lb+ub)/2;
                if(A[mid]==data){
                ub=mid-1;}
                else{lb=mid+1;}
        }

    if(loc>=0)
        {
        cout<<"the data is found at index:"<<mid;
        }
    else
        {cout<<"the data is not found";}

     //}

return 0;}
