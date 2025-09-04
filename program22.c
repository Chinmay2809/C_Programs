// Write a C program to find profit or loss percentage given cost price and selling price.

#include <stdio.h> 
int main() {
    float costPrice, sellingPrice, amount; 
    float profitPercentage, lossPercentage; 

    
    printf("Enter the Cost Price (CP): ");
    scanf("%f", &costPrice);

   
    printf("Enter the Selling Price (SP): ");
    scanf("%f", &sellingPrice); 

   
    if (sellingPrice > costPrice) {
        amount = sellingPrice - costPrice; 
        profitPercentage = (amount / costPrice) * 100; 
        printf("\nProfit: %.2f\n", amount); 
        printf("Profit Percentage: %.2f%%\n", profitPercentage); 
    }
    
    else if (costPrice > sellingPrice) {
        amount = costPrice - sellingPrice; 
        lossPercentage = (amount / costPrice) * 100; 
        printf("\nLoss: %.2f\n", amount); 
        printf("Loss Percentage: %.2f%%\n", lossPercentage); 
    }
   
    else {
        printf("\nNo Profit, No Loss.\n"); 
    }

    return 0; 
}