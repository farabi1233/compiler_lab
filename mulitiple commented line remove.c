Multiple line comment remove:
#include<stdio.h>
int main()
{

    int x,i,k=0,p=0,j;
    char s[200];

    gets(s);




    for ( i =0;i<strlen(s);i++)
    {

        if( s[i]== '*'  && s[i-1]== '/'  )
        {

            k = i-2;
        }

    }
        for ( i =0;i<strlen(s);i++)
    {

        if( s[i]== '/'  && s[i-1]== '*'  )
        {
            p = i+1;

        }

    }



    for ( i = 0 ; i<= k ; i++ )
    {
        printf("%c",s[i]);

    }


    for ( j = p ; j <= strlen(s) ; j++ )
    {
        printf("%c",s[j]);

    }





}



























