#include <stdio.h>
#include <string.h>

#define INPUT_SIZE 100
typedef struct {
    char name[50];
    int quantity;
    double price;
    
}Grocery;

void createFile(const char* file_name);
void readFile(const char* file_name);
int showMenu(void);
void run(int option);
Grocery getGrocery(void);
void addGroceryItem(const Grocery* item);

int main(void){
    //createFile("test.txt");

    //readFile("test.txt");
    int op;
    while((op = showMenu()) != 5){
        run(op);
   }

    return 0;
}

void createFile(const char* file_name){
    FILE* file = fopen(file_name, "w");
    if (file == NULL){
        printf("Cannot open '%s'\n", file_name);
        return;
    }

    fprintf(file,"======= GROCERY LIST =======\n");
    //fprintf(file,"three.four.twenty two.%d\n", 11);

    fclose(file);
}

void readFile(const char* file_name){
    FILE* file = fopen(file_name, "r");
    if (file == NULL){
        printf("Cannot open '%s'\n", file_name);
        return;
    }

    char input[INPUT_SIZE];
    while (fgets(input, INPUT_SIZE, file)) {
        puts(input);
    }

    fclose(file);
}


int showMenu(void){
    int input;
    while (1){
    puts("======= GROCERY LIST MANAGER =======");
    puts("1. Create Grocery list");
    puts("2. Display Grocery list");
    puts("3. ADD Grocery list");
    puts("4. ");
    puts("5. Exit");
    printf("\n Enter an option: ");
    scanf("%d", &input);
    if(input < 1 || input > 5){
        puts ("\nIncorrect input. Try again!\n");
    }
    else {
        break;
        }
    }
    return input;
}
void run(int option){
    if (option == 1){
        createFile("groceries.txt");
        printf("\n The file\"groceries.txt\" was created!\n\n");
    } else if (option == 2) {
        puts("\n");
        readFile("groceries.txt");
        puts("\n");
    } else if (option == 3){
        Grocery item = getGrocery();
        addGroceryItem(&item);

    }
}
Grocery getGrocery(void){
    Grocery item;
    printf("Item name: ");
    scanf("%s", item.name);

    printf("Item quantity: ");
    scanf("%d", &item.quantity);

    printf("Item price: ");
    scanf("%lf", &item.price);

    return item;
}

void addGroceryItem(const Grocery* item){
    FILE* file = fopen("groceries.txt", "a");
    if (file == NULL){
        printf("Cannot open '%s'\n", "groceries.txt");
        return;
    }

    fprintf(file, "%s %d %.2lf\n", item->name, item->quantity, item->price);
    fclose(file);
}
