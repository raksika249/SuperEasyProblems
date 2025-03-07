int countDigits(int num) {
    int temp=num,n,res=0;
    while(temp!=0){
        n=temp%10;
        if(num%n==0)
        res++;
        temp/=10;
    }
    return res;   
}
