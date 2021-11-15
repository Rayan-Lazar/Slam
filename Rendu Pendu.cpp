// Lazar Rayan  bts slam 2021
#include <stdio.h> //inclure 

#include <stdlib.h> //inclure bibliothèque pour systeme
#include <time.h> //inclure bibliothèque pour random
#include <ctype.h> //inclure bibliothèque

int main(void){
system("COLOR 0A");	//fonction system qui permet de changer la couleur du texte et du fond (vert)
int text, i;
char reponse='n';  // variable caractère qui va nous permettre de prendre en compte le caractère taper au clavier initialiser a o


printf("Bienvenue dans le jeu du pendu ! \n "); // variable printf pour afficher a l'écran le message voulu

printf("Joueur 1 :Saisir la taille du mot : "); // variable printf pour afficher a l'écran le message voulu
scanf("%d",&text); // variable permettant de tapper une valeur/données au clavier
char  m[text], my[text]; // Tableau de char pour stocker les lettres que nous mettrons dans text
while(reponse == 'N' || reponse == 'n'){ // boucle while avec condition, si reponse = exemple (||) les deux barres veulent dire (ou) "!" = non et nous avons aussi (&&) qui veut dire "et"
//system("COLOR 0A");		//fonction system qui permet de changer la couleur du texte et du fond (rouge)
         printf("Saisir le mot (Qui fait : %d et caractere par caractere ) \n ", text); // variable printf pour afficher a l'écran le message voulu
         
          for (i=0;i<text;i++){ // boucle for on y met une condition entre parenthèse
		  //system("cls"); // permet de clear la console
          printf("%d ---", i+1); // variable printf pour afficher a l'écran le message voulu
          getchar(); //ne pas prendre en compte la touche entree
          scanf("%c",&m[i]); // variable permettant de tapper une valeur/données au clavier
          m[i]=toupper(m[i]);
}
 

 printf("Votre mot est : "); // variable printf pour afficher a l'écran le message voulu
 for (i=0;i<text;i++){ // boucle for on y met une condition entre parenthèse
printf("%c" ,m[i]); // variable printf pour afficher a l'écran le message voulu
}


 printf("\n est-ce votre mot ?\n"); // variable printf pour afficher a l'écran le message voulu
 printf("(O)ui ou (N)on : "); // variable printf pour afficher a l'écran le message voulu
 getchar(); //ne pas prendre en compte la touche entree
 scanf("%c", &reponse); // variable permettant de tapper une valeur/données au clavier
}
printf("La partie commence \n"); // variable printf pour afficher a l'écran le message voulu
printf("Le mot a trouve est :"); // variable printf pour afficher a l'écran le message voulu
for (i=0;i<text;i++){ // boucle for on y met une condition entre parenthèse
my[i]='_'; //initialisation du tableau avec un caractere
}
my[0]=m[0]; //initialisation du tableau avec un nombre
my[text-1]=m[text-1];
for (i=0;i<text;i++){
printf("%c",my[i]); // variable printf pour afficher a l'écran le message voulu
}

//printf("\nVous avez nombre d'essai\n");
my[0]=m[0]; 	//on remplace la lettre choisi dans les deux tableaux
my[text-1]=m[text-1];
printf("\n Proposez une lettre pour trouver : ");
for (i=0;i<text;i++){
	
printf("\ntape une lettre :",m[i]); // variable printf pour afficher a l'écran le message voulu
scanf("\n%c",&reponse);
if (reponse == m[i]) {
	printf("Bravo  !\n %c %c ", m[i], reponse);
	
}

if (reponse != m[i]) {
	printf("Faux !\n ");
	

}

}


}




