#include<iostream>
using namespace std;
int main() {
    int m;
    cin >> m;
    int A[100];
    for (int i = 0; i < m; i++)
        cin >> A[i];   
    int n;
    cin >> n;
    int B[100];
    for (int i = 0; i < n; i++)
        cin >> B[i];
    int p = 0, q = 0;
    while (p < m && q < n)
    {	
        if (A[p] == B[q])
        {
            cout << A[p] << " ";
            p++;
            q++;
        }
        else if (A[p] < B[q])
            p++;
        else
            q++;
    }
}

