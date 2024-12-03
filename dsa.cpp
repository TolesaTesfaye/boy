#include<iostream>
using namespace std;
int main()
{
    int n,location=-1,data;
    char option;
    cout<<"inter the size of array: ";
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
     cout<<"inter the element of array: ";
     cin>>A[i];
    }

    do
    {
        cout<<"inter the data to be search: ";

        cin>>data;

        for (int i=0;i<=n;i++)
        {
        if(A[i]== data){
            location=i;
            break;
                       }
        }
        if (location!=-1)
        {
        cout<<"searched data: "<<data<<" is found at index: "<<location;
        }
        else{
        cout<<" the data is not found";

           }
        cout<<"\n press(Y|| y) to search again ,or press any other key to exit:";
        cin>>option;
    }
    while
        (option=='y'||option=='Y');

    return 0;
}
