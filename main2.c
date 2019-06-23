/** --------------------------------------------------------------------------------------

                        ---------- game based on Hamiltonian cycles -------------



    AUTHOR: Bruno Pizol Camargo


    --RESUME: In this game you must help the post office not to be privatized, coordinating routes between
    the cities present in each vertex of the graphs. The game will show a graph and you should insert the
    order of the vertices (seperated by comma only) in order to form a Hamiltonian cycle.



    --HOW IT WORKS: The game uses txt's with drawings made in ASCII to form the entire interface,
    the arrays of each graph are also found in txt's, the application reads these txt's, adds them to
    matrices and uses them to compare the coordinates.



    quick answers for testing:
    -level 1: 1,2,4,3,1
    -level 2: 1,2,3,5,4,1
    -level 3: 1,2,3,6,5,4,1
    -level 4: 1,6,4,3,2,5,1
    -level 5: 1,4,6,3,2,8,7,5,1
    -level 6: 1,6,5,4,7,8,3,2,1
    -level 7: 1,2,6,4,5,3,1
    -level 9: 1,2,3,10,9,8,7,17,18,19,11,12,4,5,14,13,20,16,15,6,1
**/




#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int graph_1[4][4];
int graph_2[5][5];
int graph_3[6][6];
int graph_4[6][6];
int graph_5[8][8];
int graph_6[8][8];
int graph_7[6][6];
int graph_8[20][20];

int answer1[4];
int answer2[5];
int answer3[6];
int answer4[6];
int answer5[8];
int answer6[8];
int answer7[11];
int answer8[20];

void show_graphs(char *graph_path);
void populate_graphs(int graph_number);
void show_populate(int graph);
int parseTheAnswer(char *answer, int level);
int checkAnswer(int level);



int main()
{
    char getanswer[30];
    int i, checkLength;
    int End_of_level[9];


    show_graphs("inicio.text");
    getchar();
    ///system("clear");    //linux clear screen function
    ///system("CLS");         // windows clear screen function
    show_graphs("intro.text");
    getchar();
    ///system("clear");    //linux clear screen function
    ///system("CLS");         // windows clear screen function



    /// tests whether the matrices were correctly populated

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
        populate_graphs(1); //starts the graph matrix
        printf("\nDetermine a path between cities 1 e 4: ");
        memset(getanswer, '\0', sizeof(getanswer));
        show_graphs("graph1.txt"); //shows the graph

        scanf("%s", getanswer);
        checkLength=parseTheAnswer(getanswer,1);
        if(checkLength>=6)
        {
            printf("\nYou have informed more cities than necessary! Try again.\n");
        }
        else
        {
            End_of_level[1]=checkAnswer(1);
        }
        if(End_of_level[1]==1)
        {
            printf("\n------- Congratulations!! You're right----------.\n");
        }
        else
        {
            printf("\n----------- YOU MISSED! ---------------");
        }

    }
    while(End_of_level[1]==0);

getchar();
    ///system("clear");    //linux clear screen function
    ///system("CLS");         // windows clear screen function

///.................................................................................

    ///-------------------- level 2 ---------------------------------------------
    do
    {
        checkLength=0;
        populate_graphs(2); //starts the graph matrix
        printf("\nDetermine a path between cities 1 e 5: ");
        memset(getanswer, '\0', sizeof(getanswer));
        show_graphs("graph2.txt"); //shows the graph

        scanf("%s", getanswer);
        checkLength=parseTheAnswer(getanswer,2);
        if(checkLength>=7)
        {
            printf("\nYou have informed more cities than necessary! Try again.\n");
        }
        else
        {
            End_of_level[2]=checkAnswer(2);
        }
        if(End_of_level[2]==1)
        {
            printf("\n------- Congratulations!! You're right----------.\n");
        }
        else
        {
            printf("\n----------- YOU MISSED! ---------------");
        }

    }
    while(End_of_level[2]==0);


    getchar();
    ///system("clear");    //linux clear screen function
    ///system("CLS");         // windows clear screen function
