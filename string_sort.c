#include <stdio.h>
#include <string.h>

int main(){
   char string[]="malayalam", temp;
   int i, j, n=strlen(string);

   printf("String before sorting : %s \n", string);

   for(i=0;i<n-1;i++){
      for(j=i+1;j<n;j++) {
         if(string[i] > string[j]){
            temp = string[i];
            string[i] = string[j];
            string[j] = temp;
         }
      }
   }
   
   printf("String after sorting : %s \n", string);
   return 0;
}
