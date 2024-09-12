#include <stdio.h>

	int main() {
	    float cost, discount, amountSaved, finalAmount;
	
	    printf("Enter the total cost of items: ");
	    scanf("%f", &cost);
	
	    discount = 0;
	
	    if (cost >= 500) {
	        if (cost < 2000) {
	            discount = 0.05;
	        } else if (cost >= 2000 && cost <= 4000) {
	            discount = 0.10;
	        } else if (cost > 4000 && cost <= 6000) {
	            discount = 0.20;
	        } else if (cost > 6000) {
	            discount = 0.35;
	        }
	
	        amountSaved = cost * discount;
	        finalAmount = cost - amountSaved;
	
	        printf("Actual amount: %.2f\n", cost);
	        printf("Amount saved: %.2f\n", amountSaved);
	        printf("Amount after discount: %.2f\n", finalAmount);
	    } else {
	        printf("The total cost is less than 500, no discount applied.\n");
	        printf("Amount to be paid: %.2f\n", cost);
	    }
	
	    return 0;
	}

