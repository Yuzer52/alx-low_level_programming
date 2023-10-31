#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int is_space(char c) {
    return c == ' '  c == '\t'  c == '\n' || c == '\0';
}

int count_words(char *str) {
    int count = 0;
    int in_word = 0;

    while (*str) {
        if (is_space(*str)) {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            count++;
        }
        str++;
    }

    return count;
}

char *strndup(const char *str, size_t n) {
    char *copy = (char *)malloc(n + 1);
    if (copy != NULL) {
        strncpy(copy, str, n);
        copy[n] = '\0';
    }
    return copy;
}

char **strtow(char *str) {
    if (str == NULL || *str == '\0') {
        return NULL;
    }

    int num_words = count_words(str);

    if (num_words == 0) {
        return NULL;
    }

    char result = (char )malloc((num_words + 1) * sizeof(char *));
    if (result == NULL) {
        return NULL;
    }

    int word_count = 0;
    int in_word = 0;
    char *start = NULL;

    while (*str) {
        if (!is_space(*str)) {
            if (!in_word) {
                start = str;
                in_word = 1;
            }
        } else if (in_word) {
            int length = str - start;
            result[word_count] = strndup(start, length);
            if (result[word_count] == NULL) {
                for (int i = 0; i < word_count; i++) {
                    free(result[i]);
                }
                free(result);
                return NULL;
            }
            word_count++;
            in_word = 0;
        }
        str++;
    }

    if (in_word) {
        int length = str - start;
        result[word_count] = strndup(start, length);
        if (result[word_count] == NULL) {
            for (int i = 0; i <= word_count; i++) {
                free(result[i]);
            }
            free(result);
            return NULL;
        }
        word_count++;
    }

    result[word_count] = NULL;

    return result;
}

int main() {
    char *str = "Hello World! This is a test.";
    char **words = strtow(str);

    if (words) {
        for (int i = 0; words[i] != NULL; i++) {
            printf("%s\n", words[i]);
            free(words[i]);
        }
        free(words);
    } else {
        printf("Failed to split the string into words.\n");
    }

    return 0;
}
