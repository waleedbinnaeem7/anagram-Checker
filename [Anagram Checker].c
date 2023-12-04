#include <stdio.h>
#include <string.h>

int _anagrams(const char *s1, const char *s2) {
    if (strlen(s1) != strlen(s2)) {
        return 0; 
    }

    int l_count[26] = {0};

    for (int i = 0; s1[i] != '\0'; i++) {
        l_count[s1[i] - 'a']++;
    }

    for (int i = 0; s2[i] != '\0'; i++) {
        l_count[s2[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (l_count[i] != 0) {
            return 0;
        }
    }

    return 1; 
}

int main() {
    char s1[100], s2[100];

   
    printf("Input  string 1 ");
    scanf("%s", s1);

    printf("Input string 2 ");
    scanf("%s", s2);

    if (_anagrams(s1, s2)) {
        printf("%s and %s are anagrams.\n", s1, s2);
    } else {
        printf("%s and %s are not anagrams.\n", s1, s2);
    }

    return 0;
}
