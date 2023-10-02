bool canMakeArithmeticProgression(int* arr, int arrSize){
    int i,key,j,d;
    
    for(i=0;i<arrSize;i++){
        key = arr[i];
        j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;}
        arr[j+1] = key;}
    
    i=0;
    while(i<arrSize-2){
        if(arr[i+1] - arr[i] != arr[i+2] - arr[i+1])return false;
        i++;
    }

    return true;



}
