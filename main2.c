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

int resposta1[4];
int resposta2[5];
int resposta3[6];
int resposta4[6];
int resposta5[8];
int resposta6[8];
int resposta7[11];
int resposta8[20];

void show_graphs(char *graph_path);



int main()
{
    char getResposta[30];
    int i;


    show_graphs("intro.text");
    populate_graphs(1);
    populate_graphs(2);
    populate_graphs(3);
    populate_graphs(4);
    populate_graphs(5);
    populate_graphs(6);
    populate_graphs(7);
    populate_graphs(8);


    // testa se as matrizes popularam corretamente

    /*   show_populate(1);
        show_populate(2);
        show_populate(3);
        show_populate(4);
        show_populate(5);
        show_populate(6);
        show_populate(7);
        show_populate(8);
    */

    printf("\nteste\n");
    scanf("%s", getResposta);
    parseTheAnswer(getResposta,1);

    for(i=0; i<4;i++){
        printf("\n %d", resposta1[i]);
    }
    show_populate(1);
    checkAnswer(1);


}





//usada para printar a parte grafica
void show_graphs(char *graph_path)
{

    FILE *fPtr;

    char ch;
    fPtr = fopen(graph_path, "r");
    if (fPtr == NULL)
    {
        printf("Unable to open file.\n");
        exit(EXIT_FAILURE);
    }


    do
    {
        ch = fgetc(fPtr);


        putchar(ch);

    }
    while (ch != EOF);

    fclose(fPtr);
}

//usada para popular as matrizes com os dados dos txts
void populate_graphs(int graph_number)
{
    FILE *pFile;
    int i,j,k;

    switch(graph_number)
    {
    case 1:
        pFile = fopen("graph_1.text", "r");
        for ( i = 0; i < 4; i++)
        {
            for ( j = 0; j < 4; j++)
            {
                fscanf(pFile, "%d", &graph_1[i][j]);
            }
        }

        fclose(pFile);
        break;
    case 2:
        pFile = fopen("graph_2.text", "r");
        for ( i = 0; i < 5; i++)
        {
            for (j = 0; j < 5; j++)
            {
                fscanf(pFile, "%d", &graph_2[i][j]);
            }
        }

        fclose(pFile);
        break;
    case 3:
        pFile = fopen("graph_3.text", "r");
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 6; j++)
            {
                fscanf(pFile, "%d", &graph_3[i][j]);
            }
        }

        fclose(pFile);
        break;
    case 4:
        pFile = fopen("graph_4.text", "r");
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 6; j++)
            {
                fscanf(pFile, "%d", &graph_4[i][j]);
            }
        }

        fclose(pFile);
        break;
    case 5:
        pFile = fopen("graph_5.text", "r");
        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 8; j++)
            {
                fscanf(pFile, "%d", &graph_5[i][j]);
            }
        }

        fclose(pFile);
        break;
    case 6:
        pFile = fopen("graph_6.text", "r");
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                fscanf(pFile, "%d", &graph_6[i][j]);
            }
        }

        fclose(pFile);
        break;
    case 7:
        pFile = fopen("graph_7.text", "r");
        for (int i = 0; i < 11; i++)
        {
            for (int j = 0; j < 11; j++)
            {
                fscanf(pFile, "%d", &graph_7[i][j]);
            }
        }

        fclose(pFile);
        break;
    case 8:
        pFile = fopen("graph_8.text", "r");
        for (int i = 0; i < 20; i++)
        {
            for (int j = 0; j < 20; j++)
            {
                fscanf(pFile, "%d", &graph_8[i][j]);
            }
        }

        fclose(pFile);
        break;
    default:
        break;

    }

    printf("\nend of populate");
}
//funcao so pra ver se as matrizes popularam corretamente
void show_populate(int graph)
{
    int i,j;
    printf("\n Testing matrix%d ---", graph);
    printf("\n");
    switch(graph)
    {
    case 1:

        for ( i = 0; i < 4; i++)
        {
            for ( j = 0; j < 4; j++)
            {
                printf("%d", graph_1[i][j]);
            }
            printf("\n");
        }

        break;
    case 2:

        for ( i = 0; i < 5; i++)
        {
            for (j = 0; j < 5; j++)
            {
                printf("%d", graph_2[i][j]);
            }
            printf("\n");
        }


        break;
    case 3:

        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 6; j++)
            {
                printf("%d", graph_3[i][j]);
            }
            printf("\n");
        }

        break;
    case 4:

        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 6; j++)
            {
                printf("%d", graph_4[i][j]);
            }
            printf("\n");
        }


        break;
    case 5:

        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 8; j++)
            {
                printf("%d", graph_5[i][j]);
            }
            printf("\n");
        }


        break;
    case 6:

        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                printf("%d", graph_6[i][j]);
            }
            printf("\n");
        }


        break;
    case 7:

        for (int i = 0; i < 11; i++)
        {
            for (int j = 0; j < 11; j++)
            {
                printf("%d", graph_7[i][j]);
            }
            printf("\n");
        }


        break;
    case 8:
        for (int i = 0; i < 20; i++)
        {
            for (int j = 0; j < 20; j++)
            {
                printf("%d", graph_8[i][j]);
            }
            printf("\n");
        }


        break;

    }
}

