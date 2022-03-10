#include<iostream>
using namespace std;
int binary_search(int A[],int l, int r, int key)
{
    int mid=l+(r-l)/2;
    if(A[mid]==key);
    return mid;
    if(A[mid]<key)
    return binary_search(A,mid+1,r,key);
    else return binary_search(A,l,mid-1,key);
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
    check=binary_search(arr,0,n-1,key);
    if(check==-1)
    cout<<"ELEMENT DO NOT EXIST IN ARRAY........";
    else
    cout<<"ELEMENT FOUND AT INDEX : "<<check+1;
    return 0;
}
