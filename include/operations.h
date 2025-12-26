/**
 * @file operations.h
 * @brief Déclaration des fonctions mathématiques de base
 */

#ifndef OPERATIONS_H
#define OPERATIONS_H

/**
 * @brief Additionne deux nombres
 * @param a Premier nombre
 * @param b Deuxième nombre
 * @return Somme de a et b
 */
int addition(int a, int b);

/**
 * @brief Soustrait deux nombres
 * @param a Premier nombre
 * @param b Deuxième nombre
 * @return Différence entre a et b
 */
int soustraction(int a, int b);

/**
 * @brief Multiplie deux nombres
 * @param a Premier nombre
 * @param b Deuxième nombre
 * @return Produit de a et b
 */
int multiplication(int a, int b);

/**
 * @brief Divise deux nombres
 * @param a Numérateur
 * @param b Dénominateur
 * @return Résultat de la division
 * @note Retourne 0 si b = 0
 */
float division(int a, int b);

#endif /* OPERATIONS_H */