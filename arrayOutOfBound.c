// Online C compiler to run C program online
#include <stdio.h>
#include<stdint.h>

/*

whenever we are trying to access the index which is out of bound for array ,we will get garbage value.
array boundary not taking care by C compiler by default ,we have to take care of it.




*/

int main() {
   
    uint32_t array[]={1,2,3,4,5};
    
    printf("%d\n",array[6]);
    

    return 0;
}