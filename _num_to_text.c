#include "header_of_funct.h"

/**
 * 
 * 
 * 
 * 
 * 
*/

void print_mistake(char *nom, char *cd, int indx)
{

char *indx, mssg[] = ": not found\n";

index = _num_to_text(indx);

write(STDERR_FILENO, nom, _measure_extent(nom));
write(STDERR_FILENO, ": ", 2);
write(STDERR_FILENO, indx, _measure_extent(indx));
write(STDERR_FILENO, ": ", 2);
write(STDERR_FILENO, cd, _measure_extent(cd));
write(STDERR_FILENO, mssg, _measure_extent(mssg));

free(indx);
}


 

/**
* array_freedom - free array
 * 
 * 
 */

void array_freedom(char **arry)
 {
int j ;
 if (!arry)
return;
for(j = 0; arr[j]; j++)
 {
free(arry[j]), arry[j] =  NULL;
}
free(arry), arry = NULL;
 
}


}


/**
 * 
 * 
 * 
 * 
*/

void swap_phrase(char *strg, int lent)
{
    char tmp;
    int start = 0;
    int end = lent - 1;

  while (start < end)  
  {
    tmp = strg[start];
    strg[start] = strg[end];
    strg[end] = tmp;
    start++;
    end--;
  }


char *_num_to_text(int n)
{
    char buffer[20];
   int i = 0;

    if (n == 0)
    buffer[i++] = '0';
    else
    {
        while (n > 0)
        {
            buffer[i++] = (n % 10) + '0';
            n /= 10;
        }
    }
    
    buffer[i] = '\0';
    reverse_string(buffer, i);

    return (_strdup(buffer));
}
