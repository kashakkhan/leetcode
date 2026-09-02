class Solution(object):
    def firstMissingPositive(self, nums):
       seen=set()
       for j in nums:
        if j<=0:
            continue 
        elif j not in seen :
            seen.add(j)
        else:
            continue 
       for j in range(1,len(nums)+2):
        if j not in seen:
            return j
            break
        