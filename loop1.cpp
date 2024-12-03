#include<iostream>
using namespace std;
int main(){
int sum=0;
for(int i=1;i<=100;i++)                //sum of even number between 1 and 100
    {
   if(i%2==0){
    sum=sum+i;
        }
    }
cout<<sum;
return 0;}
