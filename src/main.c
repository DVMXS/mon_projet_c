/**
 * @file main.c
 * @brief Programme principal démontrant l'utilisation des fonctions
 */

#include <stdio.h>
#include <stdlib.h>
#include "operations.h"

/**
 * @brief Fonction principale
 * @return Code de sortie
 */
int main() {
    int x = 10, y = 5;

    printf("=== Calculatrice basique ===\n\n");
    printf("Valeurs initiales : x = %d, y = %d\n\n", x, y);

    // Test des opérations
    printf("Addition : %d + %d = %d\n", x, y, addition(x, y));
    printf("Soustraction : %d - %d = %d\n", x, y, soustraction(x, y));
    printf("Multiplication : %d * %d = %d\n", x, y, multiplication(x, y));

    if (y != 0) {
        printf("Division : %d / %d = %.2f\n", x, y, division(x, y));
    } else {
        printf("Division : Division par zéro impossible\n");
    }

    // Test avec d'autres valeurs
    printf("\n--- Test avec nouvelles valeurs ---\n");
    x = 15;
    y = 3;

    printf("\nNouvelles valeurs : x = %d, y = %d\n", x, y);
    printf("Addition : %d + %d = %d\n", x, y, addition(x, y));
    
    return 0;
}