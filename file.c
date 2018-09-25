#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "file.h"
#include "person.h"
#include "connected_menu.h"

#define PERSON_FILE_NAME "person.txt"


int connection(char* login, char* password){

    person person;
    FILE* file = NULL;

    int student_found = 0;
    int return_value, i;

    file = fopen(PERSON_FILE_NAME, "a+");

    if(file == NULL){

        return -1;
    }

    fseek(file, 0, SEEK_SET);

    do{

        // fill struct person
        return_value = fscanf(file, "%s %s %s %s %s %s %s %s %s %s %s %s %s", person.registration_number, person.last_name, person.first_name, person.birth_date, person.sexe, person.registration_date, person.street, person.postal_code, person.city, person.phone_number, person.mobile_phone_number, person.login, person.password);

        // if struct person fully filled
        if(return_value == 13){


            // if student exists
            if( (strcmp(login, person.login) == 0) && (strcmp(password, person.password) == 0) ){

                student_found = 1;

            }

        }


    }while( (return_value != EOF) && (student_found == 0) );

    fclose(file);


    if(student_found){

        // Replace ; by spaces
        for(i=0;i<CHAR_LENGTH; i++){
            if(person.street[i] == ';'){

                person.street[i] = ' ';
            }
            if(person.first_name[i] == ';'){

                person.first_name[i] = ' ';
            }
            if(person.last_name[i] == ';'){

                person.last_name[i] = ' ';
            }
            if(person.city[i] == ';'){

                person.city[i] = ' ';
            }

        }

        print_connected_menu(person);
    }
    else{

        printf("\nEchec de connexion.\n");
        print_connection_menu();
    }
}

