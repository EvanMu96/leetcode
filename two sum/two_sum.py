# Hash Map
class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :r type: List[int]
        """
        # dict hash用于建立数值到下表的映射
        hash = {}
        # 循环nums数值，并建立映射
        for i in range(len(nums)):
            if target - nums[i] in hash::
                return [hash[target - nums[i]], i]
            hash[nums[i]] = i
        # 无解时
        return [-1, -1]
