#include <stdio.h>
#include <string.h>

#define MAX_CARTS 100
#define MAX_VILLES 10


struct Birthday {
    int year;
    int month;
    int day;
};

struct CartNational {
    char id[20];
    char cin[20];
    char firstName[30];
    char lastName[30];
    struct Birthday birthday;
    char ville[30];
};

// typedef struct {
//     char id[20];
//     char cin[20];
//     char firstName[30];
//     char lastName[30];
//     struct Birthday birthday;
//     char ville[30];
// } CartNational;

// CartNational carts[MAX_CARTS];

struct CartNational carts[MAX_CARTS];
int count = 0;

const char *villes[MAX_VILLES] = {
    "Casablanca",
    "Rabat",
    "Marrakech",
    "Fes",
    "Tanger",
    "Agadir",
    "Oujda",
    "Meknes",
    "Essaouira",
    "Taza"
};


// Function prototypes
void addCart();
void displayCarts();
void updateCart();
void deleteCart();
char* generateID(int count);
void sortCartsByFirstName();
void displayTotalCarts();


int main() {
    // Adding default values
    struct CartNational defaultCarts[3] = {
        {"CART001", "CIN001", "John", "Doe", {1990, 1, 15}, "Meknes"},
        {"CART002", "CIN002", "Jane", "Smith", {1985, 2, 20}, "Tanger"},
        {"CART003", "CIN003", "Alice", "Brown", {2000, 3, 25}, "Casablanca"}
    };

    for (int i = 0; i < 3; i++) {
        carts[count++] = defaultCarts[i];
    }

    int choice;

    do {
        printf("Menu:\n");
        printf("1. Add Cart\n");
        printf("2. Display Carts\n");
        printf("3. Update Cart\n");
        printf("4. Delete Cart\n");
        printf("5. Sort Carts by First Name\n");
        printf("6. Total Carts\n");
        printf("0. Quit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // To consume newline character

        switch (choice) {
            case 1:
                addCart();
                break;
            case 2:
                displayCarts();
                break;
            case 3:
                updateCart();
                break;
            case 4:
                deleteCart();
                break;
            case 5:
                sortCartsByFirstName(); // Call the sort function
                break;
            case 6:
                displayTotalCarts();
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 0);

    return 0;
}

char* generateID(int count) {

     static char id[20];
    sprintf(id, "CART%03d", count + 1);
    return id;
}

void addCart() {
    
    if (count >= MAX_CARTS) {
        printf("Cart array is full!\n");
        return;
    }

    struct CartNational newCart;

    printf("Enter CIN: ");
    fgets(newCart.cin, sizeof(newCart.cin), stdin);
    newCart.cin[strcspn(newCart.cin, "\n")] = 0; // Remove newline

    printf("Enter First Name: ");
    fgets(newCart.firstName, sizeof(newCart.firstName), stdin);
    newCart.firstName[strcspn(newCart.firstName, "\n")] = 0;

    printf("Enter Last Name: ");
    fgets(newCart.lastName, sizeof(newCart.lastName), stdin);
    newCart.lastName[strcspn(newCart.lastName, "\n")] = 0;

    printf("Enter Birthday (YYYY MM DD): ");
    scanf("%d %d %d", &newCart.birthday.year, &newCart.birthday.month, &newCart.birthday.day);
    getchar(); // To consume newline character

    // Display list of villes
    printf("Choose a Ville:\n");
    for (int i = 0; i < MAX_VILLES; i++) {
        printf("%d. %s\n", i + 1, villes[i]);
    }

    int villeChoice;
    printf("Enter your choice (1-%d): ", MAX_VILLES);
    scanf("%d", &villeChoice);
    getchar(); // To consume newline character

    if (villeChoice >= 1 && villeChoice <= MAX_VILLES) {
        strcpy(newCart.ville, villes[villeChoice - 1]);
    } else {
        printf("Invalid choice, defaulting to 'Unknown'.\n");
        strcpy(newCart.ville, "Unknown");
    }
    char* newID = generateID(count); // Call the generateID function
    strcpy(newCart.id, newID); // Copy the generated ID into newCart.id
    carts[count++] = newCart;
    printf("Cart added successfully! ID: %s\n", newCart.id);
    }

void displayCarts() {
    if (count == 0) {
        printf("No carts to display.\n");
        return;
    }

    printf("\n%12s | %-10s | %-15s | %-15s | %12s | %-10s\n", "ID", "CIN", "First Name", "Last Name", "Birthday", "Ville");
    printf("-------------------------------------------------------------------------------------------\n");
    for (int i = 0; i < count; i++) {
        printf("%12s | %-10s | %-15s | %-15s | %04d-%02d-%02d | %-10s\n",
               carts[i].id,
               carts[i].cin,
               carts[i].firstName,
               carts[i].lastName,
               carts[i].birthday.year,
               carts[i].birthday.month,
               carts[i].birthday.day,
               carts[i].ville);
    }
    printf("-------------------------------------------------------------------------------------------\n");
}

void updateCart() {
    char id[20];
    printf("Enter the ID of the cart to update: ");
    fgets(id, sizeof(id), stdin);
    id[strcspn(id, "\n")] = 0; // Remove newline

    for (int i = 0; i < count; i++) {
        if (strcmp(carts[i].id, id) == 0) {
            printf("Updating Cart ID: %s\n", carts[i].id);

            printf("Enter new CIN (or press Enter to keep current): ");
            char newCIN[20];
            fgets(newCIN, sizeof(newCIN), stdin);
            if (strlen(newCIN) > 1) {
                newCIN[strcspn(newCIN, "\n")] = 0; // Remove newline
                strcpy(carts[i].cin, newCIN);
            }

            printf("Enter new First Name (or press Enter to keep current): ");
            char newFirstName[30];
            fgets(newFirstName, sizeof(newFirstName), stdin);
            if (strlen(newFirstName) > 1) {
                newFirstName[strcspn(newFirstName, "\n")] = 0;
                strcpy(carts[i].firstName, newFirstName);
            }

            printf("Enter new Last Name (or press Enter to keep current): ");
            char newLastName[30];
            fgets(newLastName, sizeof(newLastName), stdin);
            if (strlen(newLastName) > 1) {
                newLastName[strcspn(newLastName, "\n")] = 0;
                strcpy(carts[i].lastName, newLastName);
            }

            printf("Enter new Birthday (YYYY MM DD) (or press Enter to keep current): ");
            char input[50];
            fgets(input, sizeof(input), stdin);
            if (strlen(input) > 1) {
                scanf(input, "%d %d %d", &carts[i].birthday.year, &carts[i].birthday.month, &carts[i].birthday.day);
            }

            printf("Enter new Ville (or press Enter to keep current): ");
            char newVille[30];
            fgets(newVille, sizeof(newVille), stdin);
            if (strlen(newVille) > 1) {
                newVille[strcspn(newVille, "\n")] = 0;
                strcpy(carts[i].ville, newVille);
            }

            printf("Cart updated successfully!\n");
            return;
        }
    }
    printf("Cart with ID %s not found.\n", id);
}

void deleteCart() {
    char id[20];
    printf("Enter the ID of the cart to delete: ");
    fgets(id, sizeof(id), stdin);
    id[strcspn(id, "\n")] = 0; // Remove newline

    for (int i = 0; i < count; i++) {
        if (strcmp(carts[i].id, id) == 0) {
            for (int j = i; j < count - 1; j++) {
                carts[j] = carts[j + 1]; // Shift left
            }
            count--;
            printf("Cart with ID %s deleted successfully!\n", id);
            return;
        }
    }
    printf("Cart with ID %s not found.\n", id);
}

// Function to sort carts by First Name
void sortCartsByFirstName() {
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (strcmp(carts[j].firstName, carts[j + 1].firstName) > 0) {
                struct CartNational temp = carts[j];
                carts[j] = carts[j + 1];
                carts[j + 1] = temp;
            }
        }
    }
    printf("Carts sorted by First Name successfully!\n");
}

void displayTotalCarts() {
    printf("Total Carts: %d\n", count);
}
