#include <stdio.h>
#include <stdlib.h>

#include "ansicolors.h"

#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#pragma warning(disable : 4996)

int main()
{
    int gArray; // Größe von dem Array

    printf(ANSI_GREEN"gebe die Groesse des Array ein: "ANSI_RESET);
    scanf("%d", &gArray);

    int* array =(int*)malloc(gArray * sizeof(int)); // muss nachher noch freigeben werden
    if (array == NULL) {
        printf(ANSI_RED"fehler beim allokieren von speicher"ANSI_RESET);
        return 1;
    }

    printf(ANSI_BLUE"fuelle das Array!"ANSI_RESET);
    
    for (int i = 0; i < gArray; i++) { //Array wird mit werden gefüllt
        printf("\nArray index %d: ", i);
        scanf("%d", &array[i]);
    }

    //Überprüfungsschleife
    for (int j = 0; j < gArray; j++) {
        printf(ANSI_CYAN"\nArray index: %d, Wert: %d"ANSI_RESET, j, array[j]);
    }

    for (int i = 0; i < gArray - 1; i++) {

        for (int j = 0; j < gArray - i - 1; j++) {

            if (array[j] > array[j + 1]) {
                // Werte tauschen
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    //sortiertes Array ausgeben
    printf("\n\nsortiertes Array:");
    for (int k = 0; k < gArray; k++) {
        printf(ANSI_GREEN"\nindex: %d, Wert: %d"ANSI_RESET, k, array[k]);
    }

    free(array)


    return 0;
}
