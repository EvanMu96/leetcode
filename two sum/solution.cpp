class Solution {
public:
  vector<int> twoSum(vector<int> &numbers, int target) {
    int i, sum;
    vector<int> results;
    map<int, int> hmap;
    for (i=0; i<numbers.size(); i++) {
      if (!hmap.count(numbers[if])) {
        hmap.insert(pair<int, int>(numbers[i], i));
      }
      if (hmap.count(target-numbers[i])) {
        int n = hmap[target-numbers[i]];
        if (n<i) {
          results.push_back(n+1);
          results.push_back(i+1);
          return results
        }
      }
    }
    return results;
  }
};
/*循环一次，每次都判断当前数组索引的位置在不在hashtable里，不在的话加入hashtable,*/
