#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TITLE 100
#define MAX_AUTHOR 100
#define MAX_BOOKS 100

typedef struct {
    char title[MAX_TITLE];
    char author[MAX_AUTHOR];
    int pages;
    int price;
} Book;

void printBookInfo(const Book *book) {
    printf("-------------------------------------------------------\n");
    printf("Author:\t\t%s\n", book->author);
    printf("Title:\t\t%s\n", book->title);
    printf("Pages:\t\t%d\n", book->pages);
    printf("Price:\t\t%d\n", book->price);
    printf("-------------------------------------------------------\n");
}

int minPriceBook(const Book *library, int size) {
    int minIndex = 0;
    for (int i = 1; i < size; i++) {
        if (library[i].price < library[minIndex].price) {
            minIndex = i;
        }
    }
    return minIndex;
}

int main() {
    Book library[MAX_BOOKS];
    FILE *fp = fopen("books.txt", "r");
    if (!fp) {
        printf("Error opening file.\n");
        return 1;
    }

    char line[256];
    int count = 0;


    while (fgets(line, sizeof(line), fp) && count < MAX_BOOKS) {
        char *token = strtok(line, ",");
        if (!token) continue;
        strcpy(library[count].title, token);

        token = strtok(NULL, ",");
        strcpy(library[count].author, token);

        token = strtok(NULL, ",");
        library[count].pages = atoi(token);

        token = strtok(NULL, ",");
        library[count].price = atoi(token);

        count++;
    }

    fclose(fp);

    // Print all books
    for (int i = 0; i < count; i++) {
        printf("Book# %d\n", i + 1);
        printBookInfo(&library[i]);
    }

    // Find and print minimum price book
    int minIndex = minPriceBook(library, count);

    printf("The book with the minimum price is\n");
    printBookInfo(&library[minIndex]);

    return 0;
}
