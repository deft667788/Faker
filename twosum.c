#include <stdio.h>
#include <stdlib.h>

int * twoSum(int *nums, int numsSize, int target, int *count)
{
    int i, j;
    for(i=0;i<numsSize;i++){
        for(j=i+1;j<numsSize;j++){
            if(nums[i]+nums[j]==target){
                int *ret= malloc(sizeof(int)*2);
                ret[0]=i,ret[1]=j;
                *count=2;
                return ret;
            }
        }
    }
    return NULL;
}

int main() {
    //int nums[] = {-1, -2, -3, -4, -5};
    //int target = -8;
    //int nums[] = {0,4,3,0};
    //int target = 0;
    int nums[] = { 3, 2, 3,4 ,5};
    int numsSize = sizeof(nums) / sizeof(*nums);
    int target = 7;
    int count = 0;
    int *indexes = twoSum(nums,numsSize, target, &count);
    if (indexes != NULL) {
        printf("%d %d\n", indexes[0], indexes[1]);
    } else {
        printf("Not found\n");
    }

    return 0;
}
