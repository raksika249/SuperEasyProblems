class Solution(object):
    def judgeCircle(self, moves):
        arr=[0,0]
        for i in moves:
            if(i=='U'):
                arr[0]+=1
            elif(i=='D'):
                arr[0]-=1
            elif(i=='L'):
                arr[1]-=1
            else:
                arr[1]+=1
        if(arr[0]==0 and arr[1]==0):
            return True
        return False
