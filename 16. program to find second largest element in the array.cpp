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

    int largest = arr[0];
    int second_largest = arr[1];
    if (second_largest > largest) {
        int temp = largest;
        largest = second_largest;
        second_largest = temp;
    }

    for (int i = 2; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest) {
            second_largest = arr[i];
        }
    }

    cout << "The second largest element is: " << second_largest << endl;

    return 0;
}
