#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(void){
	int i;
	int grade[5];
	int sum =0;
	
	for (i=0;i<5;i++){
		printf("grade[%i] = ", i);
		scanf("%d", &grade[i]);
	}
	
	printf("Grade values: ");
    for (i=0;i<5;i++){
        printf("%d ", grade[i]);
        sum += grade[i];
    }

    int average = sum / 5;
    printf("\nAverage: %d\n", average);
	
	return 0;
	}
