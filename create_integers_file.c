#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    if (argc != 4)
    {
        puts("It requires three parameters");
        return 0;
    }

    FILE *output_stream = fopen(argv[1], "w");
    if (output_stream == NULL)
    {
        perror(argv[1]);
        return 1;
    }

    int begin, end;
    sscanf(argv[2], "%d", &begin);
    sscanf(argv[3], "%d", &end);
    for (int i = begin; i <= end; i++)
    {
        fprintf(output_stream, "%d\n", i);
    }

    // fclose will flush data to file, best to close file ASAP
    // optional here as fclose occurs automatically on exit
    fclose(output_stream);

    return 0;
}