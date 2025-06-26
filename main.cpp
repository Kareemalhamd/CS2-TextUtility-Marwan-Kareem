#include <cstring> 
#include <iostream>
#include "text-utility.h"
using namespace std;

int main() {
    char test1[] = "Hello World!";
    char test2[] = "  This is a Test 123!  ";
    char test3[] = "";
    char test4[] = "AEIOUaeiou and yY";
    char test5[] = "Madam";  
    char test6[] = "!@#$%^&*()";
    char test7[] = "abababab";
   
    char* tests[] = {test1, test2, test3, test4, test5, test6, test7};
    int numTests = sizeof(tests) / sizeof(tests[0]);

    cout << boolalpha;  

    for (int i = 0; i < numTests; i++) {
        char* current = tests[i];
        char temp[100];  
        strcpy(temp, current);

        cout << "Test string: \"" << current << "\"\n";

        // Word Count
        int wCount = wordCount(temp);
        cout << "Word Count: " << wCount << "\n";

        // Character Count
        int cCount = charCount(temp);
        cout << "Character Count (excluding null): " << cCount << "\n";

        // Vowel and Consonant Count
        int vowels = 0, consonants = 0;
        countVowelsAndConsonants(temp, vowels, consonants);
        cout << "Vowels: " << vowels << ", Consonants: " << consonants << "\n";

        // Palindrome Check
        cout << "Is \"" << temp << "\" a palindrome? " << palindrome(temp) << "\n";

        // Reverse
        reverseString(temp);
        cout << "Reversed: " << temp << "\n";

        // Convert to uppercase
        convert_to_upper(temp);
        cout << "Uppercase: " << temp << "\n";

        // Convert to lowercase
        convert_to_lower(temp);
        cout << "Lowercase: " << temp << "\n";

        // Substring Count
        const char* substr = "ab";
        int subCount = substringcount(temp, substr);
        cout << "Substring count for \"" << substr << "\": " << subCount << "\n";

        cout << "----------------------------------------\n\n";
    }

    return 0;
}

