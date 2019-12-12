#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(){

int ch;
char  u_id[20], pw[20];
printf("      Welcome To My Apps\n\n");
printf("Please login first!!\n");
printf("User_name:");
scanf("%s",&u_id);
printf("Password:");
scanf("%s",&pw);
if( strcmp(u_id,"farabi") ==0 && strcmp(pw,"root") == 0 ){
    system("cls");
    printf("login successfully !!\n");
    while(1){
    printf("..................\n");
    printf("1.calculator\n");
    printf("2.revers string\n");
    printf("3.others\n");
    printf("4.exit\n");
    printf("..................\n");
    printf("Choice:");
    scanf("%d",&ch);

    if(ch==1){
        printf("<calculator>");
        while(1){
            float num1, num2, total;
            int oper;
            printf("................\n");
            printf("1 for sum\n");
            printf("2 for sub\n");
            printf("3 for mul\n");
            printf("4 for div\n");
            printf("5 for exit\n");
            printf("................\n");
            printf("choice:");
            scanf("%d", &oper);
            if(oper == 5){
                break;
             }
            printf("................\n");
            printf("1st number: ");
            scanf("%f", &num1);
            printf("2nd number: ");
            scanf("%f", &num2);
            printf("................\n");

            if(oper == 1){
                system("cls");
                printf(" Output: %.2f\n", num1+num2);
            }
            else if(oper == 2){
                system("cls");
                printf(" %.2f\n", num1-num2);
            }
            else if(oper == 3){
                system("cls");
                printf("Output: %.2f\n", num1*num2);
            }
           else if(oper == 4){
                system("cls");
                printf("Output: %.2f\n", num1/num2);

            }
        }
        printf("\n\n..................\n");
        system("cls");
    }
    if(ch==2){

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




    if(ch==3){
       printf("others");
       printf("\n\n..................\n");
    }


    if(ch==4){
            break;

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

