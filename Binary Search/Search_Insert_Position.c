int searchInsert(int* nums, int numsSize, int target){
    int first=0,last=numsSize,mid;
    if(target>nums[numsSize-1])return numsSize;
    if(target<nums[0])return 0;
    while(first<last){
        mid = (first+last)/2;
        if(nums[mid]>target)last--;
        if(nums[mid]<target)first++;
        if(nums[mid]==target){
            return mid;}
    }
    return mid+1;

}
