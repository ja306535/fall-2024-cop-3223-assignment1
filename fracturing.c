#include <stdio.h> 
#include <math.h>
#define PI 3.14159

void getValues() {
    printf("Enter x1 and y1 for Point #1: ");
    scanf("%lf %lf", &x1, &y1);

    printf("Enter x2 and y2 for Point #2: ");
    scanf("%lf %lf", &x2, &y2);
}

int main(int argc,char**argv){

    getValues();

    return 0;
}

