/**























respostas rapidas para teste:
    - 1: 1,2,4,3,1
    - 2: 1,2,3,5,4,1
    - 3: 1,2,3,6,5,4,1
    - 4: 1,6,4,3,2,5,1
    - 5: 1,4,6,3,2,8,7,5,1
    - 6: 1,6,5,4,7,8,3,2,1
    - 7: 1,2,6,4,5,3,1
    - 9: 1,2,3,10,9,8,7,17,18,19,11,12,4,5,14,13,20,16,15,6,1
**/




#include <stdio.h>
#include <stdlib.h>



int graph_1[4][4];
int graph_2[5][5];
int graph_3[6][6];
int graph_4[6][6];
int graph_5[8][8];
int graph_6[8][8];
int graph_7[6][6];
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
void populate_graphs(int graph_number);
void show_populate(int graph);
int parseTheAnswer(char *resposta, int level);
int checkAnswer(int level);



int main()
{
    char getResposta[30];
    int i, checkLength;
    int End_of_level[9];


    show_graphs("inicio.text");
    getchar();
    ///system("clear");    //linux clear screen function
    system("CLS");         // windows clear screen function
    show_graphs("intro.text");
    getchar();
    ///system("clear");    //linux clear screen function
    system("CLS");         // windows clear screen function



    /// testa se as matrizes popularam corretamente

    /*   show_populate(1);
        show_populate(2);
        show_populate(3);
        show_populate(4);
        show_populate(5);
        show_populate(6);
        show_populate(7);
        show_populate(8);
    */
    ///-------------------- level 1 ---------------------------------------------
    do
    {
        checkLength=0;
        populate_graphs(1); //inicia a matriz do grafo
        memset(getResposta, '\0', sizeof(getResposta));
        show_graphs("graph1.txt"); //mostra o grafo
        printf("\nDtermine um caminho entre 1 e 4: ");
        scanf("%s", getResposta);
        checkLength=parseTheAnswer(getResposta,1);
        if(checkLength>=6)
        {
            printf("\nVoce informou mais cidades que o necessario! Tente novmante.\n");
        }
        else
        {
            End_of_level[1]=checkAnswer(1);
        }
        if(End_of_level[1]==1)
        {
            printf("\nParabens!! Voce acertou.\n");
        }
        else
        {
            printf("\n----------- ERROU! ---------------");
        }

    }
    while(End_of_level[1]==0);

    ///system("clear");    //linux clear screen function
    getchar();
    ///system("CLS");         // windows clear screen function

///.................................................................................

    ///-------------------- level 2 ---------------------------------------------
    do
    {
        checkLength=0;
        populate_graphs(2); //inicia a matriz do grafo
        memset(getResposta, '\0', sizeof(getResposta));
        show_graphs("graph2.txt"); //mostra o grafo
        printf("\nDtermine um caminho entre 1 e 5: ");
        scanf("%s", getResposta);
        checkLength=parseTheAnswer(getResposta,2);
        if(checkLength>=7)
        {
            printf("\nVoce informou mais cidades que o necessario! Tente novmante.\n");
        }
        else
        {
            End_of_level[2]=checkAnswer(2);
        }
        if(End_of_level[2]==1)
        {
            printf("\nParabens!! Voce acertou.\n");
        }
        else
        {
            printf("\n----------- ERROU! ---------------");
        }

    }
    while(End_of_level[2]==0);

///system("clear");    //linux clear screen function
    getchar();
    ///system("CLS");         // windows clear screen function
///.................................................................................

    ///-------------------- level 3 ---------------------------------------------
    do
    {
        checkLength=0;
        populate_graphs(3); //inicia a matriz do grafo
        memset(getResposta, '\0', sizeof(getResposta));
        show_graphs("graph3.txt"); //mostra o grafo
        printf("\nDtermine um caminho entre 1 e 6: ");
        scanf("%s", getResposta);
        checkLength=parseTheAnswer(getResposta,3);
        if(checkLength>=8)
        {
            printf("\nVoce informou mais cidades que o necessario! Tente novmante.\n");
        }
        else
        {
            End_of_level[3]=checkAnswer(3);
        }
        if(End_of_level[3]==1)
        {
            printf("\nParabens!! Voce acertou.\n");
        }
        else
        {
            printf("\n----------- ERROU! ---------------");
        }

    }
    while(End_of_level[3]==0);

///system("clear");    //linux clear screen function
    getchar();
    ///system("CLS");         // windows clear screen function
///.................................................................................

    ///-------------------- level 4 ---------------------------------------------
    do
    {
        checkLength=0;
        populate_graphs(4); //inicia a matriz do grafo
        memset(getResposta, '\0', sizeof(getResposta));
        show_graphs("graph4.txt"); //mostra o grafo
        printf("\nDtermine um caminho entre 1 e 6: ");
        scanf("%s", getResposta);
        checkLength=parseTheAnswer(getResposta,4);
        if(checkLength>=8)
        {
            printf("\nVoce informou mais cidades que o necessario! Tente novmante.\n");
        }
        else
        {
            End_of_level[4]=checkAnswer(4);
        }
        if(End_of_level[4]==1)
        {
            printf("\nParabens!! Voce acertou.\n");
        }
        else
        {
            printf("\n----------- ERROU! ---------------");
        }

    }
    while(End_of_level[4]==0);

///system("clear");    //linux clear screen function
    getchar();
    ///system("CLS");         // windows clear screen function
///.................................................................................

    ///-------------------- level 5 ---------------------------------------------
    do
    {
        checkLength=0;
        populate_graphs(5); //inicia a matriz do grafo
        memset(getResposta, '\0', sizeof(getResposta));
        show_graphs("graph5.txt"); //mostra o grafo
        printf("\nDtermine um caminho entre 1 e 8: ");
        scanf("%s", getResposta);
        checkLength=parseTheAnswer(getResposta,5);
        if(checkLength>=10)
        {
            printf("\nVoce informou mais cidades que o necessario! Tente novmante.\n");
        }
        else
        {
            End_of_level[5]=checkAnswer(5);
        }
        if(End_of_level[5]==1)
        {
            printf("\nParabens!! Voce acertou.\n");
        }
        else
        {
            printf("\n----------- ERROU! ---------------");
        }

    }
    while(End_of_level[5]==0);

///system("clear");    //linux clear screen function
    getchar();
    ///system("CLS");         // windows clear screen function
///.................................................................................

    ///-------------------- level 6 ---------------------------------------------
    do
    {
        checkLength=0;
        populate_graphs(6); //inicia a matriz do grafo
        memset(getResposta, '\0', sizeof(getResposta));
        show_graphs("graph6.txt"); //mostra o grafo
        printf("\nDtermine um caminho entre 1 e 8: ");
        scanf("%s", getResposta);
        checkLength=parseTheAnswer(getResposta,6);
        if(checkLength>=10)
        {
            printf("\nVoce informou mais cidades que o necessario! Tente novmante.\n");
        }
        else
        {
            End_of_level[6]=checkAnswer(6);
        }
        if(End_of_level[6]==1)
        {
            printf("\nParabens!! Voce acertou.\n");
        }
        else
        {
            printf("\n----------- ERROU! ---------------");
        }

    }
    while(End_of_level[6]==0);

///system("clear");    //linux clear screen function
    getchar();
    ///system("CLS");         // windows clear screen function
///.................................................................................

    show_populate(7);
    ///-------------------- level 7 ---------------------------------------------
    do
    {
        checkLength=0;
        populate_graphs(7); //inicia a matriz do grafo
        show_populate(7);
        memset(getResposta, '\0', sizeof(getResposta));
        show_graphs("graph7.txt"); //mostra o grafo
        printf("\nDtermine um caminho entre 1 e 6: ");
        scanf("%s", getResposta);
        checkLength=parseTheAnswer(getResposta,7);
        if(checkLength>=8)
        {
            printf("\nVoce informou mais cidades que o necessario! Tente novmante.\n");
        }
        else
        {
            End_of_level[7]=checkAnswer(7);
        }
        if(End_of_level[7]==1)
        {
            printf("\nParabens!! Voce acertou.\n");
        }
        else
        {
            printf("\n----------- ERROU! ---------------");
        }

    }
    while(End_of_level[7]==0);

///system("clear");    //linux clear screen function
    getchar();
    /// system("CLS");         // windows clear screen function
///.................................................................................



    ///-------------------- level 8 ---------------------------------------------
    do
    {
        checkLength=0;
        populate_graphs(8); //inicia a matriz do grafo
        memset(getResposta, '\0', sizeof(getResposta));
        show_graphs("graph8.txt"); //mostra o grafo
        printf("\nDtermine um caminho entre 1 e 20: ");
        scanf("%s", getResposta);
        checkLength=parseTheAnswer(getResposta,8);
        if(checkLength>=22)
        {
            printf("\nVoce informou mais cidades que o necessario! Tente novmante.\n");
        }
        else
        {
            End_of_level[8]=checkAnswer(8);
        }
        if(End_of_level[8]==1)
        {
            printf("\nParabens!! Voce acertou.\n");
        }
        else
        {
            printf("\n----------- ERROU! ---------------");
        }

    }
    while(End_of_level[8]==0);

///system("clear");    //linux clear screen function
    getchar();
    ///system("CLS");         // windows clear screen function
///.................................................................................

    show_graphs("final.text");
    show_graphs("jokeonyou.txt");


}





