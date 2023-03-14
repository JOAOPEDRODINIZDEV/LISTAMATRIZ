#include <stdio.h>
#include <locale.h>
#include <stdlib.h>



 

int main() {
    setlocale(LC_ALL,"Portuguese_Brazil");
    
    
    int m[2][2],cof[2][2]; 
          
m[0][0]= 2; 
m[0][1]= 3; 
m[1][0]= 1; 
m[1][1]= 4; 
          
         int ai=1,aj=1; 
  
 for(int i=0;i<2;i++){
     for(int j=0;j<2;j++){ 
         if(i==j){ 
       cof[ai][aj]=m[i][j]; 
}else{ 
       cof[i][j]=-1*m[j][i]; 
                } 
     } 
      ai--; 
     aj--; 
 } 
          
 printf("Matriz M\n"); 
   for(int j=0;j<2;j++){ 
       for(int p=0;p<2;p++){ 
            printf("%2d\t",m[j][p]); 
       } 
            printf("\n"); 
   } 
printf("\nMatriz Cofatora\n"); 
   for(int j=0;j<2;j++){ 
       for(int p=0;p<2;p++){ 
            printf("%2d\t",cof[j][p]); 
       }
            printf("\n"); 
   } 
         
         return 0; 
 }

  
    






    