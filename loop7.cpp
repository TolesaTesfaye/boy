#include<iostream>
using namespace std;
int main(){
for( int i=1;i<6;i++)
{
    for(int j=6;j>i;j--)
       {
       cout<<" ";
       }
    for(int k=0;k<i;k++)
       {
        cout<<"*";
       }
    for(int m=1;m<i;m++)
       {

        cout<<"*";
       }
    cout<<endl;
}


return 0;}
