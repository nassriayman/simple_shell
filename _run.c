#include "header_of_funct.h"

/**
 * *
 * 
 * 
 * 
 * 
*/




int _run(char **cd, char **parameters, int indx)
{
    char *full_cd;
    pid_t son;  
    int stus;

    full_cd = _retrieve_route(cd[0]);
    if (!full_cd || !cd[0])
    {
        print_mistake(parameters[0], cd[0], indx);
        array_freedom(cd);
        return 127;
    }

    son = fork();
    if (son == -1)
    {
        print_mistake("fork");
        exit(EXIT_FAILURE); 
    }

    if (son == 0)
    {
        if (execve(full_cd, cd, environ) == -1)
        {
            print_mistake("execve");
            exit(EXIT_FAILURE); 
        }
    }
    else
    {
        waitpid(son, &stus, 0);
        array_freedom(cd);
        free(full_cd);
    }

    return WEXITSTATUS(stus);
}

