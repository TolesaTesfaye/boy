#include<iostream>
using namespace std;
int main(){
    int n;
    int loc=-1;
    char option;
    string data;
    cout<<"inter the number of array: ";
    cin>>n;
    string array1[n];
    for(int i=0; i<n; i++){
            cout<<"inter the element of array: ";
            cin>>array1[i];
    }
    cout<<"inter the you want to search";
    cin>>data;
for(int i=0;i<n;i++){

           if(array1[i]== data){
            loc=i;
            break;
           }
        }
if(loc!=-1){cout<<"the data are found at index"<<loc;}
else {cout<<"data are not found ";}



return 0;}
