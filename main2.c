#include <stdio.h>
#include <stdlib.h>

int graph_1[4][4];
int graph_2[5][5];
int graph_3[6][6];
int graph_4[6][6];
int graph_5[8][8];
int graph_6[8][8];
int graph_7[11][11];
int graph_8[20][20];

int main()
{
    show_graphs("intro.text");
}

void show_graphs(char *graph_path)
{

    FILE *fPtr;

    char ch;

    /* 
     * Open file in r (read) mode. 
     * "data/file1.txt" is complete file path to read
     */
    fPtr = fopen(graph_path, "r");

    /* fopen() return NULL if last operation was unsuccessful */
    if (fPtr == NULL)
    {
        /* Unable to open file hence exit */
        printf("Unable to open file.\n");
        printf("Please check whether file exists and you have read privilege.\n");
        exit(EXIT_FAILURE);
    }

    /* File open success message */
    printf("File opened successfully. Reading file contents character by character. \n\n");

    do
    {
        /* Read single character from file */
        ch = fgetc(fPtr);

        /* Print character read on console */
        putchar(ch);

    } while (ch != EOF); /* Repeat this if last read character is not EOF */

    /* Done with this file, close file to release resource */
    fclose(fPtr);
}