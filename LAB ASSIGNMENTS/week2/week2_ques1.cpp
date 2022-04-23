#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int count(int A[], int key, int n) {
    int *l = lower_bound(A, A + n, key);
    if (l == (A + n) || *l != key)   
    return 0;
   int *f = upper_bound(l, A + n, key);
   return f - l;
}
int main() {
    int T, n;
    cin >> T;
    for (int j = 0; j < T; j++){
        cin >> n;
        int lb = 0, ub = n - 1;
        int A[1000];
        for (int i = 0; i < n; i++)
            cin >> A[i];
        int key, c;
        cin >> key;
        c = count(A, key, n);
        if (c == 0)
            cout << "Key not present" << endl;
   cout << key << " - " << c << endl;
    }
}
