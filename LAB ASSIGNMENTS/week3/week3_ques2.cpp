#include <iostream>
using namespace std;

void Sel_Sort(int[], int);

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int n;
        cin >> n;
        int A[1000];
        for (int j = 0; j < n; j++)
        {
            cin >> A[j];
        }

        Sel_Sort(A, n);
    }
}
void Sel_Sort(int A[], int n)
{
    int comp = 0, swaps = 0;
    int min, temp = 0;

    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            comp++;
            if (A[min] > A[j])
            {
                min = j;
            }
        }
        swaps++;
        swap(A[min], A[i]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    cout << "\ncomparisons = " << comp << endl
         << "swaps = " << swaps << endl;
}
