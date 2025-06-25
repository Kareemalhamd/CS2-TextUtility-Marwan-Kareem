#include <iostream>
#include "text_utility.h"

int main() {
    // Test cases: using char arrays (modifiable for reverse)
    char test1[] = "Hello World!";
    char test2[] = "  This is a Test 123!  ";
    char test3[] = "";
    char test4[] = "AEIOUaeiou and yY";
    char test5[] = "Madam";  // palindrome example (not checked here)
    char test6[] = "!@#$%^&*()";
    char test7[] = "C++ Programming";

    char* tests[] = {test1, test2, test3, test4, test5, test6, test7};
    int numTests = sizeof(tests) / sizeof(tests[0]);

    for (int i = 0; i < numTests; i++) {
        char* current = tests[i];

        std::cout << "Test string: \"" << current << "\"\n";

        // Word Count
        int wCount = wordCount(current);
        std::cout << "Word Count: " << wCount << "\n";

        // Character Count
        int cCount = charCount(current);
        std::cout << "Character Count (excluding null): " << cCount << "\n";

        // Vowel and Consonant Count
        int vowels = 0, consonants = 0;
        countVowelsAndConsonants(current, vowels, consonants);
        std::cout << "Vowels: " << vowels << ", Consonants: " << consonants << "\n";

        // Reverse string in-place
        reverseString(current);
        std::cout << "Reversed string: \"" << current << "\"\n";

        std::cout << "----------------------------------------\n";
    }

    return 0;
}