///.................................................................................

    ///-------------------- level 3 ---------------------------------------------
    do
    {
        checkLength=0;
        populate_graphs(3); //starts the graph matrix
        printf("\nDetermine a path between cities 1 e 6: ");
        memset(getanswer, '\0', sizeof(getanswer));
        show_graphs("graph3.txt"); //shows the graph

        scanf("%s", getanswer);
        checkLength=parseTheAnswer(getanswer,3);
        if(checkLength>=8)
        {
            printf("\nYou have informed more cities than necessary! Try again.\n");
        }
        else
        {
            End_of_level[3]=checkAnswer(3);
        }
        if(End_of_level[3]==1)
        {
            printf("\n------- Congratulations!! You're right----------.\n");
        }
        else
        {
            printf("\n----------- YOU MISSED! ---------------");
        }

    }
    while(End_of_level[3]==0);

getchar();
    ///system("clear");    //linux clear screen function
    ///system("CLS");         // windows clear screen function
///.................................................................................

    ///-------------------- level 4 ---------------------------------------------
    do
    {
        checkLength=0;
        populate_graphs(4); //starts the graph matrix
        printf("\nDetermine a path between cities 1 e 6: ");
        memset(getanswer, '\0', sizeof(getanswer));
        show_graphs("graph4.txt"); //shows the graph

        scanf("%s", getanswer);
        checkLength=parseTheAnswer(getanswer,4);
        if(checkLength>=8)
        {
            printf("\nYou have informed more cities than necessary! Try again.\n");
        }
        else
        {
            End_of_level[4]=checkAnswer(4);
        }
        if(End_of_level[4]==1)
        {
            printf("\n------- Congratulations!! You're right----------.\n");
        }
        else
        {
            printf("\n----------- YOU MISSED! ---------------");
        }

    }
    while(End_of_level[4]==0);

getchar();
    ///system("clear");    //linux clear screen function
    ///system("CLS");         // windows clear screen function
///.................................................................................

    ///-------------------- level 5 ---------------------------------------------
    do
    {
        checkLength=0;
        populate_graphs(5); //starts the graph matrix
        printf("\nDetermine a path between cities 1 e 8: ");
        memset(getanswer, '\0', sizeof(getanswer));
        show_graphs("graph5.txt"); //shows the graph

        scanf("%s", getanswer);
        checkLength=parseTheAnswer(getanswer,5);
        if(checkLength>=10)
        {
            printf("\nYou have informed more cities than necessary! Try again.\n");
        }
        else
        {
            End_of_level[5]=checkAnswer(5);
        }
        if(End_of_level[5]==1)
        {
            printf("\n------- Congratulations!! You're right----------.\n");
        }
        else
        {
            printf("\n----------- YOU MISSED! ---------------");
        }

    }
    while(End_of_level[5]==0);

getchar();
    ///system("clear");    //linux clear screen function
    ///system("CLS");         // windows clear screen function
///.................................................................................

    ///-------------------- level 6 ---------------------------------------------
    do
    {
        checkLength=0;
        populate_graphs(6); //starts the graph matrix
        printf("\nDetermine a path between cities 1 e 8: ");
        memset(getanswer, '\0', sizeof(getanswer));
        show_graphs("graph6.txt"); //shows the graph

        scanf("%s", getanswer);
        checkLength=parseTheAnswer(getanswer,6);
        if(checkLength>=10)
        {
            printf("\nYou have informed more cities than necessary! Try again.\n");
        }
        else
        {
            End_of_level[6]=checkAnswer(6);
        }
        if(End_of_level[6]==1)
        {
            printf("\n------- Congratulations!! You're right----------.\n");
        }
        else
        {
            printf("\n----------- YOU MISSED! ---------------");
        }

    }
    while(End_of_level[6]==0);

getchar();
    ///system("clear");    //linux clear screen function
    ///system("CLS");         // windows clear screen function
///.................................................................................

    show_populate(7);
    ///-------------------- level 7 ---------------------------------------------
    do
    {
        checkLength=0;
        populate_graphs(7); //starts the graph matrix
        printf("\nDetermine a path between cities 1 e 6: ");
        //show_populate(7);
        memset(getanswer, '\0', sizeof(getanswer));
        show_graphs("graph7.txt"); //shows the graph

        scanf("%s", getanswer);
        checkLength=parseTheAnswer(getanswer,7);
        if(checkLength>=8)
        {
            printf("\nYou have informed more cities than necessary! Try again.\n");
        }
        else
        {
            End_of_level[7]=checkAnswer(7);
        }
        if(End_of_level[7]==1)
        {
            printf("\n------- Congratulations!! You're right----------.\n");
        }
        else
        {
            printf("\n----------- YOU MISSED! ---------------");
        }

    }
    while(End_of_level[7]==0);

