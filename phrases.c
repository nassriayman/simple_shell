#include "header_of_funct.h"

/**
* _duplicate_phrase - duplicates a string
* @str: the string to duplicate
* Return: pointer to the duplicated string
*/

char *_duplicate_phrase(const char *str)
{
int length = 0;
char *exit;

if (str == NULL)
return (NULL);
while (*str++)
length++;
exit = malloc(sizeof(char) * (length + 1));
if (!exit)
return (NULL);
for (length++; length--;)
 exit[length] = *--str;
return (exit);
}
 

/**
* _contrast_phrases - comparison two string
* @stri1: string one
* @stri2: string two
* Return: negative if line1 < line2, positive if line1 > line2, zero if line1 == line2
 */
int _contrast_phrases(char *line1, char *line2)
 {
while (*line1 && *line2)
{
if (*line1 != *line2)
return (*line1 - *line2);
line1++;
line2++;
}
if (*line1 == *line2)
return (0);
else
return (*line1 < *line2 ? -1 : 1);
}



  
/**
*_measure_extent - string lenght
*@s:string to get lenght
*Return:
*/




char *_replicate_target(char *desti, char *srcs)
{
int itera = 0;
if (desti == srcs || srcs == 0)
return (desti);
while (srcs[itera])
{
desti[itera] = srcs[itera];
itera++;
}
desti[itera] = 0;
return (desti);
}



int _measure_extent(char *s)
{
int iterat = 0;

if (!s)
return (0);
while (*s++)
iterat++;
return (iterat);
}
  
/**
* _join_target - concatenates two strings
* @desti: the destination buffer
* @srcs: the source buffer
* Return: pointer to destination buffer
*/
char *_join_target(char *desti, char *srcs)
 {
 char *retu = desti;
while (*desti)
desti++;
while (*srcs)
*desti++ = *srcs++;
*desti = *srcs;
return (retu);
 }
 


/**
 *_replicate_target - cp string
 *@desti: 
 *@srcs:
 * Return : 
*/
