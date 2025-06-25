#include<iostream>
#ifndef TEXT_UTILITY_H
#define TEXT_UTILITY_H
int wordCount(const char* str);
int charCount(const char* str);
void countVowelsAndConsonants(const char* str, int& vowels, int& consonants);
void reverseString(char* str);
bool palindrome(const char* str);
void convert_to_upper(char* str);
void convert_to_lower(char* str);
int substringcount(const char* str,const char* substr);
#endif
