#include <stdio.h>
#define LENTH 8

int binSearchRec( int nums[], int x, int min, int max);

int main (){
    int nums[LENTH] = {4,4,5,23,25,32,78,98};
    int x = 76;
    int ans = binSearchRec(nums, x, 0, LENTH-1);
    printf("%d \n", ans);
    return 0;
}

int binSearchRec( int nums[], int x, int min, int max){

    if( max < min ){
        return -1;
    }

    int mid=(max+min)/2;

    if( nums[mid] > x){
        return  binSearchRec( nums, x, min, mid-1);
    }else if( nums[mid] < x ){
        return binSearchRec( nums, x, mid+1, max);
    }else {
        return mid;
    }    
    
}