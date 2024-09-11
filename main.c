#include <vector.h>

#define MAX_DIGITS 50

int main(void) {
  vector_t *v = newVector(10);
  for (int i = 0; i < MAX_DIGITS; i++) {
    vector_append(v, i);
  }
  printVector(v);
  return 0;
}