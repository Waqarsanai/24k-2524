#include <stdio.h>
	
	int main() {
	    int lightIntensity;
	
	    printf("Enter the light intensity (0-1000): ");
	    scanf("%d", &lightIntensity);
	
	    if (lightIntensity > 500) {
	        printf("sunshine\n");
	    } else if (lightIntensity >= 0 && lightIntensity <= 100) {
	        printf("evening\n");
	    } else if (lightIntensity > 100 && lightIntensity <= 500) {
	        printf("lighting\n");
	    } else {
	        printf("Invalid light intensity\n");
	    }
	
	    return 0;
	}
