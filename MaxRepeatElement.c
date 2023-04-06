// Online C compiler to run C program online
#include <stdio.h>
#include<stdint.h>

/*

By taking 0th element of array compare with other elements of the array(to do so we need 2 for loops, so O(n^2)), if it's equal increase the count variable by 1, once the inner loop completes just compare count variable with maxfreq variable,if count is greater than maxfreq, then assign the count value to maxfreq,otherwise maxfreq will be same. Finally return the max freq.



*/

void findMaxRepeating(int *arr,int size){
    int i,j,count=0,maxfreq=0,maxcount=0,tempmax,tempCount;
    for(i=0;i<size;++i)
    {
        for(j=i+1;j<size;++j){
            
            if((*(arr+i)) == (*(arr+j))){
               count++;
            }
        }
       if(count>maxcount){
        //tempCount=maxcount;   
        maxcount=count;
        //tempmax=maxfreq;
        maxfreq= *(arr+i);
        //printf("%d\n",maxCount);
        } 
       
    }
    
    
    
printf("%d\n",maxfreq);
    
}

int main() {
   
    uint32_t arr[]={1,3,1,3,1,2};
    int size = (sizeof(arr))/(sizeof(arr[0]));
    //printf("%d \n",findMaxRepeating(arr,size));
  findMaxRepeating(arr,size);
    
   
    

    return 0;
}