#include <stdio.h>
#include <ctype.h> 
#include"headerPT.h"


int main() {
    char str1[100] = "Hello World!";
    char str2[100] = "Programming IS Fun";
    char str3[100] = "Reverse Me";
    char str4[100] = "I AM WORKING";
    char strings[5][100] = {"Dog", "cat", "boar", "monkey", "elephant"};

    printf("Original str1: %s\n", str1);
    to_uppercase(str1);
    printf("Uppercase: %s\n\n", str1);

    printf("Original str2: %s\n", str2);
    to_lowercase(str2);
    printf("Lowercase: %s\n\n", str2);

    printf("String for vowel count: %s\n", str2);
    int vowels = count_vowels(str2);
    printf("Vowel count: %d\n\n", vowels);

    printf("Original str3: %s\n", str3);
    reverse_string(str3);
    printf("Reversed: %s\n\n", str3);

    printf("Original array of strings:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", strings[i]);
    }

    sort_strings(strings, 5);

    printf("\nSorted array of strings:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", strings[i]);
    }

    printf("\nOriginal sentence: %s\n", str4);
    reverse_words(str4);
    printf("Words reversed: %s\n", str4);

    return 0;
}
