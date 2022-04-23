#include <iostream>
using namespace std;
int main() {
    int T;
    cin >> T;
    for (int m = 0; m < T; m++) {
        int A[1000];
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> A[i];
        int i, j, k;
        int flag = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int sum = A[i] + A[j];
                for (int k = 0; k < n; k++)  {
                    if (sum == A[k]) {
                        flag = 1;
                        cout << i << " " << j << " " << k << endl;
                        break;
                    }
                }
            }
        }
        if (flag == 0)
            cout << "Sequence not found" << endl;
    }
}
