#include <stdio.h>
#include <stdlib.h>

/*
    data_type array_name[numbers_of_value];
    
    double numbers[1000];                   -> That's one dimension array.
    int matrix[10][10];                     -> Two dimension array.
    double three_dimension_arr[5][5][4]     -> Three dimension array. 

*/

int main(void) {
    int nums[5] = {0, 1, 2};  // static declaring array
    // int nums[5] = {}; -> {0, 0, 0, 0, 0}
    int i = 0;
    size_t length = sizeof(nums) / sizeof(nums[0]);
    for(i = 0; i < length; i++) {
        printf("nums[%d] == %d\n", i, nums[i]);
    }

    int nums1[5] = {[0 ... 1] = 5, [3 ... 4] = 10}; // range array declaration
    int j = 0;
    size_t length1 = sizeof(nums1) / sizeof(nums1[0]);
    for(j = 0; j < length1; j++) {
        printf("nums1[%d] == %d\n", j, nums1[j]);
    }

    return 0;
}