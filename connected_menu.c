#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "main_menu.h"
#include "file.h"
#include "person.h"
#include "connected_menu.h"

void print_connected_menu(person person){

    int choice = -1;
    int ask_again = 1;

    printf("\n\n-----Bienvenue %s !-----\n\n", person.first_name);

    printf("1 = Afficher planning\n");
    printf("2 = Afficher informations\n");
    printf("3 = Deconnexion\n");
    printf("0 = Quitter\n");

    do{

        printf("\nChoix : ");

        fflush(stdin);
        scanf("%d", &choice);

        if( (choice == 0) || (choice == 1) || (choice == 2) || (choice == 3)){

            ask_again = 0;
        }

    }while(ask_again);


    if(choice == 1){

        //print_connection_menu();

    }
    else if(choice == 2){

        print_informations(person);

    }
    else if(choice == 3){

        print_main_menu();

    }
    else if(choice == 0){

        exit(0);

    }

}

void print_informations(person person){

    printf("\n\n-----Informations-----\n\n");

    printf("Nom : %s - Prenom : %s - Matricule : %s\n", person.last_name, person.first_name, person.registration_number);
    printf("Ne(e) le %s - Sexe : %s\n", person.birth_date, person.sexe);
    printf("Adresse : %s\n%s %s\n", person.street, person.postal_code, person.city);
    printf("Fixe : %s - Mobile : %s\n", person.phone_number, person.mobile_phone_number);


    printf("\nAppuyez sur une entree pour revenir au menu precedent.\n");

    fflush(stdin);
    scanf("%*c"); // Wait

    print_connected_menu(person);
}
