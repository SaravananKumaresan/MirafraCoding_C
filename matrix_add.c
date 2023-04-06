// Online C compiler to run C program online
#include <stdio.h>
#include<stdint.h>
#include<stdlib.h>

/*




*/

void matrixadd(int arr1[][3],int arr2[][3],int row1,int row2,int column1,int column2){
    int result[row1][column1];
    int i,j,k;
    for(i=0;i<row1;++i){
        for(j=0;j<column1;++j){
          result[i][j]=0;  
        }
        
    }
    
    for(i=0;i<row1;++i){
        for(j=0;j<column1;++j){
            for(k=0;k<column2;++k){
               result[i][j] += (arr1[i][k]) + (arr2[j][k]);
            }
        }
    }
    
    for(i=0;i<row1;++i){
        for(j=0;j<column1;++j){
          printf("%d\n",result[i][j]);
          if(j==column1-1){
              printf("\n");
          }
        }
        
    }
    
}
    
    
//printf("%d %d\n",maxfreq,tempmax);
    


int main() {
    
    uint32_t arr1[][3]={{1,2,5},{3,4,8},{4,6,7}};
    uint32_t arr2[][3]={{1,2,5},{3,4,8},{4,6,7}};
    int size = (sizeof(arr1))/(sizeof(arr1[0]));
   
  matrixadd(arr1,arr2,3,3,3,3);
    
   
    

    return 0;
}