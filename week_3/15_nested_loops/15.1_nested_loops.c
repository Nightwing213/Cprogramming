/*

Nested loops

*/
// similar to the code homework
#include <stdio.h>

void printRectangle(int rows, int cols);

int main(void){

    /*for(int i = 1; i < 5; i++){
        int j = 0;
        while (j < i){
            printf("%d ", j);
            j++;
        }
    }*/
    int rows, cols;
    do{
        printf("Print a rectangle\n");
        printf("Enter rows: ");
        scanf("%d", &rows);
        printf("Enter columns: ");
        scanf("%d", &cols);
    } while (rows <= 0 || cols <= 0);
    
    printRectangle(rows, cols);
    


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