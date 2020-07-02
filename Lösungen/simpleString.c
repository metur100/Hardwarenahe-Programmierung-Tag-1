#include "simpleString.h"

int my_strlen(char *string){
    int i = 0;
    while (string[i] != '\0'){
        i++;
    }
    return i;
}

int is_string(char *string, int len){
    for(int i=0; i < len; i++){
        if(string[i] == '\0'){
            return 1;
        }
    }
    return 0;
}
