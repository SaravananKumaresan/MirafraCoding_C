
#include <stdio.h>
#include<stdint.h>

/*
when we are passing array to function as a pointer , address of the 0th  element of array will be pass to the function.

*/

void passByRef(int *parray,int size){
    int iterator;

    for(iterator=0;iterator<size;++iterator){
        printf("%d\n",*(parray +iterator));
    }
}

int main() {

    uint32_t array[]={1,2,3,4,5};
    uint32_t size = sizeof(array)/sizeof(uint32_t);
    passByRef(array,size);


    return 0;
}
