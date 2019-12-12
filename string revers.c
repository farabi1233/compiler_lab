#include<stdio.h>
int main() {
   char str[100], temp;
   int x,i =0, j = 0;
   printf("Enter the string :");
   scanf("%s", str);
   for(x = 0; str[x] != '\0'; x++);
    {
        j = x-1;
    }
   while (i < j) {
      temp = str[i];
      str[i] = str[j];
      str[j] = temp;
      i++;
      j--;
   }
    printf("Reverse string is :%s", str);
   return (0);
}
