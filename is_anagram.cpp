/*
 * Make unordered set for a set of characters (which is basically a string)
 * Insert every element of the first set
 * Store size of set in a variable
 * Insert every element of the second set
 * Size of the new hashmap should be equal to previous size if all elements were
 * the same. Therefore, anagram.
 */

#include <iostream>
#include <iterator>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

bool isAnagram(string s, string t) {
  unordered_set<char> strSet;
  for (int i = 0; i < size(s); i++) {
    strSet.insert(s[i]);
  }
  int foo = size(strSet);
  for (int i = 0; i < size(t); i++) {
    strSet.insert(t[i]);
  }
  if (size(strSet) == foo) {
    return true;
  } else {
    return false;
  }
}
int main() {
  string s = "racecar";
  string t = "carrace";

  cout << isAnagram(s, t) << "\n";

  s = "jar";
  t = "jam";

  cout << isAnagram(s, t) << "\n";
}
