#include <stdio.h>
#include <locale.h>
#include <stdlib.h>



 

int main() {
    setlocale(LC_ALL,"Portuguese_Brazil");
    
    
        int m[3][3],diag[3][3]; 
      
  m[0][0]=2; 
  m[0][1]=0; 
  m[0][2]=1; 
  m[1][0]=3; 
  m[1][1]=4; 
  m[1][2]=2; 
  m[2][0]=8;
  m[2][1]=9; 
  m[2][2]=6; 
      
   printf("Matriz A\n"); 
 for(int j=0;j<3;j++){ 
  for(int p=0;p<3; p++){ 
    printf("%d\t",m[j][p]); 
   } 
   printf("\n"); 
 } 
          
    for(int j=0;j<3;j++){ 
        for(int p=0;p<3;p++){ 
          diag[j][p]=0; 
             if(j==p){ 
               diag[j][p]=m[j][p]; 
             } 
         } 
    } 
         printf("\nMatriz Diagonal\n"); 
    for(int j=0;j<3;j++){ 
        for(int p=0;p<3;p++){ 
            printf("%d\t",diag[j][p]); 
                 } 
                 printf("\n"); 
         }
         return 0; 
 }

  
    






    