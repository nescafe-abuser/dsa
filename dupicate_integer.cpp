#include <iostream>
#include <iterator>
#include <vector>
#include <unordered_set>

using namespace std;

bool has_duplicate(vector<int> nums) {
	unordered_set<int> intSet;
	for (int i=0;i<size(nums);i++) {
		intSet.insert(nums[i]);
	}

	if (size(intSet)<size(nums)) {
		return true;
	} else {
		return false;
	}
}

int main() {
	vector<int> nums ({1,2,3,1});

	cout << has_duplicate(nums);
}
