#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the first array: ";
    cin >> n;

    int arr1[n];
    cout << "Enter the elements of the first array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    int arr2[n];
    cout << "Enter the elements of the second array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }

    bool same = true;
    for (int i = 0; i < n; i++) {
        if (arr1[i] != arr2[i]) {
            same = false;
            break;
        }
    }

    if (same) {
        cout << "The two arrays are the same." << endl;
    } else {
        cout << "The two arrays are not the same." << endl;
    }

    return 0;
}
