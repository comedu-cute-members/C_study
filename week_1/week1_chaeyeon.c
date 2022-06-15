#include <stdio.h>
int main(){
    printf("I like pizza!");
    printf("1\t2\t3\n4\t5\t6\n");
    printf("\"I like Pizza\"- Abraham Lincoln probably");
    
    // variable = Allocated space in memory to store a value
    // refer to a variable's name to access the stored value.
    // That variable now behaves as if it was the value it contains.
    // BUT we need to declare what type of data we are storing.

    int x; //declaration
    x=123;  //initialization
    int y=321; //declaration + initialaization

    int age=20; //integer
    float gpa = 2.05; //floating point number
    char grade = 'A'; //single character
    char name[] = "Chaeyeon"; //array of characters

    printf("Hello. %s\n",name);
    printf("You are %d years old.\n",age);
    printf("Your average grade is %c.\n",grade);
    printf("Your gpa is %f.\n",gpa);

    char a = 'A' ;
    char b[]="bro";
    float c=3.141592;
    double d = 3.141592653589793;

    printf("%0.15f\n",c);
    printf("%0.1f\n",d);

    char f = 120;
    unsigned char g = 250;
    short int h = 32767;
    unsigned short i  = 65535;
    int j = 2147483647;
    unsigned int k = 4294967295;
    long long int l = 9223372036854775807;
    unsigned long long int m = 18446744073709551615U;


    printf("%d\n",f);
    printf("%d\n",g);
    printf("%d\n",h);
    printf("%d\n",i);
    printf("%d\n",j);
    printf("%u\n",k);
    printf("%lld\n",l);
    printf("%llu\n",m);

    return 0;
}


