// Example of lenair search algorithim
#include<iostream>
using namespace std;
int main(){
int loc=-1,n;
string data;
char option;
cout<<"inter the length of your array";
cin>>n;
string A[n];
for(int i=0; i<n; i++) {
    cout<<"inter the element of your array:";
    cin>>A[i];
    }
do
{
    cout<<"insert the data to be searched";
    cin>>data;
        for(int i=0;i<n;i++){
            if(array1[i]==data){
            loc=i;
            break;}
            }
        if (loc!=-1 )
            {cout<<"data are found at index "<<loc;}
        else
            {cout<<"data are not found "<<endl;}
    cout<<"press T or t to again search element";
    cin>>option;
}
while(option=='T' || option=='t');

return 0;}
