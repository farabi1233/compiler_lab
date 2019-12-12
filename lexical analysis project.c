#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main()
{
    char expr[100], op[20];            //expression and operator
    char var[20][20];                  // 2d array for storing variable or identifier
    int cons[20], ascii[100] = {0};    //constants, ascii values of expression
    int len, i, num = 0;               //string length
    int j = -1, k = -1, l = -1, n = 0; //counters for filling arrays
    int pr[10] = {0}, m = 0;           //counters for printing identifier arrays
    int c = 0, v = 0, o = 0, ct = 1;

    printf("\n     \xB2\xB4\xB2\xB4\xB2\xB4\xB2\xB4\xB2\xB4\xB2\xB4 Welcome to Lexical Analysis System \xC3\xB2\xB4\xB2\xB4\xB2\xB4\xB2\xB4\xB2\xB4\xB2");
    printf("\n\n\n\t\t       LEXICAL ANALYZER\n\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205);

    printf("\n\xC3 Enter the Expression      : ");
    scanf("%[^\n]%*c", expr);
    len = strlen(expr);
    printf("\n\xC3 String length is: %d\n", len);

    for (i = 0; i < len; ++i) //STORE IN INT
    {
        ascii[i] = (int)expr[i];
    }

    printf("\n\xC3 STREAM OF TOKENS :\n");
    printf("\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\n");

    for (i = 0; i < len; ++i)

    {

        if (isdigit(expr[i]))
        {
            while (isdigit(expr[i]))                                                                //Constraints
            {
                num = 10 * num + ascii[i] - '0';                                                    //'2''4' to '24'
                i++;
            }
            j++;
            cons[j] = num;
            num = 0;
            printf(" <%d> ", cons[j]);
        }

        if (isalpha(expr[i]))                                                                       //Variable
        {
            while (isalpha(expr[i]) || isdigit(expr[i]) || expr[i] == '_')
            {
                k++;
                var[m][k] = expr[i];
                i++;
            }
            printf(" <id,%d> ", ct);
            m++;
            pr[n] = k;
            n++;
            k = -1;
            ct++;
        }

        if (expr[i] == '+' || expr[i] == '-' || expr[i] == '/' || expr[i] == '*' || expr[i] == '=' || expr[i] == '^') // Conditions to check for operators
        {
            l++;
            op[l] = expr[i];
            printf(" <%c> ", expr[i]); //change
        }
    }
    printf("\n\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\n");

    printf("\n\xC3 Total Constraints : %d", j + 1);
    printf("\n\xC3 The Constraints are: \n");
    for (i = 0; i <= j; i++)
    {
        printf("\t<%d>\n", cons[i]);

    }
    printf("\n\xC3 Total Operators : %d", l + 1);
    printf("\n\xC3 The Operators are: \n\n");
    for (i = 0; i <= l; i++)
    {
        printf("\t<%c>\n", op[i]);

    }

    printf("\n\xC3 Total Variables : %d", m);
    printf("\n\xC3 The Variables are: \n");
    printf("\n    ID   \xB3  VALUE\t");
    printf("\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205);

    for (i = 0; i < m; i++)
    {
        printf("\n\xB3 <id,%d> \xB3", i + 1);
        for (j = 0; j <= pr[i]; j++)
        {
            printf("    %c   \xB3", var[i][j]);
            printf("\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205);
        }

        v++;
    }
}

