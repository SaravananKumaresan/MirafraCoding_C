// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdint.h>

typedef struct{
   char subject[30];
   uint8_t marks;
}grades_t;
int main() {
    // Write C code here
uint32_t size;    
  printf("Enter the number of subject:\n"); 
  scanf("%d",&size);
  grades_t *grade;
  
  grade= (grades_t *)malloc(size * sizeof(grades_t));
  int i;
  for(i=0;i<size;++i){
    printf("Enter the %d subject name and mark:\n",i);
    scanf("%s",(grade+i)->subject);
    scanf("%d",&(grade+i)->marks); 
  }
  i=0;
  
  while(i<size){
      if(((grade+i)->marks)<60){
          printf("%s \t %d(Non prime)\n",((grade+i)->subject),((grade+i)->marks));
      }
      else{
          printf("%s \t %d(prime)\n",((grade+i)->subject),((grade+i)->marks)); 
      }
      i++;
  }
  
  

    return 0;
}