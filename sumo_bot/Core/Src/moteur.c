#include "moteur.h"
#include "main.h"

/****************************************************************************************************************************
 * Fonction d'avance du robot
 ****************************************************************************************************************************
 * Cette fonction permet de faire avancer le robot.
 ****************************************************************************************************************************
 * Paramètre val_gauche : détermine la valeur de la PWM sur le moteur gauche. de 0 à 255 pour une vitesse de 0% à 100%.
 * Paramètre val_droite : détermine la valeur de la PWM sur le moteur droit. de 0 à 255 pour une vitesse de 0% à 100%.
 ***************************************************************************************************************************/
void moteur_avance()
{
	HAL_GPIO_WritePin(GPIOA, MOTEUR_G_DIR_1, SET);
	HAL_GPIO_WritePin(GPIOA, MOTEUR_G_DIR_2, RESET);
	HAL_GPIO_WritePin(GPIOA, MOTEUR_D_DIR_1, SET);
	HAL_GPIO_WritePin(GPIOA, MOTEUR_D_DIR_2, RESET);
	/*analogWrite(MOTEUR_D_PWM, val_droite);*/
}
