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

    int smallest = arr[0];
    int second_smallest = arr[1];
    if (second_smallest < smallest) {
        int temp = smallest;
        smallest = second_smallest;
        second_smallest = temp;
    }

    for (int i = 2; i < n; i++) {
        if (arr[i] < smallest) {
            second_smallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < second_smallest) {
            second_smallest = arr[i];
        }
    }

    cout << "The second smallest element is: " << second_smallest << endl;

    return 0;
}
