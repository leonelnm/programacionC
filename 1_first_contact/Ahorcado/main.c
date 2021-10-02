#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define OPORTUNIDADES 7
#define RIGHT 2     //Right y Fail son los puntajes otorgados
#define FAIL -1
#define SOLVE 10    //Si lo soluciona antes de gastar los intentos obtiene 10
#define WORDS 10     //Indica el número de palabras que tendremos para usar
#define COLUMNS 20  //Limita a un máximo de 20 caracteres para cada palabra o mini frase


int getRandomWord();
void printMan(int attempts);
void drawLinesWord( char *word, int size);
void jugar(char *word, int size);

int puntos = 0;

int main(){

    system("clear");

    char *word[COLUMNS] = {"primera", "segunda", "tercera palabra", "cuarta incognita", "quinta", "sexta prueba", "septima", "octava", "novena", "decima"};
    
    printf("\nBIENVENIDO AL JUEGO DEL AHORCADO\n");           
    printf("\nTienes %d intentos \n", OPORTUNIDADES);

    int index = getRandomWord();

    printf("-->%s\n", word[index]);

    char *wordCopy = word[index];
    
    drawLinesWord(wordCopy, strlen(wordCopy));
    jugar(wordCopy, strlen(wordCopy));

    return 0;
}

int getRandomWord(){
    srand(time(NULL));
    return rand() % WORDS;
}

//Para mostrar las lineas de la palabra
void drawLinesWord( char *word, int size){
    
    for(int i = 0; i < size; i++){
        if(word[i] == ' ')
            printf("  ");
        else
            printf("_ ");
    }
    printf("\n");

}

void jugar(char *word, int size){

    char letra;
    
    int attempts = 0;

    while (attempts < OPORTUNIDADES)
    {
        printf("Inserta una letra: ");
        scanf("%c", &letra);

        for (int i = 0; i < size; i++)
        {

            if (word[i] == letra)
            {
                puntos += RIGHT;
                printf("%c ", word[i]);
            }
            else if (word[i] == ' ')
            {
                printf("  ");
            }
            else
            {
                printf("_ ");
            }
        }
        printf("\n\n");
        attempts++;
        printMan(attempts);
    }
}

void printMan(int attempts){

    switch (attempts)
    {
    case 1:
        printf(" __ \n");
        break;
    case 2:
        printf("_|_\n"); 
        break;
    case 3:
        printf("  _ _\n");
        printf(" | \n");
        printf(" | \n");
        printf("_|_  \n");
        break;
    case 4:
        printf("  __ \n");
        printf(" |  | \n");
        printf(" | \n");
        printf("_|_ \n");
        break;
    case 5:
        printf("  __ \n");
        printf(" |  |\n");
        printf(" |  o \n");
        printf(" |  | \n");
        printf("_|_   \n");
        break;
    case 6:
        printf("  _ _ \n");
        printf(" |   | \n");
        printf(" |   o \n");
        printf(" |   | \n");
        printf("_|_ /'\\ \n");
        break;
    default:
        break;
    }
}