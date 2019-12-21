//
// Created by shoval on 17.12.2019.
//
#include "stdio.h"
#include "txtfind.h"

int main() {
    char first_line[LINE] , word[WORD];
    char letter;
    char *first_line_ptr = first_line;
    char *word_ptr = word;
    scanf("%[^\n]s", first_line);

    while (*first_line_ptr != ' ') {
        *(word_ptr++) = *(first_line_ptr++);
    }
    letter = *(++first_line_ptr);
    *word_ptr = '\0';

    scanf("%s", first_line);
    if (letter == 'a')
        print_lines(word);
    else
        print_similar_words(word);
}
