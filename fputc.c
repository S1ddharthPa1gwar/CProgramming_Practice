#include <stdio.h>

int main()
{
    FILE *ptr;
    //char c= fgetc(ptr);
    ptr = fopen("Generatedfile.txt", "w");
    fputc('S',ptr);
    fputc('i',ptr);
    fputc('d',ptr);
    fputc('d',ptr);
    fputc('h',ptr);
    fputc(' ',ptr);
    fputc('R',ptr);
    fputc('t',ptr);
    fputc('h',ptr);
    fputc(' ',ptr);
    fputc('P',ptr);
    fclose(ptr);


    return 0;
}