//
// Created by shoval on 17.12.2019.
//
#include "stdio.h"
#include "txtfind.h"

int main() {
    char firstLine[LINE];
    char keyWord[WORD];
    char chooseLetter;
    char *firstLinePTR = firstLine;
    char *keyWordPTR = keyWord;
    scanf("%[^\n]s", firstLine);

    while (*firstLinePTR != ' ') *(keyWordPTR++) = *(firstLinePTR++);
    chooseLetter = *(++firstLinePTR);
    *keyWordPTR = '\0';

    scanf("%s", firstLine);
    if (chooseLetter == 'a') print_lines(keyWord);
    else print_similar_words(keyWord);
}
