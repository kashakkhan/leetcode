class Solution(object):
    def maxSubArray(self, nums):
        current_num=nums[0]
        max_num=nums[0]
        for i in range(1,len(nums)):
            current_num=max(nums[i],(current_num+nums[i]))
            max_num=max(max_num,current_num)

        return max_num
