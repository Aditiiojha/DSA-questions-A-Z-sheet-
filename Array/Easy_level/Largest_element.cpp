#include <iostream>
#include <vector>
#include <climits> // For INT_MIN
using namespace std;

/* 
Brute force approach: Sort the array in ascending order and then return nums[n-1].
*/

int maxvalue(vector<int>& nums) {
    int size = nums.size();
    // Step 1: Take a max variable and assign its value to INT_MIN
    int maxi = INT_MIN;
    // Step 2: Run a loop from i=0 to i<size, and every time we come across a value larger than our max, update it 
    for (int i = 0; i < size; i++) {
        if (nums[i] > maxi) {
            maxi = nums[i];
        }
    }
    return maxi;
}

// Time complexity -> O(N)
int main() {
    cout << "Enter the size of the array: ";
    int s;
    cin >> s;
    vector<int> nums(s);
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < s; i++) {
        cin >> nums[i];
    }
    int largest = maxvalue(nums);
    cout << "The largest value in the array is: " << largest << endl;
    return 0;
}
