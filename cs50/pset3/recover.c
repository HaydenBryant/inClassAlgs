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
    
    char *infile = argv[1];

    if(file == NULL)
    {
        sprintf(stderr, "%s does not exist.\n", infile);
        return 2;
    }

    unsigned char buffer[512];

    int count = 0;

    char filename[8];
    FILE *image = NULL;

    bool jpgFound = false;
}
