#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    // Function returns the second largest element
    int getSecondLargest(vector<int> &arr) {
        if (arr.size() < 2) return -1; // If array has less than 2 elements, return -1

        int firstMax = arr[0];
        int secondMax = -1;

        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] > firstMax) {
                secondMax = firstMax;
                firstMax = arr[i];
            } else if (arr[i] > secondMax && arr[i] != firstMax) {
                secondMax = arr[i];
            }
        }
        return secondMax;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {12, 35, 1, 10, 34, 1};

    int secondLargest = sol.getSecondLargest(arr);
    cout << "Second Largest Element: " << secondLargest << endl;

    return 0;
}
