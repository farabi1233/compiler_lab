#include "stdio.h"
#include "string.h"
#include "stdbool.h"

FILE *fp;

int main()
{
  bool bool_state = false;
  int i, j, name_position = 1, nationality_position = 1;
  long val;
  char ch;
  char name[50], age[50], nationality[50];
  char temp_1[50] = {'\0'}, temp_2[50] = {'\0'}, temp_3[50] = {'\0'};
  char first_name[50] = {'\0'}, last_name[50] = {'\0'};

  fp = fopen("data.txt", "r");

  fscanf(fp, "%[^\n]s", name);
  fscanf(fp, "\n%[^\n]s", age);
  fscanf(fp, "\n%[^\n]s", nationality);

  for (i = 1; i < strlen(name); i++)
  {
    if (name[i] >= 'A' && name[i] <= 'Z')
    {
      bool_state = true;
    }
    if (bool_state)
    {
      ch = name[i];
      strncat(temp_1, &ch, 1);
    }
  }

  for (i = 0; i < strlen(temp_1); i++)
  {
    if (temp_1[i] == ' ')
    {
      name_position++;
    }
    else if (name_position == 1)
    {
      ch = temp_1[i];
      strncat(first_name, &ch, 1);
    }
    else if (name_position == 2)
    {
      ch = temp_1[i];
      strncat(last_name, &ch, 1);
    }
  }

  bool_state = false;

  for (i = 1; i < strlen(age); i++)
  {
    if (age[i] >= '0' && age[i] <= '9')
    {
      bool_state = true;
    }
    if (bool_state)
    {
      ch = age[i];
      strncat(temp_2, &ch, 1);
    }
  }
  int x = 2019 - atoi(temp_2);

  bool_state = false;

  for (i = 1; i < strlen(nationality); i++)
  {
    if (nationality[i] >= 'A' && nationality[i] <= 'Z')
    {
      bool_state = true;
    }
    if (bool_state)
    {
      ch = nationality[i];
      strncat(temp_3, &ch, 1);
    }
  }

  char nationality_first = temp_3[0];

  printf("Name : %s\n", first_name);
  printf("Age :  %d\n", x);
  printf("Nationality : %s\n", temp_3);
  printf("Mail: %s_%d%c@gmail.com\n", last_name, x, nationality_first);

  return 0;
}

