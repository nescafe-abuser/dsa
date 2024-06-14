#include <iostream>
#include <iterator>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target) {
	unordered_map<int, int> intMap;
	vector<int> foo;
	for (int i=0;i<size(nums);i++) {
		intMap[nums[i]]=i;
		if (intMap.find(target-nums[i])!=intMap.end() && (target-nums[i] != nums[i])){
			foo.push_back(intMap[target-nums[i]]);
			foo.push_back(i);
		}
	}
	return foo;
}

int main() {
  vector<int> nums({3, 4, 5, 6});
  int target = 11;
	
	vector<int> bar = twoSum(nums,target);
	for (int i=0;i<size(bar);i++){
		cout << bar[i] << "\n";
	}
}
