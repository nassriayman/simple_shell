#include "header_of_funct.h"
 
/**
*red_row -
*Return : 
*/




char *red_row(void)
{
char *ln = NULL ; /*line*/
ssize_t nuv;/*new line*/
size_t lenght = 0;/*lenght*/

 

if (isatty(STDIN_FILENO)) 
 write(STDOUT_FILENO, "$ ", 2);  
nuv = getline(&ln, &lenght, stdin );
if (nuv == -1)
 {
free(ln);
return (NULL);
}
  return (ln);
}

/**
 * 
 * 
 * 
 * 
 * 
 * 
 * 
*/

char **tokeniser(char *ln) 
{
char **cd = NULL;
char *temp = NULL;
char *tokn = NULL;
int counter = 0;
int iterat = 0;

if (!ln)
return (NULL);

temp = strdup(ln);
tokn = strtok(temp, DELIMTR);

while (tokn) {
counter++;
 tokn = strtok(NULL, DELIMTR);
}

 free(temp), temp = NULL;

if (counter == 0)
return (NULL);

cd = malloc(sizeof(char *) * (counter + 1));
if (!cd) {
free(ln);
return (NULL);
}
tokn = strtok(ln, DELIMTR);

while (tokn) {
cd[iterat] = strdup(tokn);
tokn = strtok(NULL, DELIMTR);
iterat++;
}
free(ln);
cd[iterat] = (NULL);
return cd;
}

