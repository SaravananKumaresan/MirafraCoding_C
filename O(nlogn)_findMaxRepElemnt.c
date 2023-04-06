// Online C compiler to run C program online
#include <stdio.h>
#include<stdint.h>
#include<stdlib.h>

/*

By taking 0th element of array compare with other elements of the array(to do so we need 2 for loops, so O(n^2)), if it's equal increase the count variable by 1, once the inner loop completes just compare count variable with maxfreq variable,if count is greater than maxfreq, then assign the count value to maxfreq,otherwise maxfreq will be same. Finally return the max freq.

or 

first we sort the array, all the duplicate elements will be back to back, so now we can use single loop to findout the max frequency

after sorted the array {1,1,2,2,2,3,3}

now compare the ith element and i+1th element, if both same we can increase count by 1,or compare count and maxcount ,if count bigger assign count value to maxcount and reset the value of count.



*/

int cmpare(const void *a,const void *b){
    return (*(int*)a-(*(int*)b));
}

void findMaxRepeating(int *arr,int size){
    int i,j,count=1,maxfreq=0,maxcount=1;
    
    
     qsort(arr,size,sizeof(int),cmpare) ; 
     
    for(i=0;i<size;++i){
        
        if(arr[i]==arr[i+1]){
            count++;
        }
        else {
            if(count>maxcount){
                maxcount=count;
                maxfreq=arr[i];
                count=1;
            }
            
        
        }
    }
    
    printf("%d\n",maxfreq);
     
       
    }
    
    
    
    
//printf("%d %d\n",maxfreq,tempmax);
    


int main() {
   
    uint32_t arr[]={1,3,1,3,2,2,2};
    int size = (sizeof(arr))/(sizeof(arr[0]));
    //printf("%d \n",findMaxRepeating(arr,size));
  findMaxRepeating(arr,size);
    
   
    

    return 0;
}