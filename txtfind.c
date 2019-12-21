//
// Created by shoval on 16.12.2019.
//
# include "string.h"
#include "stdio.h"
#include "txtfind.h"

/**
 * returns 1 if s2 is substring of s1 and 0 otherwise
 * @param s1 the original string. s2 the string to equal
 * @return
 */
int substring(char *s1 , char *s2){
    char *ans = strstr(s1 , s2);
    if (ans){
        return 1;
    }
    return 0;
}


/**
 * length of string
 * @param s the string
 * @return number of characters in the string
 */

int Length(char *s){
    int count = 0;
    while (*(s+count) != '\0'){
        count++;
    }
    return count;
}
int similar(char *original_String, char *word) {
    if (Length(original_String) < Length(word))
        return 0;

    while (*original_String != '\0' && *word != '\0') {
        if (*original_String != *word)
            original_String++;
        else {
            word++;
            original_String++;
        }
    }
}


/**
 * The function will print all the lines that the string word preform on them
 * */
void print_lines(char *word){
    char text[LINE];
    while (scanf("%[^\n]%*c", text) != EOF)
        if (substring(text, word))
            printf("%s\n", text);
}

/**
 * The function will print the similar words of the string word
 */
void print_similar_words(char *keyWord) {
    char text[LINE];
    while (scanf("%s", text) != EOF) {
        if (similar(text, keyWord) || substring(text, keyWord))
            printf("%s\n", text);
    }
}