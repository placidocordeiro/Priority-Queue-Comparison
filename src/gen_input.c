#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>
#include <string.h>

int main() {
    int min_value = 5;
    int max_value = 1100;
    int n = 1500;

    int *random_ints = (int *)malloc(n * sizeof(int));
    if (random_ints == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    srand(time(0));

    for (int i = 0; i < n; ++i) {
        random_ints[i] = min_value + rand() % (max_value - min_value + 1);
    }

    // Create the directory if it doesn't exist
    const char* dir = "../data";
    if (mkdir(dir, 0777) == -1) {
        if (errno != EEXIST) {
            fprintf(stderr, "Error creating directory: %s\n", strerror(errno));
            free(random_ints);
            return 1;
        }
    }

    FILE *file = fopen("../data/input.txt", "w");
    if (file != NULL) {
        for (int i = 0; i < n; ++i) {
            fprintf(file, "%d\n", random_ints[i]);
        }
        fclose(file);
    } else {
        fprintf(stderr, "Unable to open file\n");
    }

    free(random_ints);
    return 0;
}