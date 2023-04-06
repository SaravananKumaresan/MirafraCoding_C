// Online C compiler to run C program online
#include <stdio.h>
#include<stdint.h>
#include<stdlib.h>

/*




*/

void matrixMult(int arr1[][2],int arr2[][2],int row1,int row2,int column1,int column2){
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
               result[i][j] += (arr1[i][k]) * (arr2[k][j]);
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
    
    uint32_t arr1[][2]={{1,2},{3,4}};
    uint32_t arr2[][2]={{2,5},{5,6}};
    int size = (sizeof(arr1))/(sizeof(arr1[0]));
   
  matrixMult(arr1,arr2,2,2,2,2);
    
   
    

    return 0;
}