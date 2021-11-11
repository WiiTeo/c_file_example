#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 *
 *
 * (C) 2021 WiiTeo
 * C File Example
 *
 *
 */

int main(int argc, char *argv[])
{
      system("color 4f");
      int nombreDeVies = 5, niveau = 1;

      printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");

      printf("Vous avez %d vies et vous etes au niveau %d\n", nombreDeVies, niveau);

      printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");

      unsigned long gameid = 100012;

      printf("Le GameID de votre jeu est %ld \n", gameid);

      printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");

      const unsigned long VARIABLE_NON_CHANGEABLE = 78;

      printf("Valeur d'une variable const : %ld\n", VARIABLE_NON_CHANGEABLE);

      printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");

      unsigned int calcul = 0;
      calcul = 5 + 3;

      printf("Resultat : %d\n", calcul);

      printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");

      unsigned int multiplier = 0;
      multiplier = 5 * 3;

      printf("Resultat : %d\n", multiplier);

      printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");

      unsigned int soustraction = 0;
      soustraction = 5 - 3;

      printf("Resultat : %d\n", soustraction);

      printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");

      double division = 0;
      division = 5.0 / 2.0;

      printf("Resultat : %lf \n", division);

      printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");

      unsigned int modulo = 0;
      modulo = 5 % 2;

      printf("Resultat : %d \n", modulo);

      printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");

      unsigned long total = 0;
      total = calcul + soustraction + multiplier + division + modulo;

      printf("Nombre total : %ld\n", total); // Cela affichera 28 avec pas de nombre decimal car on a pas declare la variable avec double ou float.

      printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");

      unsigned long raccourci = 0;
      raccourci = raccourci + 1;

      printf("Resultat : %ld \n", raccourci);

      printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");

      unsigned long incrementation = 0;
      incrementation++;

      printf("Resultat : %ld \n", incrementation);

      printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");

      unsigned long decrementation = 0;
      decrementation--;

      printf("Resultat : %ld \n", decrementation);

      printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");

      unsigned long mulitpletation = 2;
      mulitpletation *= 3;

      printf("Resultat : %ld \n", mulitpletation);

      printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");

      unsigned long addtation = 2;
      addtation += 3;

      printf("Resultat : %ld \n", addtation);

      printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");

      unsigned long soustation = 2;
      soustation -= 3;

      printf("Resultat : %ld \n", soustation);

      printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");

      unsigned long divitation = 9;
      divitation /= 3;

      printf("Resultat : %ld \n", divitation);

      printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");

      unsigned long modulotation = 9;
      modulotation %= 2;

      printf("Resultat : %ld \n", modulotation);

      printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");

      double absolu = 0, nombre = -27;

      absolu = fabs(nombre); // OPPOSE DU CHIFRE

      printf("Resultat : %lf \n", absolu);

      printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");

      double dessus = 0, nombres = 56.15;

      dessus = ceil(nombres); // ARRONDIS A CHIFRE ENTIER AU DESSUS

      printf("Resultat : %lf \n", dessus);

      printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");

      double zndessus = 0, nombrex = 56.79;

      zndessus = floor(nombrex); // ARRONDIS A CHIFRE ENTIER EN DESSOUS

      printf("Resultat : %lf \n", zndessus);

      printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");

      double resultat = 0, nombrev = 2;

      resultat = pow(nombrev, 3); // PUISSANCE

      printf("Resultat : %lf \n", resultat);

      printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");

      double resultats = 0, nombrel = 100;

      resultats = sqrt(nombrel); // RACINE CARRE D'UN NOMBRE

      printf("Resultat : %lf \n", resultats);

      printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
      printf("°°°°°°°°°°°°°°°°°IF ELSE°°°°°°°°°°°°°°°°°°°\n");
      printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");

      unsigned long age = 27;
      unsigned long fric = 100000;

      if (age >= 50 && fric >=  90000) // == egal, > plus grand que, < plus petit que, >= plus grand ou egal a, <= plus petit ou egal a, != est different de // || = OU, && = ET, ! = NON
      {
          printf("Manger le poule...\n");
      }
      else if (age < 50)
      {
          printf("Mange juste une cuisse\n");
      }
      else
      {
          printf("Ne mange pas le pouler !\n");
      }

      if (!(age < 29)) // Inverse
      {
          printf("NON\n");
      }
      else
      {
          printf("OUI\n");
      }

      if (1) // 0 = FAUX , 1+ = VRAI
      {
          printf("OKAY\n");
      }
      else
      {
          printf("NON\n");
      }

      int agse = 20;
      int majseur = 0;

      majseur = agse >= 18;
      printf("Majeur vaut : %d\n", majseur); // Renvoie 1 car la condition est vrai, sinon cela renvoie 0

      int agew = 1;
      int garcon = 1;

      if (!(agew && garcon)) // Cela met Mauviette car on inverse les conditions grace a NON.
      {
          printf("Tu est un grand garcon !\n");
      }
      else
      {
          printf("Tu est une mauviette !\n");
      }

      printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
      printf("°°°°°°°°°°°°°°°°°SWITCH°°°°°°°°°°°°°°°°°°°°\n");
      printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");

      int agde = 148;

      switch (agde) // Remplace ELIF ET IF par des choses plus simples.
      {
      case 2:
          printf("Salut personne de 2 ans\n");
          break;
      case 10:
          printf("Salut personne de 10 ans\n");
          break;
      case 18:
          printf("Salut personne majeur\n");
          break;
      default:
          printf("j'ai rien trouver pour toi deso\n");
          break;
      }

      system("cls");

      printf("\t\tMcDonals Menu\n");

      printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");

      printf("\t1. Cheesburger\n");
      printf("\t2. Hamburger\n");
      printf("\t3. Frite\n");

      unsigned int mcdorep = 0;

      printf("Choisis un nombre : ");

      scanf("%d", &mcdorep);

      switch (mcdorep)
      {
      case 1:
          printf("\nTu a choisis le cheesburger\n");
          break;
      case 2:
          printf("\nTu a choisis le hamburger\n");
          break;
      case 3:
          printf("\nTu a choisis les frites\n");
          break;
      default:
          printf("\nErreur: Tu a choisis autre chose que ce presenter !\n\n");
          break;
      }

      printf("\nFin du menu mcdo\n");
      printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");

      int ymajeur = 1; // 0 = FAUX , 1+ = VRAI

      if (ymajeur)
        ymajeur++;
      else
        ymajeur--;

      printf("Valeur de ymajeur : %d \n", ymajeur);

      printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");

      int yaged = 19;
      int ysmajeur = 18;

      yaged = (ysmajeur>yaged) ? 18 : 17; // Compliqué mais engros c'est une condition if else mais abregé en une seul ligne

      printf("Valeur de yaged : %d \n", yaged);

      printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");

      system("cls");

      printf("\t\tBoucles\n");

      printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");

      int nombreEntree = 0;

      while (nombreEntree != 47)
      {
          printf("Tapez 47 :\n");
          scanf("%d", &nombreEntree);
      }

      printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");

      int compteur = 0;

      while (compteur < 10)
      {
          printf("\nLa variable compteur vaut %d \n", compteur);
          compteur++;
      }

      printf("\n\nValeur de compteur : %d \n\n", compteur);

      printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");

      /*while (1)
      {
          printf("\nELLE VAUT MAINTENANT FERMEZ LA CONSOLE POUR ARRETE ! : %d \n", compteur); // EXAMPLES DE BOUCLES INFINI
          compteur++;
      }*/

      printf("\n\nBoucle Infini desactiver.\n\n");
      printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");

      int copmteur = 0;

      do
      {
          printf("\nHello %d \n", copmteur);
          copmteur++;
      } while (copmteur < 11); // Mettre un de plus pour afficher 10 mais la memoire a 11

      copmteur--; // Cela met 10 au lieu de 11 dans la memoire, et affiche 10 a l'ecran en ayant 10 dans la memoire.

      printf("\nValeur de copmteur : %d \n", copmteur);

      printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");

      int zcompteur;

      for (zcompteur = 0 ; zcompteur < 10 ; zcompteur++)
      {
          printf("Repete cette action 10 fois dans une boucle for, Nombre mtn : %d \n", zcompteur);
      }

      printf("\nValeur du nombre zcompteur : %d \n\n", zcompteur);

      system("cls");

      printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
      printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
      printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
      printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
      printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");

      int nombreMystere = 0, nombreEntre = 0;
      const int MAX = 100, MIN = 1;

    // Génération du nombre aléatoire

    srand(time(NULL));
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

    /* La boucle du programme. Elle se répète tant que l'utilisateur n'a pas trouvé le nombre mystère */

    do
    {
        // On demande le nombre
        printf("Quel est le nombre ? ");
        scanf("%d", &nombreEntre);

        // On compare le nombre entré avec le nombre mystère

        if (nombreMystere > nombreEntre)
            printf("C'est plus !\n\n");
        else if (nombreMystere < nombreEntre)
            printf("C'est moins !\n\n");
        else
            printf ("Bravo, vous avez trouve le nombre mystere !!!\n\n");
    } while (nombreEntre != nombreMystere);

      printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
      printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
      printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
      printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");

      printf("\nFin de monprogramme.exe\n\n");

      printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");

      unsigned int reponse = 0;

      printf("Choisis un nombre : ");
      scanf("%d", &reponse);

      printf("\nLe Nombre choisi est : %d\n", reponse);

      unsigned long retvar = 0;

      return retvar;
}
