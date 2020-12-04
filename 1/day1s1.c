/*
 * AoC 1.1 https://adventofcode.com/2020/day/1
 */

#define _GNU_SOURCE

#define LUT_SZ 2020

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fp;
    char *line = NULL;
    size_t len = 0;
    ssize_t bts;
    long int n = 0;
    long int nro = 0;
    int lut[LUT_SZ+1] = {0};

    fp = fopen("input.txt", "r");
    if (fp == NULL) {
        exit(EXIT_FAILURE);
    }

    while ((bts = getline(&line, &len, fp)) != -1) {
        n++;
        nro = strtol(line, (char**)NULL, 10);
        if (0 > nro || nro > LUT_SZ) {
            exit(EXIT_FAILURE);
        }
        if (lut[LUT_SZ-nro] == 1) {
            printf("iter %li> found %li+%li == 2020, result %li\n",
                    n, nro, LUT_SZ-nro, nro*(LUT_SZ-nro));
            break;
        }
        lut[nro] = 1;
    }

    fclose(fp);
    if (line) free(line);
    exit(EXIT_SUCCESS);
}
