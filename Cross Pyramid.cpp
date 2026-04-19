#include <iostream>

using namespace std;

int main()
{

    int height = 10;

    for (int i = 1; i <= height; i++) {
        for (int j = height - i; j > 0; j--) {
            cout << " ";
        }

        for (int k = 1; k <= i; k++) {
            cout << "X ";
        }

        cout << endl;
    }

    return 0;
}
