#include <stdio.h>
#include <string.h>
#include <time.h>

int main(int argc, char *argv[])
{
if (argc != 2) {
printf("Usage: %s <username>\n", argv[0]);
return 1;
}

int seed = 0;
for (int i = 0; i < strlen(argv[1]); i++) {
seed += argv[1][i];
}

srand(seed);
int key = rand() % 0xFF;
printf("%d\n", key);

return 0;
}
