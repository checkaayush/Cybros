#include <stdio.h>
#include <string.h>
#include "validations.h"
#include "utilities.h"

// Returns 1 if name is valid; 0 otherwise
int validateName(char name[])
{
  int isLengthValid = checkLength(name, 3, 30);
  if (!isLengthValid)
  {
    printf("\nInvalid Length.\n\n");
    return 0;
  }

  char correctType[5] = "char";
  int isTypeValid = checkType(name, correctType);
  if (!isTypeValid)
  {
    printf("\nInvalid type.\n\n");
    return 0;
  }

  // Control reaching here means both length and type
  // of input are valid. Add more conditions above, if necessary
  return 1;
}

// Similarly, 
// int validateDate(char[]);

// int validateEmail(char[]);

// int validatePhone(char[]);