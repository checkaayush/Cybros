// Instructions: 
// Compile: gcc main.c validations.c utilities.c
// Execute: ./a.out

#include <stdio.h>
#include "validations.h"

void insertName()
{
  char name[30];
  printf("Insert your first name (Max 30 characters): ");
  scanf("%s", name);
  int isValid = validateName(name);
  if (isValid)
    printf("Hi %s! Nice to meet you!\n\n", name);
  else
    insertName(); 
}

// Similarly, 
// void insertDOB() {}
// void insertPhone() {}
// void insertEmail() {}

int main()
{
  char name[30], dob[11], email[30], phone[11];

  printf("Registration Portal:\n\n");

  insertName();
  // insertDOB();
  // insertEmail(
  // insertPhone();
  printf("Registration Successful.\n\n");

  return 0;
}