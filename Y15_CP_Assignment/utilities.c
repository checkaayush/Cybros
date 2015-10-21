// Function definitions used to validate user input.

#include <string.h>
#include "utilities.h"

// Return 1 if length of input is valid; 0 otherwise
int checkLength(char input[], int minLength, int maxLength)
{
  if (strlen(input) >= minLength && strlen(input) <= maxLength)
    return 1;
  else
    return 0;
}

// Return 1 if input is in range; 0 otherwise
int checkRange(int input, int min, int max)
{
  if (input >= min && input <= max)
    return 1;
  else
    return 0;
}

// correctType can be 'int', 'char', etc.
int checkType(char input[], char correctType[])
{
  int i = 0;
  if (strcmp(correctType, "char") == 0)
  {
    while(input[i] != '\0')
    {
      // ASCII values of 'A', 'Z', 'a' and 'z'
      if ((input[i] >= 65 && input[i] <= 90) || 
          (input[i] >= 97 && input[i] <= 122))
      {
        i++;
        continue;
      }
      else
        return 0;
    }

    // Valid type
    return 1;
  }

  // Else, check similarly for 'int'
}

// Add more functions, if required.