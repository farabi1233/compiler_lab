#include <stdio.h>
#include <string.h>
int main()
{

    char k1[]="int",k2[]="float",k3[]="double",k4[]="for",k5[]="for",k6[]="if";
    char o1[]="+",o2[]="-",o3[]="*",o4[]="/",o5[]="=",o7[]="++",o8[]="<",o9[]=">",o10[]="<=",o11[]=">=",o12[]="==";

    char a[100], b[100], c[100];

    char str[80] = "int a ; for ( i = 1 ; i < 5 ; i ++ ) ;";
    const char s[2] = " ";
    char *token;

   /* get the first token */
    token = strtok(str, s);

   /* walk through other tokens */
    while( token != NULL ) {


        if(strcmp("for",token)==0 || strcmp("int",token)==0 || strcmp("while",token)==0   || strcmp("float",token)==0 || strcmp("double",token)==0 || strcmp("if",token)==0 )
        {
           printf( " %s - Its a Keyword \n", token );
        }
        else if( (strcmp("+",token)==0) || (strcmp("-",token)==0) || (strcmp("=",token)==0) || (strcmp("<",token)==0)   || strcmp("++",token)==0 )
        {
            printf( " %s - Its an Operator \n", token );
        }
        else if( (strcmp(",",token)==0) || (strcmp(";",token)==0)  )
        {
            printf( " %s - Its a Separator \n", token );
        }
        else if((strcmp(" ",token)==0))
        {
            printf(" - Its a Space");
        }

        else if ((strcmp("0",token)==0)||
                    (strcmp("1",token)==0)||
                    (strcmp("2",token)==0)||
                    (strcmp("3",token)==0)||
                    (strcmp("4",token)==0)||
                    (strcmp("5",token)==0)||
                    (strcmp("6",token)==0)||
                    (strcmp("7",token)==0)||
                    (strcmp("8",token)==0)||
                    (strcmp("9",token)==0)

                )
                {

                    printf( " %s - Its an Number \n", token );

                }

     else if ((strcmp("a",token)==0)||
                    (strcmp("b",token)==0)||
                    (strcmp("c",token)==0)||
                    (strcmp("d",token)==0)||
                    (strcmp("e",token)==0)||
                    (strcmp("f",token)==0)||
                    (strcmp("g",token)==0)||
                    (strcmp("h",token)==0)||
                    (strcmp("i",token)==0)||
                    (strcmp("j",token)==0)
                )
                {
                     printf( " %s - Its an Identifier \n", token );
                }



        else
        {
            printf( " %s - Its an Separator! \n", token );
        }

        token = strtok(NULL, s);

}



}