getchar();
    ///system("clear");    //linux clear screen function
    ///system("CLS");         // windows clear screen function...................



    ///-------------------- level 8 ---------------------------------------------
    do
    {
        checkLength=0;
        populate_graphs(8); //starts the graph matrix
        printf("\nDetermine a path between cities 1 e 20: ");
        memset(getanswer, '\0', sizeof(getanswer));
        show_graphs("graph8.txt"); //shows the graph

        scanf("%s", getanswer);
        checkLength=parseTheAnswer(getanswer,8);
        if(checkLength>=22)
        {
            printf("\nYou have informed more cities than necessary! Try again.\n");
        }
        else
        {
            End_of_level[8]=checkAnswer(8);
        }
        if(End_of_level[8]==1)
        {
            printf("\n------- Congratulations!! You're right----------.\n");
        }
        else
        {
            printf("\n----------- YOU MISSED! ---------------");
        }

    }
    while(End_of_level[8]==0);

getchar();
    ///system("clear");    //linux clear screen function
    ///system("CLS");         // windows clear screen function
///.................................................................................

    show_graphs("final.text");
    show_graphs("jokeonyou.txt");


}





///function used to print the graphic part
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

///function used to populate the arrays with txts data
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
///function to see how arrays populate correctly
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

///concatenates the response by removing dots, commas and spaces and adds in integer vector
int parseTheAnswer(char *answer, int level)
{

    const char s[2] = "-,. ";
    char *token;
    int i=0;
    int countLength=0;

    switch(level)
    {
    case 1:
        token = strtok(answer, s);
        i=0;
        while( token != NULL )
        {
            answer1[i]=atoi(token);


            token = strtok(NULL, s);
            i++;
            countLength++;
        }

        break;
    case 2:
        token = strtok(answer, s);
        i=0;
        while( token != NULL )
        {
            answer2[i]=atoi(token);


            token = strtok(NULL, s);
            i++;
        }
        break;
    case 3:
        token = strtok(answer, s);
        i=0;
        while( token != NULL )
        {
            answer3[i]=atoi(token);


            token = strtok(NULL, s);
            i++;
        }
        break;
    case 4:
        token = strtok(answer, s);
        i=0;
        while( token != NULL )
        {
            answer4[i]=atoi(token);


            token = strtok(NULL, s);
            i++;
        }
        break;
    case 5:
        token = strtok(answer, s);
        i=0;
        while( token != NULL )
        {
            answer5[i]=atoi(token);


            token = strtok(NULL, s);
            i++;
        }
        break;
    case 6:
        token = strtok(answer, s);
        i=0;
        while( token != NULL )
        {
            answer6[i]=atoi(token);


            token = strtok(NULL, s);
            i++;
        }
        break;
    case 7:
        token = strtok(answer, s);
        i=0;
        while( token != NULL )
        {
            answer7[i]=atoi(token);


            token = strtok(NULL, s);
            i++;
        }
        break;
    case 8:
        token = strtok(answer, s);
        i=0;
        while( token != NULL )
        {
            answer8[i]=atoi(token);


            token = strtok(NULL, s);
            i++;
        }
        break;
    }

    return countLength;
    /* get the first token */



}

