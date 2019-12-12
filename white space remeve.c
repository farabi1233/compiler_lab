#include <stdio.h>
#include <string.h>
int main() {

    char text[100];
    int i=0, length;
    printf("Input:");
    gets(text);
    length = strlen(text);
    printf("\nOutput:");

    for(i=0 ; i<length ; i++){
            //if
        if (text[i]==32 && text[i-1]=='f' && text[i-2]=='i' ) {
                printf(" ",text[i] );
                continue;

         }
         //else
         else if (text[i]==32 && text[i-1]=='e' && text[i-2]=='s' && text[i-3]=='l' && text[i-4]=='e' ) {
                printf(" ",text[i] );
                continue;

         }





        //for
        else if (text[i]==32 && text[i-1]=='r' && text[i-2]=='o' && text[i-3]=='f' ) {
                printf(" ",text[i] );
                continue;
        }
        //while
        else if (text[i]==32 && text[i-1]=='e' && text[i-2]=='l' && text[i-3]=='i' && text[i-4]=='h' && text[i-5]=='w' ) {
                printf(" ",text[i] );
                continue;

         }
         //do
         if (text[i]==32 && text[i-1]=='0' && text[i-2]=='d' ) {
                printf(" ",text[i] );
                continue;

         }
        //int
        else if (text[i]==32 && text[i-1]=='t' && text[i-2]=='n' && text[i-3]=='i' ) {
                printf(" ",text[i] );
                continue;
        }

        else if (text[i]=='t' && text[i-1]=='n' && text[i-2]=='i' ) {
                printf("%c ",text[i] );
                continue;
        }
        //float
        else if (text[i]==32 && text[i-1]=='t' && text[i-2]=='a' && text[i-3]=='o' && text[i-4]=='l' && text[i-5]=='f' ) {
                printf(" ",text[i] );
                continue;
        }
        else if (text[i]=='t' && text[i-1]=='a' && text[i-2]=='o' && text[i-3]=='l' && text[i-4]=='f' ) {
                printf("%c ",text[i] );
                continue;
        }
        //double
        else if (text[i]==32 && text[i-1]=='e' && text[i-2]=='l' && text[i-3]=='b' && text[i-4]=='u' && text[i-5]=='o'&& text[i-6]=='d' ) {
                printf(" ",text[i] );
                continue;
        }
        else if (text[i]=='e' && text[i-1]=='l' && text[i-2]=='b' && text[i-3]=='u' && text[i-4]=='o' &&text[i-5]=='d' ) {
                printf("%c ",text[i] );
                continue;
        }
        //char
         else if (text[i]==32 && text[i-1]=='r' && text[i-2]=='a' && text[i-3]=='h' && text[i-4]=='c' ) {
                printf(" ",text[i] );
                continue;

         }
         else if (text[i]=='r' && text[i-1]=='a' && text[i-2]=='h' && text[i-3]=='c' ) {
                printf("%c ",text[i] );
                continue;
        }


        //space
        else if (text[i]==32) {
                continue;


         }



        else{
        printf("%c",text[i] );
        continue;
        }
    }
}
