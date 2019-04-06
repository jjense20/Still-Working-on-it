#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

char* madlib_by_numbers(char* template, int word_count, char** words) {
  int template_length = strlen(template);
  int sum_of_word_lengths = 0;

  for (int i = 0; i < word_count; i++) {
    sum_of_word_lengths = sum_of_word_lengths + strlen(words[i]);
  }

  char* madlib = malloc(sum_of_word_lengths*template_length);
  int madlib_position = 0;
  for (int i = 0; i < strlen(template); i++) {
    char* num = malloc(2);
    if (isdigit(template[i]) && (template[i] < word_count)) {
      char* holder = malloc(strlen(template));
      sprintf(num, "%c", template[i]);
      strcat(holder, words[atoi(num)]);
      printf("%s\n", holder);
      strcat(madlib, holder);
      madlib_position = madlib_position + strlen(holder);
      free(holder);
      free(num);
    } else {
      madlib[madlib_position] = template[i];
      madlib_position++;
    }
  } return madlib;
}
