#include <iostream>
using namespace std;

void Insert_Sort(int[], int);
int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int n;
        cin >> n;
        int A[1000];
        for (int j = 0; j < n; j++)
            cin >> A[j];

  Insert_Sort(A, n);
    }
}

void Insert_Sort(int A[], int n) {
    int temp, comp = 0, shift = 0; 
    for (int i = 1; i < n; i++) {
        temp = A[i];
        int j = i - 1;
   
     while (j >= 0 && A[j] > temp){
            comp++;
            A[j + 1] = A[j];
            shift++;  j--;
        }
        A[j + 1] = temp;
        shift++;
    }

    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
    cout << "\ncomparisons = " << comp 
<< endl << "shifts = " << shift << endl;
} 
