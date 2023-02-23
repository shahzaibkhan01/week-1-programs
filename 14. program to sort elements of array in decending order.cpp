#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Selection sort algorithm in descending order
    for (int i = 0; i < n-1; i++) {
        int max_idx = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] > arr[max_idx]) {
                max_idx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[max_idx];
        arr[max_idx] = temp;
    }

    cout << "Sorted elements in descending order: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
