int search(int* nums, int numsSize, int target){
    int first=0,last=numsSize,middle;
    while(first<last){
        middle =(first + last)/2;
        if(nums[middle]>target)last--;
        if(nums[middle]<target)first++;
        if(nums[middle]==target)return middle;
    }

    return -1;

}
