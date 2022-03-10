#include<iostream>
using namespace std;
int binary_search(int A[],int l,int r, int key)
{
    int mid=l+(r-l)/2;
    if(A[mid]==key)
    return mid;
    if(A[mid]<key)
    return binary_search(A,mid+1,r,key);
    else
    return binary_search(A,mid+1,r,key);
    return -1;
}
int exponential_search(int A[],int n, int key)
{
    int i=1;
    if(A[0]==key)
    return 0;
    while(i<n&&A[i]<key)
    {
        i*=2;
    }
    return binary_search(A,i/2,min(i,n),key);
}
int main()
{
    int check=-1,key,n;
    cout<<"ENTER SIZE OF ARRAY : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"ENTER ELEMENT NO "<<i+1<<": ";
        cin>>arr[i];
        cout<<endl;
    }
    cout<<"ENTER NUMBER TO BE SEARCHED : ";
    cin>>key;
    check=exponential_search(arr,n-1,key);
    if(check==-1)
    cout<<"ELEMENT DO NOT EXIST IN ARRAY........";
    else
    cout<<"ELEMENT FOUND AT INDEX : "<<check+1;
    return 0;
}