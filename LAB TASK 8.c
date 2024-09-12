#include <stdio.h>

	int main() {
	    int hour;
	
	    printf("Enter the hour (0-23): ");
	    scanf("%d", &hour);
	
	    if (hour >= 5 && hour < 12) {
	        printf("Good Morning\n");
	    } else if (hour >= 12 && hour < 18) {
	        printf("Good Evening\n");
	    } else if (hour >= 18 && hour < 24) {
	        printf("Good Night\n");
	    } else if (hour >= 0 && hour < 5) {
	        printf("It's too early for a greeting\n");
	    } else {
	        printf("Invalid hour\n");
	    }
	
	    return 0;
	}
