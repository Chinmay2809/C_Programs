// Write a C program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *
   * 

   #include <stdio.h>

int main() {
    int rows = 4; 
    int i, j, space;

    
    for (i = 1; i <= rows; i++) {
       
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

  
    for (i = rows - 1; i >= 1; i--) {
      
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }
       
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    
    for (space = 1; space <= rows - 1; space++) {
        printf(" ");
    }
    printf("*\n");

    return 0;
}