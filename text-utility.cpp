#include "text_utility.h"
#include <cctype>   // for isalpha, isspace, tolower
#include <cstring>  // for strlen

// Count words in the string (words separated by whitespace)
int wordCount(const char* str) {
    if (!str) return 0;
    int count = 0;
    bool inWord = false;
    while (*str) {
        if (isspace(static_cast<unsigned char>(*str))) {
            inWord = false;
        } else if (!inWord) {
            inWord = true;
            count++;
        }
        str++;
    }
    return count;
}

// Count characters excluding null terminator
int charCount(const char* str) {
    if (!str) return 0;
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

// Count vowels and consonants in the string
void countVowelsAndConsonants(const char* str, int& vowels, int& consonants) {
    vowels = 0;
    consonants = 0;
    if (!str) return;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (isalpha(static_cast<unsigned char>(ch))) {
            char lower = tolower(static_cast<unsigned char>(ch));
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
}

// Reverse the string in-place
void reverseString(char* str) {
    if (!str) return;
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}

