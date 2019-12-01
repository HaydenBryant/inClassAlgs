#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Usage: ./recover image\n");
        return 1;
    }

    FILE *file = fopen(argv[1], "r");

    if(file == null)
    {
        fprintf(stderr, "%s does not exist.\n", infile);
        return 2;
    }

    char *infile = argv[1];

    unsigned char buffer[512];


}
