#include<iostream>
using namespace std;
int linear_search(int A[],int n, int key)
{
   for(int i=0;i<=n;i++)
   {
       if(A[i]==key)
       return i;
   }
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
    check=linear_search(arr,n-1,key);
    if(check==-1)
    cout<<"ELEMENT DO NOT EXIST IN ARRAY........";
    else
    cout<<"ELEMENT FOUND AT INDEX : "<<check+1;
    return 0;
}