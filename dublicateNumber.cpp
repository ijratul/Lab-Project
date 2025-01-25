#include <iostream>
#include <vector>
using namespace std;

int findDuplicate(vector<int>& nums) {
    int slow = nums[0];
    int fast = nums[0];

    do {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);

    int entry = nums[0];
    while (entry != slow) {
        entry = nums[entry];
        slow = nums[slow];
    }

    return entry;
}

int main() {
    vector<int> nums = {1, 3, 4, 2, 2};
    
    int duplicate = findDuplicate(nums);
    cout << "The duplicate number is: " << duplicate << endl;

    return 0;
}
