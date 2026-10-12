
#include <iostream>
using namespace std;

void runningSum(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        arr[i] = arr[i] + arr[i - 1];
    }
}

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    runningSum(arr, n);

    cout << "Running Sum: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
} 
