class Solution(object):
    def canAliceWin(self, nums):
        alice=0
        bob=0
        for i in nums:
            count=0
            temp=i
            while(temp!=0):
                count+=1
                temp//=10
            if(count==1):
                alice+=i
            else:
                bob+=i
        if(alice==bob):
            return False
        return True
