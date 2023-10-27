#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int poleTrojkata(){

int a, b, c;
double p, pt;
printf("podaj boki trojkata:.../.../...\n");
scanf("%d/%d/%d", &a, &b, &c);

if (a+b>c){
    if (a+c>b){
            if(c+b>a){
                    printf("z dlugosci bokow %d, %d, %d powstanie trojkat\n", a, b, c);
                    p = (a + b + c) / 2;
                    printf("p = %f\n", p);
                    pt = sqrt(p*(p-a)*(p-b)*(p-c));
                    printf("pole trojkata wynosi: %f", pt);
                    }}}
    else{
        printf("z dlugosci bokow %d, %d, %d nie powstanie trojkat", a, b, c);
    }
return 0;
}
