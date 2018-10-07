#include <stdio.h>
#include <memory.h>
#include <stdlib.h>

struct FirstWord {
    int length;
    char* word;
};


struct FirstWord first_word(char input_string[]) {
    char a;
    int i = 0;
    do {
        a = input_string[i];
        i++;
    } while (a != '\0' && a != ' ');

    char *out = malloc(i* sizeof(char));


    for (int j = 0; j < i - 1; ++j) {
        out[j] = input_string[j];

    }

    struct FirstWord word = {i-1, out};


    return word;
}


int main() {
    char input[] = "lorem ipsum";
    struct FirstWord word = first_word(input);
    printf("The first word of \"%s\" is \"%s\" and it's length is %d", input, word.word, word.length);





    return 0;
}