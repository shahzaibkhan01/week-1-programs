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

    int even[n], odd[n], e = 0, o = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even[e] = arr[i];
            e++;
        } else {
            odd[o] = arr[i];
            o++;
        }
    }

    cout << "Even numbers: ";
    for (int i = 0; i < e; i++) {
        cout << even[i] << " ";
    }
    cout << endl;

    cout << "Odd numbers: ";
    for (int i = 0; i < o; i++) {
        cout << odd[i] << " ";
    }
    cout << endl;

    return 0;
}
