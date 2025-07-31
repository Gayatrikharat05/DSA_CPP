#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int subarraySum(vector<int>& nums, int k) {
    unordered_map<int, int> mpp;
    mpp[0] = 1; 

    int presum = 0; 
    int count = 0;  

    for (int i = 0; i < nums.size(); i++) {
        presum += nums[i];
        int remove = presum - k;
        if (mpp.find(remove) != mpp.end()) {
            count += mpp[remove];
        }
        mpp[presum]++;
    }

    return count;
}


int main() {
    int n, k;
    cout << "Enter number of elements in array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter value of k: ";
    cin >> k;

    int result = subarraySum(nums, k);
    cout << "Number of subarrays with sum " << k << " is: " << result << endl;

    return 0;
}