/// checks the concatenated string entered by the user checks with the array
int checkAnswer(int level)
{
    int i,j;
    int answer=0;

    switch(level)
    {
    case 1:
        for(i=0; i<=3; i++)
        {
            //printf("\n valor de i: %d", i);
            if(graph_1[answer1[i]-1][answer1[i+1]-1]==1)  //se houver arestas interligando as cidades e adicionado 2 na matriz
            {
               //printf("\n.");
                graph_1[answer1[i]-1][answer1[i+1]-1]=2;
                graph_1[answer1[i+1]-1][answer1[i]-1]=2;    //é adicionado 2 tambem no caminho oposto para que nao possa voltar pelo mesmo caminho
               // printf("\nvalor de[%d][%d] : %d" ,answer1[i]-1,answer1[i+1]-1, graph_1[answer1[i]-1][answer1[i+1]-1]);
                answer=1;
            }
            else
            {

                /*printf("\nYOU MISSED");
               //printf("\n valor de i: %d", i);
                printf("\nvalor de answer: %d",answer1[i]-1);
                printf("\nvalor de answer+1: %d",answer1[i+1]-1);
                printf("\nvalor de[%d][%d] : %d" ,answer1[i]-1,answer1[i+1]-1, graph_1[answer1[i]-1][answer1[i+1]-1]);*/
                answer=0;
                return 0;
            }
            // 1 3 4 5
        }

        break;
    case 2:
        for(i=0; i<=4; i++)
        {
           //printf("\n valor de i: %d", i);
            if(graph_2[answer2[i]-1][answer2[i+1]-1]==1)  //se houver arestas interligando as cidades e adicionado 2 na matriz
            {
                //printf("\n.");
                graph_2[answer2[i]-1][answer2[i+1]-1]=2;
                graph_2[answer2[i+1]-1][answer2[i]-1]=2;    //é adicionado 2 tambem no caminho oposto para que nao possa voltar pelo mesmo caminho
                 answer=1;
                //printf("\nvalor de[%d][%d] : %d" ,answer1[i]-1,answer1[i+1]-1, graph_1[answer1[i]-1][answer1[i+1]-1]);
            }
            else
            {

                /*printf("\nYOU MISSED");
               //printf("\n valor de i: %d", i);
                printf("\nvalor de answer: %d",answer1[i]-1);
                printf("\nvalor de answer+1: %d",answer1[i+1]-1);
                printf("\nvalor de[%d][%d] : %d" ,answer1[i]-1,answer1[i+1]-1, graph_1[answer1[i]-1][answer1[i+1]-1]);*/
                 answer=0;
                 return 0;
            }
            // 1 3 4 5
        }
        break;
    case 3:
        for(i=0; i<=5; i++)
        {
           //printf("\n valor de i: %d", i);
            if(graph_3[answer3[i]-1][answer3[i+1]-1]==1)  //se houver arestas interligando as cidades e adicionado 2 na matriz
            {
                //printf("\n.");
                graph_3[answer3[i]-1][answer3[i+1]-1]=2;
                graph_3[answer3[i+1]-1][answer3[i]-1]=2;    //é adicionado 2 tambem no caminho oposto para que nao possa voltar pelo mesmo caminho
                 answer=1;
                //printf("\nvalor de[%d][%d] : %d" ,answer1[i]-1,answer1[i+1]-1, graph_1[answer1[i]-1][answer1[i+1]-1]);
            }
            else
            {

                /*printf("\nYOU MISSED");
               //printf("\n valor de i: %d", i);
                printf("\nvalor de answer: %d",answer1[i]-1);
                printf("\nvalor de answer+1: %d",answer1[i+1]-1);
                printf("\nvalor de[%d][%d] : %d" ,answer1[i]-1,answer1[i+1]-1, graph_1[answer1[i]-1][answer1[i+1]-1]);*/
                 answer=0;
                 return 0;
            }
            // 1 3 4 5
        }

        break;
    case 4:
        for(i=0; i<=5; i++)
        {
           //printf("\n valor de i: %d", i);
            if(graph_4[answer4[i]-1][answer4[i+1]-1]==1)  //se houver arestas interligando as cidades e adicionado 2 na matriz
            {
                //printf("\n.");
                graph_4[answer4[i]-1][answer4[i+1]-1]=2;
                graph_4[answer4[i+1]-1][answer4[i]-1]=2;    //é adicionado 2 tambem no caminho oposto para que nao possa voltar pelo mesmo caminho
                 answer=1;
                //printf("\nvalor de[%d][%d] : %d" ,answer1[i]-1,answer1[i+1]-1, graph_1[answer1[i]-1][answer1[i+1]-1]);
            }
            else
            {

                /*printf("\nYOU MISSED");
               //printf("\n valor de i: %d", i);
                printf("\nvalor de answer: %d",answer1[i]-1);
                printf("\nvalor de answer+1: %d",answer1[i+1]-1);
                printf("\nvalor de[%d][%d] : %d" ,answer1[i]-1,answer1[i+1]-1, graph_1[answer1[i]-1][answer1[i+1]-1]);*/
                 answer=0;
                 return 0;
            }
            // 1 3 4 5
        }

        break;
    case 5:
        for(i=0; i<=7; i++)
        {
           //printf("\n valor de i: %d", i);
            if(graph_5[answer5[i]-1][answer5[i+1]-1]==1)  //se houver arestas interligando as cidades e adicionado 2 na matriz
            {
                //printf("\n.");
                graph_5[answer5[i]-1][answer5[i+1]-1]=2;
                graph_5[answer5[i+1]-1][answer5[i]-1]=2;    //é adicionado 2 tambem no caminho oposto para que nao possa voltar pelo mesmo caminho
                answer=1;
                //printf("\nvalor de[%d][%d] : %d" ,answer1[i]-1,answer1[i+1]-1, graph_1[answer1[i]-1][answer1[i+1]-1]);
            }
            else
            {

                /*printf("\nYOU MISSED");
               //printf("\n valor de i: %d", i);
                printf("\nvalor de answer: %d",answer1[i]-1);
                printf("\nvalor de answer+1: %d",answer1[i+1]-1);
                printf("\nvalor de[%d][%d] : %d" ,answer1[i]-1,answer1[i+1]-1, graph_1[answer1[i]-1][answer1[i+1]-1]);*/
                return 0;
            }
            // 1 3 4 5
        }

        break;
    case 6:
        for(i=0; i<=7; i++)
        {
           //printf("\n valor de i: %d", i);
            if(graph_6[answer6[i]-1][answer6[i+1]-1]==1)  //se houver arestas interligando as cidades e adicionado 2 na matriz
            {
                //printf("\n.");
                graph_6[answer6[i]-1][answer6[i+1]-1]=2;
                graph_6[answer6[i+1]-1][answer6[i]-1]=2;    //é adicionado 2 tambem no caminho oposto para que nao possa voltar pelo mesmo caminho
                answer= 1;
                //printf("\nvalor de[%d][%d] : %d" ,answer1[i]-1,answer1[i+1]-1, graph_1[answer1[i]-1][answer1[i+1]-1]);
            }
            else
            {

                /*printf("\nYOU MISSED");
               //printf("\n valor de i: %d", i);
                printf("\nvalor de answer: %d",answer1[i]-1);
                printf("\nvalor de answer+1: %d",answer1[i+1]-1);
                printf("\nvalor de[%d][%d] : %d" ,answer1[i]-1,answer1[i+1]-1, graph_1[answer1[i]-1][answer1[i+1]-1]);*/
                return 0;
            }
            // 1 3 4 5
        }

        break;
    case 7:
        for(i=0; i<=5; i++)
        {
           //printf("\n valor de i: %d", i);
            if(graph_7[answer7[i]-1][answer7[i+1]-1]==1)  ///se houver arestas interligando as cidades e adicionado 2 na matriz
            {
               // printf("\n.");
                graph_7[answer7[i]-1][answer7[i+1]-1]=2;
                graph_7[answer7[i+1]-1][answer7[i]-1]=2;    ///é adicionado 2 tambem no caminho oposto para que nao possa voltar pelo mesmo caminho
                answer= 1;
               // printf("\nvalor de[%d][%d] : %d" ,answer1[i]-1,answer1[i+1]-1, graph_1[answer1[i]-1][answer1[i+1]-1]);
            }
            else
            {

                printf("\nYOU MISSED");
               //printf("\n valor de i: %d", i);
                /*printf("\nvalor de answer: %d",answer1[i]-1);
                printf("\nvalor de answer+1: %d",answer1[i+1]-1);
                printf("\nvalor de[%d][%d] : %d" ,answer1[i]-1,answer1[i+1]-1, graph_1[answer1[i]-1][answer1[i+1]-1]);*/
                return 0;
            }
            // 1 3 4 5
        }
        break;
    case 8:
        for(i=0; i<=19; i++)
        {
           //printf("\n valor de i: %d", i);
            if(graph_8[answer8[i]-1][answer8[i+1]-1]==1)  //se houver arestas interligando as cidades e adicionado 2 na matriz
            {
                //printf("\n.");
                graph_8[answer8[i]-1][answer8[i+1]-1]=2;
                graph_8[answer5[i+1]-1][answer8[i]-1]=2;    //é adicionado 2 tambem no caminho oposto para que nao possa voltar pelo mesmo caminho
                answer= 1;
                //printf("\nvalor de[%d][%d] : %d" ,answer1[i]-1,answer1[i+1]-1, graph_1[answer1[i]-1][answer1[i+1]-1]);
            }
            else
            {

                /*printf("\nYOU MISSED");
               //printf("\n valor de i: %d", i);
                printf("\nvalor de answer: %d",answer1[i]-1);
                printf("\nvalor de answer+1: %d",answer1[i+1]-1);
                printf("\nvalor de[%d][%d] : %d" ,answer1[i]-1,answer1[i+1]-1, graph_1[answer1[i]-1][answer1[i+1]-1]);*/
                return 0;
            }
            // 1 3 4 5
        }
        break;

    }

    return answer;


}



