#include "header_of_funct.h"

/**
 * 
 * 
 * 
 * 
*/



int is_builtin(char *cd)
{
    char *builts[] = {
        "exit", "env", "setenv", "cd", NULL
    };

    int i;
    for (i = 0; builts[i]; i++)
    {
        if(_contrast_phrases(cd, builts[i]) == 0)
        return (1);
    }
    return (0);
}




/**
 * 
 * 
 * 
 * 
 * 
*/


void close_shell(char **cd, int *stus)
{
    array_freedom(cd);
    exit(*stus);
}


/**
 * 
 * 
 * 
 * 
 * 
*/

void print_ev(char **cd, int *stus)
{
    int i ;
    for (i = 0; environ[i]; i++)
    {
        write(STDOUT_FILENO, environ[i], _measure_extent(environ[i]));
        write(STDOUT_FILENO, "\n", 1);
    }
    array_freedom(cd);
    (*stus) = 0;
}


void build_in(char **cd, char **parameters, int *stus, int indx)

{
(void) parameters;
(void) indx;

    if (_contrast_phrases(cd[0], "exit") == 0)
    close_shell(cd, stus);

    else if (_contrast_phrases(cd[0], "env") == 0)
    print_ev(cd, stus);





}

/**
 * 
 * 
 * 
 * 
 * 
 * 
*/
