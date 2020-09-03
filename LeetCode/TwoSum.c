#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int i,k;
    int firstIdx = 0;
    int secondIdx = 0;
    int* ptr;
    ptr = (int*) malloc(2 * sizeof(int));

    for (i=0;i<numsSize;i++)
    {
        for (k=i+1;k<numsSize;k++)
        {
           int a = nums[i];
           int b = nums[k];
           if  ((a+b) == target)
           {
               firstIdx = i;
               secondIdx = k;
                ptr[0] = i;
                ptr[1] = k;
                *returnSize = 2;

                return ptr;
           }
        }
    }
}

int main()
{
    int nums[] = {2,11,7,15};
    int *result;

    int returnSize;
    int target = 9;

    result = twoSum(nums,4,target,&returnSize);

    int val1 = result[0];
    int val2 = result[1];

    printf("deneme");

}

