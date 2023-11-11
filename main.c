#include "header_of_funct.h"

/**
* main - 
* @ac: amount of argum
* @av: argums
* Return: return 0
*/

int main (int ac, char **parameters)
{
char *ln = NULL; /*line*/
int stus = 0, indx = 0;   /*status*/ /*indx*/

char **cd = NULL; /*cd*/
(void)ac;



while (1)
{
ln = red_row(); /*read line func*/
if (ln == NULL) /*Ctrl D to exit*/
{
if (isatty(STDIN_FILENO)) /*if standar input is a terminal */
write(STDOUT_FILENO, "\n", 1);
return (stus);
}

indx++;
cd = tokeniser(ln);
if (!cd)
continue;  /*display the prompt again if no cd submited*/



if (is_builtin(cd[0]))
build_in(cd, parameters, &stus, indx);
else
stus = _run(cd, parameters, indx);

}
}
