#100% okay  ‘//’ DELETION

#include<stdio.h>




int main()
{

    int i,x,j=0,l,k=0,p=0;
    char s[100];




        for (l =0 ; l<10000; l++)
        {

            gets(s);

        if(s[l]!= '/' &&   s[l-1]!= '/' )
        {
            puts(s);
            l=0;
        }
        else if ( s[l]== '/' &&   s[l-1]== '/'  )
        {
            printf("\n");
        }
        else
        {
		// 
        }
    }
}

