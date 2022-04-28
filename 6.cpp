#include <iostream>
using namespace std;
void Sort(double arr[4], int n);
void Sort(int arrint[4], int n);

int main() {
    int arr[4]{ 5, 9, 1, 7 };
   Sort(arr, 4);
}

void Sort(double arr[4], int n) {
    for (int i = 1; i < n; ++i)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int b = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = b;
            }
        }
    }

    for (int i = n-1; i >= 0; --i)
    {
        cout << arr[i] << " ";
    }
}
void Sort(int arrint[4], int n) {
    for (int i = 1; i < n; ++i)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arrint[j] < arrint[j + 1])
            {
                int b = arrint[j];
                arrint[j] = arrint[j + 1];
                arrint[j + 1] = b;
            }
        }
    }

    for (int i = n-1; i >= 0; --i)
    {
        cout << arrint[i] << " ";
    }
}