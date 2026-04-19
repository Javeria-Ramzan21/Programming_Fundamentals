#include <iostream>
using namespace std;

int linear_search(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {2, 4, 8, 15, 16, 23, 39, 56, 83, 91};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 15;

    int index = linear_search(arr, n, key);

    if (index != -1) {
        cout << "Key element " << key << " found at index " << index << "." << endl;
    } else {
        cout << "Key element " << key << " not found in the array." << endl;
    }

    return 0;
}
