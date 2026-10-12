
#include <iostream>
using namespace std;

int main() {
    int nums[] = {1, 2, 1};
    int n = sizeof(nums) / sizeof(nums[0]);

    int ans[2 * n];

    for (int i = 0; i < n; i++) {
        ans[i] = nums[i];
        ans[i + n] = nums[i];
    }

    cout << "Concatenated Array: ";

    for (int i = 0; i < 2 * n; i++) {
        cout << ans[i] << " ";
    }

    cout << endl;

    return 0;
} 