//concatena a resposta removendo pontos, virgulas e espacos e adiciona
int parseTheAnswer(char *resposta, int phase)
{

    const char s[2] = "-,. ";
    char *token;
    int i=0;
    int countLength=0;

    switch(phase){
    case 1:
        token = strtok(resposta, s);
        i=0;
    while( token != NULL )
    {
        resposta1[i]=atoi(token);


        token = strtok(NULL, s);
        i++;
        countLength++;
    }

        break;
    case 2:
  token = strtok(resposta, s);
        i=0;
    while( token != NULL )
    {
        resposta2[i]=atoi(token);


        token = strtok(NULL, s);
        i++;
    }
        break;
    case 3:
  token = strtok(resposta, s);
        i=0;
    while( token != NULL )
    {
        resposta3[i]=atoi(token);


        token = strtok(NULL, s);
        i++;
    }
        break;
    case 4:
  token = strtok(resposta, s);
        i=0;
    while( token != NULL )
    {
        resposta4[i]=atoi(token);


        token = strtok(NULL, s);
        i++;
    }
        break;
    case 5:
  token = strtok(resposta, s);
        i=0;
    while( token != NULL )
    {
        resposta5[i]=atoi(token);


        token = strtok(NULL, s);
        i++;
    }
        break;
    case 6:
  token = strtok(resposta, s);
        i=0;
    while( token != NULL )
    {
        resposta6[i]=atoi(token);


        token = strtok(NULL, s);
        i++;
    }
        break;
    case 7:
  token = strtok(resposta, s);
        i=0;
    while( token != NULL )
    {
        resposta7[i]=atoi(token);


        token = strtok(NULL, s);
        i++;
    }
        break;
    case 8:
  token = strtok(resposta, s);
        i=0;
    while( token != NULL )
    {
        resposta8[i]=atoi(token);


        token = strtok(NULL, s);
        i++;
    }
        break;
    }

    return countLength;
    /* get the first token */



}


int checkAnswer(int phase){
    int i,j;

    switch(phase){
    case 1:
        for(i=0; i<=3;i++){
                printf("\n valor de i: %d", i);
                if(graph_1[resposta1[i]-1][resposta1[i+1]-1]==1){
                printf("\n.");
                printf("\nvalor de[%d][%d] : %d" ,resposta1[i]-1,resposta1[i+1]-1, graph_1[resposta1[i]-1][resposta1[i+1]-1]);
                }else{

                    printf("\nerrou");
                printf("\n valor de i: %d", i);
                    printf("\nvalor de resposta: %d",resposta1[i]-1);
                    printf("\nvalor de resposta+1: %d",resposta1[i+1]-1);
                    printf("\nvalor de[%d][%d] : %d" ,resposta1[i]-1,resposta1[i+1]-1, graph_1[resposta1[i]-1][resposta1[i+1]-1]);
                return 0;
                }
            // 1 3 4 5
        }

    break;
    case 2:

    break;
    case 3:

    break;
    case 4:

    break;
    case 5:

    break;
    case 6:

    break;
    case 7:

    break;
    case 8:

    break;

    }


}



