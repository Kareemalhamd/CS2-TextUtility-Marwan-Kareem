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
    }

        cout << "Test string: \"" << current << "\"\n";

        // Word Count
        int wCount = wordCount(current);
        cout << "Word Count: " << wCount << "\n";

        // Character Count
        int cCount = charCount(current);
        cout << "Character Count (excluding null): " << cCount << "\n";

        // Vowel and Consonant Count
        int vowels = 0, consonants = 0;
        countVowelsAndConsonants(current, vowels, consonants);
        cout << "Vowels: " << vowels << ", Consonants: " << consonants << "\n";

        // Palindrome Check
        cout << "Is \"" << current << "\" a palindrome? " << palindrome(current) << "\n";

        // Convert to uppercase
        convert_to_upper(current);
        cout << "Uppercase: " << current << "\n";

        // Convert to lowercase
        convert_to_lower(current);
        cout << "Lowercase: " << current << "\n";

        // Substring Count
        const char* substr = "ab";
        int subCount = substringcount(current, substr);
        cout << "Substring count for \"" << substr << "\": " << subCount << "\n";

            // Reverse
        reverseString(current);
        cout << "Reversed: " << current << "\n";


        cout << "----------------------------------------\n\n";
    }

    return 0;
}

