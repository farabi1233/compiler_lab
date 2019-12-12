#include<stdio.h>
int main(){
    int i = 0,lenth = 0,j;
    char str1[100] = "hosnain Ahammad";
    char str2[100];
    //printf("Input String:");
    //scanf("%s", str1);
    while(str1[i] != '\0'){
            i++;
            lenth++;
    }

    for(j=0,i=lenth-1;i>=0;i--,j++){
            str2[j] = str1[i];
    }
    str2[j] = '\0';
    printf(" Main String: %s\n",str1);
    printf(" Revers String: %s\n",str2);
 }
