#include <stdio.h>
#include <locale.h>
#include <stdlib.h>



 

int main() {
    setlocale(LC_ALL,"Portuguese_Brazil");
    
    
                        int m[2][2],ib=0,jb=0,a[2][2]; 
          
         m[0][0]=1; 
         m[0][1]=2; 
         m[1][0]=3; 
         m[1][1]=4; 
          
         for(int j=0;j<2;j++){ 
                 jb=0; 
                 for(int p=2-1;p>=0;p--){ 
                         a[ib][jb]=m[j][p]; 
                         jb++; 
                 } 
                 ib++; 
         } 
          
         printf("Matriz M\n"); 
         for(int j=0;j<2;j++){ 
                 for(int p=0;p<2;p++){ 
                         printf("%2d\t",m[j][p]); 
                 } 
                 printf("\n"); 
         } 
         printf("Matriz Rotacionada em 90º graus\n"); 
         for(int j=0;j<2;j++){ 
                 for(int p=0;p<2;p++){ 
                         printf("%2d\t",a[j][p]); 
                 } 
                 printf("\n"); 
         }
         return 0; 
 }

  
    






    