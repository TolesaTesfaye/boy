#include <iostream>
using namespace std;
struct Process{
    int id
    int AT;
    int BT;
    int CompT;
    int TT;
    int WT;
};
int main(){
    Process p[PSIZE];
    int n;
    cout<<"Enter the number of process:";
    cin>>n;
    for(int i=0;i<n;i++){
       p[i].id = i+1;
       cout<<"Enter the AT and BT of process "<<p[i].id;
       cin>>p[i].AT >>p[i].BT;
    }
   int CT = 0;
   for(int i=0; i<n;i++){
    CT=max(CT,p[i].AT);

    p[i].CompT = CT + p[i].BT;
    CT = p[i].CompT;
    p[i].TT = p[i].CompT - p[i].AT;
    p[i].WT =p[i].compT-p[i].WT;
   }
return 0;
}
