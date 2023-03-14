#include <stdio.h>
#include <locale.h>



 

int main() {
    setlocale(LC_ALL,"Portuguese_Brazil");
 
             int m[3][3],a[3][3]; 
          
         m[0][0]=1; 
         m[0][1]=2; 
         m[0][2]=3; 
         m[1][0]=4; 
         m[1][1]=5; 
         m[1][2]=6; 
         m[2][0]=7; 
         m[2][1]=8; 
         m[2][2]=9; 
          
         for(int j=0;j<3;j++){       
                 for(int p=0;p<3; p++){       
                         a[j][p]=m[p][j]; 
                 } 
         } 
         printf("\nMatriz\n"); 
         for(int j=0;j<3;j++){ 
                 for(int p=0;p<3;p++){ 
                         printf("%d\t",m[j][p]);                         
                 } 
                 printf("\n"); 
         } 
         printf("\nMatriz Transposta\n"); 
         for(int j=0;j<3;j++){ 
                 for(int p=0;p<3;p++){ 
                         printf("%d\t",a[j][p]); 
                 } 
                 printf("\n"); 
         }
         return 0; 
 }

  
    






    