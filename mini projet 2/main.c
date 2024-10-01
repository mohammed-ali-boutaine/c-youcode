#include <stdio.h>
#include <string.h>

// constant
#define MAX_CONTACTS 1000

// contact structer
typedef struct {
    char nom[25];
    char tel[25];
    char email[50];
} Contact;


// functions
void ajouterContact();
void modifieContact();
void supprimerContact();
void showContacts();
void recherContact();

void showContact();
int isContactExists();

// global variables
int counter=0;
char nom[25];
char tel[25];
char email[50];

Contact contacts[MAX_CONTACTS] ;

int main(){


    // defualt values:

     Contact defaultContact[3] = {
        {"police", "19", "police.maroc@gmail.com"},
        {"ahmed", "0600000000", "ahmed@gmail.com"},
        {"ali",   "0611111111", "ali98172@gmail.com"}
    };

    for (int i = 0; i < 3; i++) {
        contacts[counter] = defaultContact[i];
        counter++;
    }



    do{
        int choix;

        //-------- MENU
        printf("Menu:\n");
        printf("1. Ajouter un Contact\n");
        printf("2. Modifier un Contact\n");
        printf("3. Supprimer un Contact\n");
        printf("4. Afficher Tous les Contacts\n");
        printf("5. Rechercher un Contact\n");
        printf("0. Quit\n");

        //-------- input
        printf("votre choix: ");
        scanf("%d",&choix);
        //getchar();

        // --------  options
        switch(choix){
            case 1:
                ajouterContact();
                break;

            case 2:
                modifieContact();
                break;

            case 3:
                supprimerContact();
                break;

            case 4:
                showContacts();
                break;

            case 5:
                recherContact();
                break;

            case 0:
                return 0;
        }

    }while(1);
    return 0;
}

void ajouterContact(){
    if(counter < MAX_CONTACTS){
        getchar();
        printf("neveau nom: ");
        fgets(nom,sizeof(nom),stdin);
        nom[strcspn(nom, "\n")] = 0; // Remove newline


        printf("neveau tel: ");
        scanf("%s",tel);

        printf("neveau email: ");
        scanf("%s",email);

        strcpy(contacts[counter].nom,nom);
        strcpy(contacts[counter].tel,tel);
        strcpy(contacts[counter].email,email);

        printf("added sussfly\n");
        counter++;


    }else{
        printf("contacts est plein\n");
    }
}


void modifieContact(){

        getchar();
        printf("nom pour recher: ");
        fgets(nom,sizeof(nom),stdin);
        nom[strcspn(nom, "\n")] = 0;


        int index = isContactExists(nom);
        if(index != -1 ){

                printf("neveau tel(or press Enter to keep current): ");
                scanf("%s",tel);
                printf("neveau email(or press Enter to keep current): ");
                scanf("%s",email);

                if (strlen(tel) > 1) {
                    strcpy(contacts[index].tel,tel);
                }

                if (strlen(email) > 1) {
                    strcpy(contacts[index].email,email);
                }
                printf("Contact updated successfully!\n");


        }else{
            printf("Cette Contact ne exis pas\n");

        }

};
void supprimerContact(){


        getchar();
        printf("nom pour recher: ");
        fgets(nom,sizeof(nom),stdin);
        nom[strcspn(nom, "\n")] = 0; // Remove newline


        int index = isContactExists(nom);
        if(index != -1 ){

            for(int j = index ; j < counter-1 ; j++){
                contacts[j]=contacts[j+1] ;
            }
            counter--;
            printf("%s deleted successfully!\n", nom);
            return;

        }

        printf("cette contact(%s) ne exis pas\n",nom);




};
void showContacts(){

    if(counter == 0){
        printf("no contacts to show\n");
        return;
    }else{

    printf("\n  %-15s | %-15s | %-20s \n", "Nom", "Tel", "Email");
    for (int i = 0; i < counter; i++) {
        showContact(contacts[i]);
    }
    printf("---------------------------------------------------------------------\n");


    }

};

void recherContact(){

        getchar();
        printf("nom pour recher: ");
        fgets(nom,sizeof(nom),stdin);
        nom[strcspn(nom, "\n")] = 0; // Remove newline

        int indx =isContactExists(nom);
        if(indx != -1 ){
            printf("\n  %-15s | %-15s | %-20s \n", "Nom", "Tel", "Email");
                showContact(contacts[indx]);
                printf("---------------------------------------------------------------------\n");

        }else{
            printf("cette contact ne exis pas\n");

        }

};

int isContactExists(char* nom){

    for(int i=0 ; i < counter ; i++){
            if(strcmp(contacts[i].nom ,nom) == 0 ){
                return i;
            }
        }
    return -1;

}
void showContact(Contact c){
    printf("---------------------------------------------------------------------\n");
    printf("  %-15s | %-15s | %-20s  \n",
               c.nom,
               c.tel,
               c.email
            );
}
