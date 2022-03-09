#include<iostream>
#include<math.h>
using namespace std;
int jump_search(int A[],int n,int key)
{
    int m=sqrt(n);
    int check=0;
    while(A[m-1]<key)
    {
        check=m;
        m+=sqrt(n);
        if(check>=n)
        return -1;
    }

    while(A[check]<key)
    {
        ++check;
        if(A[check]==key)
        return check;
    }
    return -1;
} 
int main()
{
    cout<<"ENTER SIZE OF ARRAY : ";
    int n,key;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"ENTER ELEMENT AT INDEX "<<i+1<<" : "<<endl;
        cin>>arr[i];
    }
    cout<<"Enter key : ";
    cin>>key;
    int index=jump_search(arr,n,key);
    if(index==-1)
    cout<<"ELEMENT DO NOT EXIST......................"<<endl;
    else
    cout<<"ELEMENT FOUND AT INDEX "<<index+1<<endl;
}