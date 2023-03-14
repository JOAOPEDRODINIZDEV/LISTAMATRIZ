#include <stdio.h>
#include <locale.h>
#include <stdlib.h>



 

int main() {
    setlocale(LC_ALL,"Portuguese_Brazil");
    
    
                int m[2][2], identidade[2][2]; 
          
         m[0][0]=1; 
         m[0][1]=2; 
         m[1][0]=3; 
         m[1][1]=4; 
          
         for(int j=0;j<2;j++){ 
                 for(int p=0;p<2;p++){ 
                         if(j==p){ 
                                 identidade[j][p]=1; 
                         }else{ 
                                 identidade[j][p]=0; 
                         }         
                 } 
         } 
          
         printf("\nMatriz M\n"); 
         for(int j=0;j<2;j++){ 
                 for(int p=0;p<2;p++){ 
                         printf("%d\t",m[j][p]); 
                 } 
                 printf("\n"); 
         } 
         printf("\n A Matriz Identidade\n"); 
         for(int j=0;j<2;j++){ 
                 for(int p=0;p<2;p++){ 
                         printf("%d\t", identidade[j][p]); 
                 } 
                 printf("\n"); 
         } 
                  
         return 0; 
 }

  
    






    