#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main_menu.h"
#include "person.h"
#include "file.h"

void print_main_menu(void){

    int choice = -1;
    int ask_again = 1;

    printf("\n\n-----Menu principal-----\n\n");

    printf("1 = Connexion\n");
    printf("0 = Quitter\n");

    do{

        printf("\nChoix : ");

        fflush(stdin);
        scanf("%d", &choice);

        if( (choice == 0) || (choice == 1) ){

            ask_again = 0;
        }

    }while(ask_again);


    if(choice == 1){

        print_connection_menu();

    }
    else if(choice == 0){

        exit(0);

    }

}

void print_connection_menu(void){

    char login[CHAR_LENGTH];
    char password[CHAR_LENGTH];

    int ask_again = 1;

    printf("\n\n-----Menu de connexion-----\n\n");

    printf("\nNom de compte : ");

    fflush(stdin);

    fgets(login, CHAR_LENGTH, stdin);

    printf("\nMot de passe : ");

    fflush(stdin);

    fgets(password, CHAR_LENGTH, stdin);

    login[strcspn(login, "\n")] = 0; // remove \n from string
    password[strcspn(password, "\n")] = 0; // remove \n from string

    connection(login, password);

}
