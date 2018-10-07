#include <stdio.h>

struct FirstWord {
    int length;
    char *word;
};


struct FirstWord first_word(char input_string[]) {
    char a;
    int i = 0;
    do {
        a = input_string[i];
        i++;
    } while (a != '\0' && a != ' ');

    char *out = malloc(i * sizeof(char));


    for (int j = 0; j < i - 1; ++j) {
        out[j] = input_string[j];

    }

    struct FirstWord word = {i - 1, out};


    return word;
}


int first_word2(char *input_string, char **output_word) {
    char a;
    int i = 0;
    do {
        a = input_string[i];
        i++;
    } while (a != '\0' && a != ' ');

    char *out = malloc(i * sizeof(char));

    for (int j = 0; j < i - 1; ++j) {
        out[j] = input_string[j];

    }
    *output_word = out;
    return i - 1;
}

int main() {
    char input[] = "lorem ipsum";
    struct FirstWord word = first_word(input);
    printf("The first word of \"%s\" is \"%s\" and it's length is %d \n", input, word.word, word.length);

    char *output;
    int length = first_word2(input, &output);
    printf("The first word of \"%s\" is \"%s\" and it's length is %d", input, output, length);







    return 0;
}