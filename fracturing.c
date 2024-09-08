#include <stdio.h> 
#include <math.h>
#define PI 3.14159

static double x1,w1,x2,w2
void getValues() {
    printf("Enter x1 and y1 for Point #1: ");
    scanf("%lf %lf", &x1, &w1);

    printf("Enter x2 and y2 for Point #2: ");
    scanf("%lf %lf", &x2, &w2);
}

int main(int argc,char**argv){

    getValues();

    return 0;
}

