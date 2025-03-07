int numberOfEmployeesWhoMetTarget(int* hours, int size, int target) {
    int res=0;
    for(int i=0;i<size;i++){
        if(hours[i]>=target)
        res++;
    }
    return res;
}
