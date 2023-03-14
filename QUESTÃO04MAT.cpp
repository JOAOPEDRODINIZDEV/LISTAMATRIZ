#include <stdio.h>
#include <locale.h>
#include <stdlib.h>



 

int main() {
    setlocale(LC_ALL,"Portuguese_Brazil");
    
    
   float m[2][2],inv[2][2]; 
          
 m[0][0]=1; 
 m[0][1]=2; 
 m[1][0]=3; 
 m[1][1]=4; 
          
  int diag_a=1,diag_b=1,det; 
  int tam=2; 
          
 for(int i=0;i<tam;i++){ 
     for(int j=0;j<tam;j++){ 
          if(i==j){ 
                diag_a*=m[i][j]; 
     } 
              if(j==(tam-1)-i){ 
                 diag_b*=m[j][i]; 
              } 
         } 
  } 
         det=diag_a-diag_b; 
          
                 printf("Matriz M\n\n"); 
         for(int i=0;i<2;i++){ 
                 for(int j=0;j<2;j++){ 
                         printf("%d\t",m[i][j]); 
                 } 
              printf("\n"); 
         }         
         printf("\nDeterminante:%d\n",det); 
         
         return 0; 
 }

  
    






    