///usada para printar a parte grafica
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

///usada para popular as matrizes com os dados dos txts
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
        for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < 6; j++)
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


}
///funcao so pra ver se as matrizes popularam corretamente
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

        for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < 6; j++)
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

///concatena a resposta removendo pontos, virgulas e espacos e adiciona em vetor de inteiros
int parseTheAnswer(char *resposta, int level)
{

    const char s[2] = "-,. ";
    char *token;
    int i=0;
    int countLength=0;

    switch(level)
    {
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

///verifica a sequencia concatenada informada pelo usuario se confere com a matriz
int checkAnswer(int level)
{
    int i,j;
    int resposta=0;

    switch(level)
    {
    case 1:
        for(i=0; i<=3; i++)
        {
            //printf("\n valor de i: %d", i);
            if(graph_1[resposta1[i]-1][resposta1[i+1]-1]==1)  //se houver arestas interligando as cidades e adicionado 2 na matriz
            {
               //printf("\n.");
                graph_1[resposta1[i]-1][resposta1[i+1]-1]=2;
                graph_1[resposta1[i+1]-1][resposta1[i]-1]=2;    //é adicionado 2 tambem no caminho oposto para que nao possa voltar pelo mesmo caminho
               // printf("\nvalor de[%d][%d] : %d" ,resposta1[i]-1,resposta1[i+1]-1, graph_1[resposta1[i]-1][resposta1[i+1]-1]);
                resposta=1;
            }
            else
            {

                /*printf("\nerrou");
               //printf("\n valor de i: %d", i);
                printf("\nvalor de resposta: %d",resposta1[i]-1);
                printf("\nvalor de resposta+1: %d",resposta1[i+1]-1);
                printf("\nvalor de[%d][%d] : %d" ,resposta1[i]-1,resposta1[i+1]-1, graph_1[resposta1[i]-1][resposta1[i+1]-1]);*/
                resposta=0;
                return 0;
            }
            // 1 3 4 5
        }

        break;
    case 2:
        for(i=0; i<=4; i++)
        {
           //printf("\n valor de i: %d", i);
            if(graph_2[resposta2[i]-1][resposta2[i+1]-1]==1)  //se houver arestas interligando as cidades e adicionado 2 na matriz
            {
                //printf("\n.");
                graph_2[resposta2[i]-1][resposta2[i+1]-1]=2;
                graph_2[resposta2[i+1]-1][resposta2[i]-1]=2;    //é adicionado 2 tambem no caminho oposto para que nao possa voltar pelo mesmo caminho
                 resposta=1;
                //printf("\nvalor de[%d][%d] : %d" ,resposta1[i]-1,resposta1[i+1]-1, graph_1[resposta1[i]-1][resposta1[i+1]-1]);
            }
            else
            {

                /*printf("\nerrou");
               //printf("\n valor de i: %d", i);
                printf("\nvalor de resposta: %d",resposta1[i]-1);
                printf("\nvalor de resposta+1: %d",resposta1[i+1]-1);
                printf("\nvalor de[%d][%d] : %d" ,resposta1[i]-1,resposta1[i+1]-1, graph_1[resposta1[i]-1][resposta1[i+1]-1]);*/
                 resposta=0;
                 return 0;
            }
            // 1 3 4 5
        }
        break;
    case 3:
        for(i=0; i<=5; i++)
        {
           //printf("\n valor de i: %d", i);
            if(graph_3[resposta3[i]-1][resposta3[i+1]-1]==1)  //se houver arestas interligando as cidades e adicionado 2 na matriz
            {
                //printf("\n.");
                graph_3[resposta3[i]-1][resposta3[i+1]-1]=2;
                graph_3[resposta3[i+1]-1][resposta3[i]-1]=2;    //é adicionado 2 tambem no caminho oposto para que nao possa voltar pelo mesmo caminho
                 resposta=1;
                //printf("\nvalor de[%d][%d] : %d" ,resposta1[i]-1,resposta1[i+1]-1, graph_1[resposta1[i]-1][resposta1[i+1]-1]);
            }
            else
            {

                /*printf("\nerrou");
               //printf("\n valor de i: %d", i);
                printf("\nvalor de resposta: %d",resposta1[i]-1);
                printf("\nvalor de resposta+1: %d",resposta1[i+1]-1);
                printf("\nvalor de[%d][%d] : %d" ,resposta1[i]-1,resposta1[i+1]-1, graph_1[resposta1[i]-1][resposta1[i+1]-1]);*/
                 resposta=0;
                 return 0;
            }
            // 1 3 4 5
        }

        break;
    case 4:
        for(i=0; i<=5; i++)
        {
           //printf("\n valor de i: %d", i);
            if(graph_4[resposta4[i]-1][resposta4[i+1]-1]==1)  //se houver arestas interligando as cidades e adicionado 2 na matriz
            {
                //printf("\n.");
                graph_4[resposta4[i]-1][resposta4[i+1]-1]=2;
                graph_4[resposta4[i+1]-1][resposta4[i]-1]=2;    //é adicionado 2 tambem no caminho oposto para que nao possa voltar pelo mesmo caminho
                 resposta=1;
                //printf("\nvalor de[%d][%d] : %d" ,resposta1[i]-1,resposta1[i+1]-1, graph_1[resposta1[i]-1][resposta1[i+1]-1]);
            }
            else
            {

                /*printf("\nerrou");
               //printf("\n valor de i: %d", i);
                printf("\nvalor de resposta: %d",resposta1[i]-1);
                printf("\nvalor de resposta+1: %d",resposta1[i+1]-1);
                printf("\nvalor de[%d][%d] : %d" ,resposta1[i]-1,resposta1[i+1]-1, graph_1[resposta1[i]-1][resposta1[i+1]-1]);*/
                 resposta=0;
                 return 0;
            }
            // 1 3 4 5
        }

        break;
    case 5:
        for(i=0; i<=7; i++)
        {
           //printf("\n valor de i: %d", i);
            if(graph_5[resposta5[i]-1][resposta5[i+1]-1]==1)  //se houver arestas interligando as cidades e adicionado 2 na matriz
            {
                //printf("\n.");
                graph_5[resposta5[i]-1][resposta5[i+1]-1]=2;
                graph_5[resposta5[i+1]-1][resposta5[i]-1]=2;    //é adicionado 2 tambem no caminho oposto para que nao possa voltar pelo mesmo caminho
                resposta=1;
                //printf("\nvalor de[%d][%d] : %d" ,resposta1[i]-1,resposta1[i+1]-1, graph_1[resposta1[i]-1][resposta1[i+1]-1]);
            }
            else
            {

                /*printf("\nerrou");
               //printf("\n valor de i: %d", i);
                printf("\nvalor de resposta: %d",resposta1[i]-1);
                printf("\nvalor de resposta+1: %d",resposta1[i+1]-1);
                printf("\nvalor de[%d][%d] : %d" ,resposta1[i]-1,resposta1[i+1]-1, graph_1[resposta1[i]-1][resposta1[i+1]-1]);*/
                return 0;
            }
            // 1 3 4 5
        }

        break;
    case 6:
        for(i=0; i<=7; i++)
        {
           //printf("\n valor de i: %d", i);
            if(graph_6[resposta6[i]-1][resposta6[i+1]-1]==1)  //se houver arestas interligando as cidades e adicionado 2 na matriz
            {
                //printf("\n.");
                graph_6[resposta6[i]-1][resposta6[i+1]-1]=2;
                graph_6[resposta6[i+1]-1][resposta6[i]-1]=2;    //é adicionado 2 tambem no caminho oposto para que nao possa voltar pelo mesmo caminho
                resposta= 1;
                //printf("\nvalor de[%d][%d] : %d" ,resposta1[i]-1,resposta1[i+1]-1, graph_1[resposta1[i]-1][resposta1[i+1]-1]);
            }
            else
            {

                /*printf("\nerrou");
               //printf("\n valor de i: %d", i);
                printf("\nvalor de resposta: %d",resposta1[i]-1);
                printf("\nvalor de resposta+1: %d",resposta1[i+1]-1);
                printf("\nvalor de[%d][%d] : %d" ,resposta1[i]-1,resposta1[i+1]-1, graph_1[resposta1[i]-1][resposta1[i+1]-1]);*/
                return 0;
            }
            // 1 3 4 5
        }

        break;
    case 7:
        for(i=0; i<=5; i++)
        {
           //printf("\n valor de i: %d", i);
            if(graph_7[resposta7[i]-1][resposta7[i+1]-1]==1)  //se houver arestas interligando as cidades e adicionado 2 na matriz
            {
                printf("\n.");
                graph_7[resposta7[i]-1][resposta7[i+1]-1]=2;
                graph_7[resposta7[i+1]-1][resposta7[i]-1]=2;    //é adicionado 2 tambem no caminho oposto para que nao possa voltar pelo mesmo caminho
                resposta= 1;
                printf("\nvalor de[%d][%d] : %d" ,resposta1[i]-1,resposta1[i+1]-1, graph_1[resposta1[i]-1][resposta1[i+1]-1]);
            }
            else
            {

                printf("\nerrou");
               //printf("\n valor de i: %d", i);
                printf("\nvalor de resposta: %d",resposta1[i]-1);
                printf("\nvalor de resposta+1: %d",resposta1[i+1]-1);
                printf("\nvalor de[%d][%d] : %d" ,resposta1[i]-1,resposta1[i+1]-1, graph_1[resposta1[i]-1][resposta1[i+1]-1]);
                return 0;
            }
            // 1 3 4 5
        }
        break;
    case 8:
        for(i=0; i<=19; i++)
        {
           //printf("\n valor de i: %d", i);
            if(graph_8[resposta8[i]-1][resposta8[i+1]-1]==1)  //se houver arestas interligando as cidades e adicionado 2 na matriz
            {
                //printf("\n.");
                graph_8[resposta8[i]-1][resposta8[i+1]-1]=2;
                graph_8[resposta5[i+1]-1][resposta8[i]-1]=2;    //é adicionado 2 tambem no caminho oposto para que nao possa voltar pelo mesmo caminho
                resposta= 1;
                //printf("\nvalor de[%d][%d] : %d" ,resposta1[i]-1,resposta1[i+1]-1, graph_1[resposta1[i]-1][resposta1[i+1]-1]);
            }
            else
            {

                /*printf("\nerrou");
               //printf("\n valor de i: %d", i);
                printf("\nvalor de resposta: %d",resposta1[i]-1);
                printf("\nvalor de resposta+1: %d",resposta1[i+1]-1);
                printf("\nvalor de[%d][%d] : %d" ,resposta1[i]-1,resposta1[i+1]-1, graph_1[resposta1[i]-1][resposta1[i+1]-1]);*/
                return 0;
            }
            // 1 3 4 5
        }
        break;

    }

    return resposta;


}



