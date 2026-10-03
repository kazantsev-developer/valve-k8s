#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main() {
  // память под буфер
  char* buffer = (char*)malloc(50 * sizeof(char));
  if (buffer == NULL) {
    return 1;
  }

  strcpy(buffer, "Valve Agent Sandbox: Initialized\n");

  write(1, buffer, strlen(buffer));

  free(buffer);

  return 0;
}
