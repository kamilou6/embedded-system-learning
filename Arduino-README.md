Description: simulation d’un feu de circulation avec Arduino et trois LEDs (rouge, orange, vert). 

Matériel : Arduino, LED rouge sur pin 13, LED orange sur pin 8, LED verte sur pin 2, résistances, breadboard, fils. 

Fonctionnement : dans setup(), les pins 13, 8 et 2 sont configurées en sorties. Dans loop(), tu allumes la pin 13 1 seconde puis tu l’éteins, tu fais clignoter la pin 8 avec 600 ms, et la pin 2 reste allumée 10 secondes puis éteinte 2 secondes. 

Concepts appris : sorties numériques Arduino, pinMode(), digitalWrite(), delay(), gestion de temporisations, compréhension d’un système embarqué simple. 

Objectif : comprendre les bases de la programmation et du contrôle des composants.
