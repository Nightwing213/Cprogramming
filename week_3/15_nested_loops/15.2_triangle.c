#include <stdio.h>
#include <unistd.h> //usleep()

void printRectangle(int rows, int cols);
void printTriangle(int size);
void printbottomTriangle(int size);
void printbottomrightTriangle(int size);

int main(void){

    /*for(int i = 1; i < 5; i++){
        int j = 0;
        while (j < i){
            printf("%d ", j);
            j++;
        }
    }*/
    int rows, cols;
    int size;
    do{
        printf("Print a rectangle\n");
        printf("Enter rows: ");
        scanf("%d", &rows);
        printf("Enter columns: ");
        scanf("%d", &cols);
    } while (rows <= 0 || cols <= 0);
    
    printRectangle(rows, cols);
    
    do{
        printf("Enter triangle size:");
        scanf("%d", &size);
    } while (size <= 0);
   /*for(int i = 0; i< 1000; i++){
    printTriangle(size);
    printbottomTriangle(size);
    }*/
   printbottomrightTriangle(size);
    return 0;
}

void printRectangle(int rows, int cols){
    for(int i = 0; i < rows; i++){
        for(int j =0; j < cols; j++){
            if((i == 0 && j == 0 )||
            (i == 0 && j == cols -1) ||
            ( i == rows -1 && j == cols -1)|| 
            (i == rows -1 && j == 0)){
                printf("%c", '0');
            }
            else if(j == 0 || j == cols -1 || i == 0 || i == rows -1){
                printf("%c", '*');
            }
            else{
                printf("%c",' ');
            }
        }
        puts("");
    }
}
void printTriangle(int size){
 for (int i = 0; i < size; i++){
    for(int j = 0; j < size - i; j++){
        printf("%c", '*');
        usleep(3000);
    }
    puts("");
 }
}
void printbottomTriangle(int size){
    for (int i = 0; i < size; i++){
    for(int j = 0; j <=i; j++){
        printf("%c", '*');
        usleep(3000);
    }
    puts("");
 }
}
void printbottomrightTriangle(int size){
    for(int i = 0; i < size; i++){
        // print leading space
        for(int j = 0; j < size - 1 - i; j++){
            printf("%c", ' ');
        }
        for (int j = 0; j <= i; j++){
            printf("%c", '*');
        }
        puts("");
    }
}