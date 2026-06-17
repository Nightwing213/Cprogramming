#include <stdio.h>



int main(void){
    int arrow_body = 0;
    int arrow_head = 0;
    scanf("%d", &arrow_body);
    scanf("%d", &arrow_head);

    printf("    %d\n", arrow_head);
    printf("    %d%d\n", arrow_head, arrow_head);
    printf("%d%d%d%d%d%d%d\n", arrow_body, arrow_body, arrow_body, arrow_body, arrow_head, arrow_head, arrow_head);
    printf("%d%d%d%d%d%d%d%d\n", arrow_body, arrow_body, arrow_body, arrow_body, arrow_head, arrow_head, arrow_head, arrow_head);
    printf("%d%d%d%d%d%d%d\n", arrow_body, arrow_body, arrow_body, arrow_body, arrow_head, arrow_head, arrow_head);
    printf("    %d%d\n", arrow_head, arrow_head);
    printf("    %d\n", arrow_head);

    return 0;
} 