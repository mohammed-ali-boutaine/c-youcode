
#include <stdio.h>
#include <string.h>  


void challenge1(){

    typedef struct {
        char nom[25];
        char prenom[25];
        int age;

    }Personne;

    Personne p1 = {"bou","med ali",20};

    printf("nom: %s ,prenom: %s , age: %d",p1.nom,p1.prenom,p1.age);

}

/////////////////////////
void challenge2(){

    typedef struct {
        char nom[25];
        char prenom[25];
        int notes[20];

    }Etudiant;

    Etudiant e1 = {"bou","med ali",{18,20,19} };

    printf("nom: %s ,prenom: %s , notes: %d %d %d",e1.nom,e1.prenom,e1.notes[0],e1.notes[1],e1.notes[2]);

}

/////////////////////////
void challenge3(){

    typedef struct {
        int longueur;
        int largeur;

    }Rectangle;

    int airRectange(Rectangle r){
        return r.longueur * r.largeur;
    }
    Rectangle r1 = {3,5};

    printf("air:%d",airRectange(r1));

}

/////////////////////////
void challenge4(){

    typedef struct {
        int x;
        int y;

    }Point;

    Point p ={3,2};
    Point* ptr = &p;

    printf("x:%d , y:%d",ptr->x , ptr->y);

}

/////////////////////////
void challenge5(){

    typedef struct {
        char titre[25];
        char auteur[25];
        char annee[15];
    }Livre;

    Livre addLivre(char t[25],char a[25],char anne[15]){
        
        Livre l1;

        strcpy(l1.titre, t);
        strcpy(l1.auteur, a);
        strcpy(l1.annee, anne);
        
        return l1;



    }

    Livre l1 = addLivre("book","ali b","2024-10-01");
    printf("%s",l1.titre);

}

int main(){
    challenge5();

    return 0;
}
