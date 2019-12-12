#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(){

int ch;
char  u_id[20], pw[20],  in_u_id[20], in_pw[20];
printf("      Welcome To My Apps\n\n");
printf("Create Account first!!\n");
printf("User_name:");
gets(in_u_id);
printf("Password:");
gets(in_pw);
printf("\n\nPlease login !!\n");
printf("User_name:");
scanf("%s",&u_id);
printf("Password:");
scanf("%s",&pw);
if( strcmp(u_id,in_u_id) ==0 && strcmp(pw,in_pw) == 0 ){
    system("cls");
    printf("login successfully !!\n");
    while(1){
    printf("..................\n");
    printf("1.encode\n");
    printf("2.decode\n");
    printf("3.concad\n");
    printf("4.rev\n");
    printf("..................\n");
    printf("Choice:");
    scanf("%d",&ch);




    if(ch==1){
            char string[50],tmp[50];
     int spcnt[50],i,j,c;


     printf("Enter a string : ");
     scanf("%s", string);


     //encode logic
     for(i=0;string[i];i++)
        {
        string[i]=string[i]+4;
        }
        string[i] = '\0';
 //decompressed logic
     //for(i=0;string[i];i++)
    //{
     //string[i]=string[i]-4;
     //}

     printf("\n");
     printf("Encoded string is as follow : %s\n",string);




    }
    if(ch==2){
            char string[50],tmp[50];
     int spcnt[50],i,j,c;


     printf("Enter a string : ");
     scanf("%s", string);


     //encode logic
     for(i=0;string[i];i++)
        {
        string[i]=string[i]-4;
        }
        string[i] = '\0';
 //decompressed logic
     //for(i=0;string[i];i++)
    //{
     //string[i]=string[i]-4;
     //}

     printf("\n");
     printf("Decoded string is as follow : %s\n",string);






    }




    if(ch==3){
       printf("concad");
        printf("Concat");
       printf("Concat TWO String:\n\n");
        char s1[100], s2[100], i, j;
        printf("Enter  string 1: ");
        scanf("%s", s1);
        printf("Enter string 2: ");
        scanf("%s", s2);

        strcat(s1,s2);
        printf("CONCATING STRING : %s", s1);


       printf("\n\n..................\n");

       printf("\n\n..................\n");
    }


    if(ch==4){
            printf("revers string\n");
            printf("..................\n");
            int i = 0,lenth = 0,j;
            //char str1[100] = "hosnain Ahammad";
            char str1[100];
            char str2[100];
            printf("Input String:");
            scanf("%s", str1);
            while(str1[i] != '\0'){
                    i++;
                    lenth++;
            }
            for(j=0,i=lenth-1;i>=0;i--,j++){
                    str2[j] = str1[i];
            }
            str2[j] = '\0';
            system("cls");
            printf(" Main String: %s\n",str1);
            printf(" Revers String: %s\n",str2);
            printf("\n\n..................\n");


    }

 }//infinity while after login


    }//login if
else{
        printf("..................\n");
        printf("->Login Failed \n ->User name or Password is incorrect ");
        system("cls");
    }

return 0;
}

