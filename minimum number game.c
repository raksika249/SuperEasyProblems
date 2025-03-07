int min(int *nums,int numsSize){
    int small=1000,small_in;
    for(int j=0;j<numsSize;j++){
        if(nums[j]<small){
            small=nums[j];
            small_in=j;
        }
    }
    nums[small_in]=1000;
    return small;
 }
int* numberGame(int* nums, int numsSize, int* returnSize) {
    *returnSize=numsSize;
    int* arr=(int *)malloc(sizeof(int)*numsSize);
    int a=0,small,small2;
    while(a<numsSize){
        small=min(nums,numsSize);
        small2=min(nums,numsSize);
        arr[a]=small2;
        a++;
        arr[a]=small;
        a++;
    }
    return arr;
}
