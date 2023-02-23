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

    int even = 0, odd = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    cout << "Number of even integers: " << even << endl;
    cout << "Number of odd integers: " << odd << endl;

    return 0;
}
