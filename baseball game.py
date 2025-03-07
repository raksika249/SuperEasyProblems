class Solution(object):
    def calPoints(self, oper):
        rec=[]
        k=0
        sum=0
        for i in range(0,len(oper)):
            if(oper[i]=='+'):
                ele1=int(rec[k-1])
                ele2=int(rec[k-2])
                rec.append(ele1+ele2)
                k+=1
            elif(oper[i]=='D'):
                ele=int(rec[k-1])
                rec.append(ele+ele)
                print(rec)
                k+=1
            elif(oper[i]=='C'):
                rec.remove(rec[k-1])
                k-=1
            else:
                ele=int(oper[i])
                rec.append(ele)
                k+=1
        for i in rec:
            sum+=i
        return sum
