#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

#define CHAR_LENGTH 50


typedef struct {

    char registration_number[CHAR_LENGTH];
    char first_name[CHAR_LENGTH];
    char last_name[CHAR_LENGTH];
    char birth_date[CHAR_LENGTH];
    char sexe[CHAR_LENGTH];
    char registration_date[CHAR_LENGTH];
    char street[CHAR_LENGTH];
    char postal_code[CHAR_LENGTH];
    char city[CHAR_LENGTH];
    char phone_number[CHAR_LENGTH];
    char mobile_phone_number[CHAR_LENGTH];
    char login[CHAR_LENGTH];
    char password[CHAR_LENGTH];

} person ;


#endif // PERSON_H_INCLUDED
