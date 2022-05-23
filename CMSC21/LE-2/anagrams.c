#include <stdio.h>
#include <ctype.h> /* toupper, isalpha */
#include <stdlib.h>
#include <stdbool.h>


void scan_word(int occurences[26]);
bool is_anagram(int occurences1[26], int occurences2[26]);

int i;

int main(void) {

    int occurences1[26] = {0}, occurences2[26] = {0};

    printf("\nEnter first word: ");
    scan_word(occurences1);

    printf("\nEnter second word: ");
    scan_word(occurences2);

    if(is_anagram(occurences1, occurences2)){
        printf("\nThe words are anagrams");
        return 0;
    }
    else{
        printf("\nThe words are not anagram.");
        return 0;
    }
}

void scan_word(int occurences[26]){
    char c;

    while((c = getchar()) != '\n'){
        if(isalpha(c)){
            occurences[toupper(c) - 'A']++;
        }
    }
}

bool is_anagram(int occurences1[26], int occurences2[26]){

    for(i = 0; i < 26; i++){
        if(occurences1[i] != occurences2[i]){
            return false;
        }
        else
            return true;
    }
}

