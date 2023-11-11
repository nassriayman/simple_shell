#include "header_of_funct.h"

/**
 * 
 * 
 * 
 * 
 * 
 * 
*/

char *_retrieve_route(char *cd)
{
    char *pth_envm, *full_cd, *dir;
    int iterat;
    struct stat st;

for (iterat = 0; cd[iterat]; iterat++)
{
if (cd[iterat] == '/')
{
if (stat(cd, &st) == 0)
return (_duplicate_phrase(cd));
return (NULL);
}
}


pth_envm = _retrieve_setting("PATH");

if (!pth_envm)  /* case : return NULL if PTH unset*/
return (NULL);



dir = strtok(pth_envm, ":");
while (dir)
{
full_cd = malloc(_measure_extent(dir) + _measure_extent(cd) + 2);
if (full_cd)
{
_replicate_target(full_cd, dir);
_join_target(full_cd, "/");
_join_target(full_cd, cd);
if (stat(full_cd, &st) == 0)
{
free(pth_envm);
return (full_cd);
}
free(full_cd), full_cd = NULL;

dir = strtok(NULL, ":");
}

}

free(pth_envm);
return (NULL);
}





