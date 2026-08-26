class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
       a=nums1+nums2
       a.sort()
       if len(a)%2 !=0:
        median=len(a)//2
        return a[median]
        
       else:
        left = a[len(a)//2 - 1]
        right = a[len(a)//2]
        median = (left + right) / 2.0
        return median
      
