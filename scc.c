#include <stdio.h>
#include <stdlib.h>
#include "arrlib.h"
int main(int argc, char **argv)
{
    const DATAFRAME_METHOD df = Dataframe;
    FILE *infile;
    if (argv[1]==NULL) {
        printf("please input file name\n");
        exit(1);
    }
    infile = fopen(argv[1], "r");
    if (!infile) {
        printf("can't open file\n");
        exit(1);
    }
    fclose(infile);
    return 0;
}

