#include <iostream>
using namespace std;
int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int n;
        cin >> n;
        int A[1000];
        for (int j = 0; j < n; j++)
             cin >> A[j];
        int key;
        cin >> key;
        int count = 0;
        for (int j = 0; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                if (A[j] - A[k] == key || A[k] - A[j] == key)
                    count++;
            }
        }
        cout << count << endl;
        cout << "-----------------------------" << endl;
    }
}
