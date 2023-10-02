int arraySign(int* nums, int numsSize){
    int p=1;
    for(int i=0;i<numsSize;i++){
        if(nums[i]>0)p = p*1;
        else if (nums[i]<0) p = p*(-1);
        else return 0;
    }
    return p;

}
