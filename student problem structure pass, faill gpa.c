#include <stdio.h>
typedef struct
{
    char name[20];
    float attendance;
    float mark;

    float marks;
} student;
int main()
{

    int i, n, j;
    printf("Number of input:");
    scanf("  %d", &n);
    student std[n];

    for (i = 0; i < n; i++)
    {
        //scanf("%s %d %f",&std[i].name,&std[i].attendance,&std[i].mark);

        printf("Name:");
        scanf("%s", &std[i].name);
        printf("Attendence:");
        scanf("%f", &std[i].attendance);
        printf("Mark:");
        scanf("%f", &std[i].mark);
    }
    for (i = 0; i < n; i++)
    {

        if (std[i].attendance == 0)
        {
            printf("Name: %s --Fail \n", std[i].name);
        }
        else
        {
            printf("Name: %s ", std[i].name);
            std[i].marks = ((0.80 * std[i].mark) + std[i].attendance);
            printf(" Marks:%f\n", std[i].marks);
        }
    }

    printf("\n\n\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (std[j].marks < std[j + 1].marks)
            {
                int temp = std[j].marks;
                std[j].marks = std[j + 1].marks;
                std[j + 1].marks = temp;
            }
        }
    }

    for (i = 0; i < 4; i++)
    {

        printf("%d. Name: %s   Total Marks : %f ", i + 1, std[i].name, std[i].marks);
        printf("\n");
    }

    return 0;
}
