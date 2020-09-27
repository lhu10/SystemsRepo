#include <stdio.h>

int main(){
    
    //state all variables 
    char c = 65;  
    int n = 1234; 
    long lo = 12345; 
    float f = 1.12345678910123456789;
    double d = 1.12345678910123456789;


    //printf
    printf("%s\n", "Test Cases:");  
    printf("%d\n%ld\n%f\n%lf\n", n, lo, f, d);
    printf("%.19f\n", f);     //proves  7 digits precision
    printf("%.19lf\n", d);    //       14 digits precision
    printf("%c\n", c);
    //mismatching
    printf("%d\n", c);    //65
    printf("%d\n", 'A');  //65

    //typing \n each time is very tedious

    //unsigned
    unsigned char uc = -191;
    printf("%c\n", uc);       //gcc warning: "-Woverflow" 
                              //wraps around and changes -191 to 65


    //going out of bounds
    int outN = 100000000000; 
    printf("%d\n", outN);     //-Woverflow: converts long int to int
    
    long outLo = 100000000000000000000000000000000;
    printf("%ld\n", outLo);   //warning: integer constant is too large for its type
    //prints -8814407033341083648


    //pointer
    printf("%p\n", n);       //expects void * type 

    return 0;
}
