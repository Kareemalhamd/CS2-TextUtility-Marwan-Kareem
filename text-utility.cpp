#include "text-utility.h"
#include <cctype> 
#include <cstring> 
using namespace std;

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


int charCount(const char* str) {
    if (!str) return 0;
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}


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
bool palindrome(const char* str){
if(!str) return false;
int length = 0;
while(str[length]!='\0') length++;
for(int i=0;i<length/2;i++){
if(str[i]!=str[length-1-i]) return false;
}
return true;
}
void convert_to_upper(char* str){
if(!str) return;
int i =0;
while(str[i]!='\0'){
str[i] = toupper(str[i]);
i++;
}
}
void convert_to_lower(char* str){
if(!str) return;
int i =0;
while(str[i]!='\0'){
str[i] = tolower(str[i]);
i++;
}
}
int substringcount(const char* str,const char* substr){
if(!str || !substr) return 0;
int len_str = strlen(str);
int len_sub = strlen(substr);
if (len_str == 0 || len_sub == 0 || len_sub > len_str) return 0;
int count=0;
 for (int i = 0; i <= len_str - len_sub; i++) {
        int j = 0;
        while (j < len_sub && str[i + j] == substr[j]) {
            j++;
        }
        if (j == len_sub) {
            count++;
        }
}
return count;
}
