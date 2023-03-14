#include <stdio.h>
#include <locale.h>
#include <stdlib.h>



 

int main() {
    setlocale(LC_ALL,"Portuguese_Brazil");
 
      
    
                   int x[2][2],y[2][2]; 
          
         x[0][0]=1; 
         x[0][1]=2;         
         x[1][0]=3; 
         x[1][1]=4; 
         y[0][0]=5; 
         y[0][1]=6; 
         y[1][0]=7; 
         y[1][1]=8; 
          
         printf("\nMatriz A\n"); 
         for(int j=0;j<2;j++){ 
                 for(int p=0;p<2;p++){ 
                         printf("%d\t",x[j][p]);                         
                 } 
                 printf("\n"); 
         } 
         printf("\nMatriz Y\n"); 
         for(int j=0;j<2;j++){ 
                 for(int p=0;p<2;p++){ 
                         printf("%d\t",y[j][p]);                         
                 } 
                 printf("\n"); 
         } 
          
         int mult[2][2],soma=0; 
          
         for(int j=0;j<2;j++){ 
                 for(int p=0;p<2;p++){ 
                         soma=0; 
                         for(int d=0;d<2;d++){ 
                                  soma+= x[j][d] * y[d][p]; 
                         } 
                         mult[j][p]=soma; 
                 } 
         } 
         printf("\nMatriz resultante da multiplicação das matrizes X e Y\n");         
         for(int j=0;j<2;j++){ 
                 for(int p=0;p<2;p++){ 
                         printf("%d\t",mult[j][p]);                         
                 } 
                 printf("\n"); 
         }
         return 0; 
 }

  
    






    