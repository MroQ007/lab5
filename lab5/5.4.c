#include <stdio.h>
#include <stdlib.h>

int przynaleznosc(double x, double y){
    printf("wprowadz wspolrzedna x: ");
    scanf("%lf", &x);
    printf("wprowadz wspolrzedna y: ");
    scanf("%lf", &y);
    if(x >= -1){
        if(x <= 1){
            if(y >= -1){
                    if(y <= 1){
                printf("punkt o wspolrzednych: %f, %f nalezy do zakresu", x, y);
                }}}}
    else {
        printf("punkt o wspolrzednych: %f, %f nie nalezy do zakresu", x, y);
    }

   return 0;
}
