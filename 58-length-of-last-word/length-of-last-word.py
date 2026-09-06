class Solution(object):
    def lengthOfLastWord(self, s):
        
        s=s.rstrip()
        s=list(s)
        count=0
        for i in range(len(s)-1,-1,-1):
            if s[i]==" ":
                break
            else:
                count=count+1
        return count