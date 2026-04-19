#include <iostream>

using namespace std;


int Largest(int arr[], int size) {
    int large = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > large) {
            large = arr[i];
        }
    }
    return large;
}


int Smallest(int arr[], int size) {
    int small = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < small) {
            small = arr[i];
        }
    }
    return small;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int* arr = new int[size];
    cout << "Enter " << size << " elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int large = Largest(arr, size);
    int small = Smallest(arr, size);

    cout << "The largest element in the array is: " << large << endl;
    cout << "The smallest element in the array is: " << small << endl;


    return 0;
}


