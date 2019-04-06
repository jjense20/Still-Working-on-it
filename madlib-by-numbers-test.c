#include <assert.h>
#include <string.h>

#include "madlib-by-numbers.h"

int main() {
  char* words[3] = {"oof", "testing!", "yuck.."};
  char secondString[] = "000111222333";
  char* secondResult = madlib_by_numbers(secondString, 3, words);
  // assert(strcmp(secondResult, oofoofooftesting!testing!testing!yuck..yuck..yuck..333) == 0)
  return 0;
}
