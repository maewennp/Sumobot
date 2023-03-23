#include "stm32l4xx_hal.h" // bibliothèque pour la gestion de projet Arduino
#include "main.h"

// Constantes
// Vous n'êtes pas obligé d'utiliser ces valeurs, vous pouvez directement écrire un nombre de 0 à 255
#define MOTEUR_100 50  // valeur pour une PWM de 100%
#define MOTEUR_50  128  // valeur pour une PWM de  50%
#define MOTEUR_25  64   // valeur pour une PWM de  25%
#define MOTEUR_0   0    // valeur pour une PWM de   0%

// Déclarations des fonctions
void moteur_avance();
/*void moteur_recule(int val_gauche, int val_droite);
void moteur_rotation_droite(int val_gauche, int val_droite);
void moteur_rotation_gauche(int val_gauche, int val_droite);
void moteur_bloque();
void moteur_stop();
*/
