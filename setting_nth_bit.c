// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdint.h>

int main() 
{
    int number=5;


int result = (number & (1<<1));

if(result){
    printf("Bit is set");
}
else{
    printf("Bit is not set");
}
}
    
