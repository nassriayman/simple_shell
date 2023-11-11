#include "header_of_funct.h"

/**
 * 
 * 
 * 
 * 
*/

char *_retrieve_setting(char *value_extractede)
{
    int iterator;
    char *temporary, *value_extracted, *environmentment_data, *key_gen;
    for(iterator = 0; environment[iterator]; iterator++)
    {
        temporary = _duplicate_phrase(environment[iterator]);
        key_gen = strtok(temporary, "=");
        if (_contrast_phrases(key_gen, value_extractede) == 0)
        {
            value_extracted = strtok(NULL, "\\n"); 
            environmentment_data = _duplicate_phrase(value_extracted);   /*declaring the copy of the value extracted before the memory gets free*/
            free(temporary);
            return (environmentment_data);
        }
        free(temporary), temporary = NULL;
    }
    return (NULL);
}

