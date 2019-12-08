#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./recover image\n");
        return 1;
    }

    FILE *file = fopen(argv[1], "r");

    char *infile = argv[1];

    if (file == NULL)
    {
        fprintf(stderr, "%s does not exist.\n", infile);
        return 2;
    }

    unsigned char buffer[512];

    int count = 0;

    char filename[8];
    FILE *image = NULL;

    bool jpgFound = false;

    while (fread(buffer, 512, 1, file))
    {
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {
            if (jpgFound == true)
            {
                fclose(image);
            }
            else
            {
                jpgFound = true;
            }

            sprintf(filename, "%03i.jpg", count);
            count ++;

            image = fopen(filename, "w");
        }

        if (jpgFound == true)
        {
            fwrite(buffer, 512, 1, image);
        }
    }

    fclose(file);
    fclose(image);
    return 0;
}
