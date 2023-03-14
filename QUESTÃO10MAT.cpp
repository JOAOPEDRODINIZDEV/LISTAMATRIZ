#include <stdio.h>
#include <locale.h>
#include <stdlib.h>



 

int main() {
    setlocale(LC_ALL,"Portuguese_Brazil");
    
    
         int m[2][2],ref[2][2]; 
          
         m[0][0]=1; 
         m[0][1]=2; 
         m[1][0]=3; 
         m[1][1]=4; 
          
         int aj=1; 
          
         for(int j=0;j<2;j++){ 
                 aj=1; 
             for(int p=0;p<2;p++){ 
                  if(j==0){ 
                      ref[j][p]=m[j][aj]; 
                         aj--; 
                         }else{ 
                          ref[j][p]=m[j][aj]; 
                                 aj--; 
                 } 
            } 
         }         
          
         printf("Matriz M\n"); 
         for(int j=0;j<2;j++){ 
                 for(int p=0;p<2;p++){ 
                         printf("%d\t",m[j][p]);                         
                 } 
                 printf("\n"); 
         } 
         printf("\nA Matriz Refletida em relação ao eixo Y\n"); 
         for(int j=0;j<2;j++){ 
                 for(int p=0;p<2;p++){ 
                         printf("%d\t",ref[j][p]);                         
                 } 
                 printf("\n"); 
         }
         return 0; 
 }

  
    






    