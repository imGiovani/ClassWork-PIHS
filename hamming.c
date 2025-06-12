#include <stdio.h>
#include "hamming.h"
#include <string.h>

int hamming(const char* string_one, const char* string_two){
    int h_distance = 0;
    size_t len_one = strlen(string_one);
    size_t len_two = strlen(string_two);

    if(len_one != len_two){
        return -1;
    }
    
    for(size_t i = 0; i < len_one; i++){
        if(string_one[i] != string_two[i]) {
            h_distance ++;
        }
    }
    
    return h_distance;
}