#include <stdio.h>
int main(){
     printf("\tCalculator\n\n");
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
            printf(" Output: %.2f\n", num1+num2);
        }
        else if(oper == 2){
            printf(" %.2f\n", num1-num2);
        }
        else if(oper == 3){
            printf("Output: %.2f\n", num1*num2);
        }
       else if(oper == 4){
            printf("Output: %.2f\n", num1/num2);

        }
    }
}

