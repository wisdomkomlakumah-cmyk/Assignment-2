#include <iostream>
using namespace std;

int main() {
    int arr[5] = {12, 7, 25, 3, 18};
    int smallest = arr[0];

    for (int i = 1; i < 5; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    cout << "Smallest number = " << smallest;

    return 0;
}
