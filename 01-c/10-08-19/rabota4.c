#include <stdio.h>

int main(){
	float x,y;
	while(1){
		printf("Enter coordinates: ");
		scanf("%f %f", &x, &y);
		if ((x >= -2) && (x <= 2) && (y >= -1) && (y <= 1) && 
		!(((y < 0.5*x + 1) && (x < 0) && (y > -0.5*x - 1) && (y > 0.5*x )) 
		|| ((y < 0.5*x) && (y < -0.5*x + 1) && (y > 0.5*x - 1) && (x > 0))))
		{
			printf("+\n");
		}
		else{
			printf("—\n");
		}
	}
	return 0;
}
