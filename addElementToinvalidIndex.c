// Online C compiler to run C program online
#include <stdio.h>
#include<stdint.h>

/*
If we try to add element to the index which not belongs to the array,
we can add it and also access the same element as well.
It is not recomended, since it may override some other valid data in memory

*/

int main() {
   
    uint32_t array[]={1,2,3,4,5};
    
    array[5]=6;
    
    printf("%d\n",array[5]);
    

    return 0;
}