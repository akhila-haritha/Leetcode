void insertionSort(int *nums,int numsSize);


int missingNumber(int* nums, int numsSize){
    int val=0,count=1;
    //apply insertion sort
    insertionSort(nums,numsSize);
    for(int i=0;i<numsSize;i++){
        if(nums[i]==val)val++;
        else{
            count=0;
            return val;}
    }
    return nums[numsSize-1]+1;



}



void insertionSort(int *nums,int numsSize){
    int i,key,j;
    for(i=1;i<numsSize;i++){
        key = nums[i];
        j = i-1;
        while(j>=0 && nums[j]>key){
            nums[j+1] = nums[j];
            j--;}
        nums[j+1] = key;
    }

}
