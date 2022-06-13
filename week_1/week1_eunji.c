#include <stdio.h>
#include <stdbool.h>

int main(){

    printf("I like pizza!\n");
    printf("It's really good!\n");

    // This is a comment blah
    /* oh yeah
        this
        is
        multiline comment~~~
    */

    /* escape sequences
        \n \t
    */
    printf("1\t2\t3\n4\t5\t6\n");
    printf("\"I like pizza\" - me\n");


    int x;  //declaration
    x = 123; //initialization

    int y = 321; //declaration + initialization
    
    int age = 20; //integer
    float gpa = 4.5; //hope
    char grade = 'A';
    char name[] = "eunji"; // no string in C, use array

    printf("hello %s\n", name);
    printf("you are %d years old\n", age);
    printf("your average grade is %c\n", grade);
    printf("your gpa is %f\n", gpa);

    char a = 'C';            // character %c
    char b[] = "hello";      // array of characters %s

    float c = 3.141592;     // floating point(6-7 digits) %f
    double d = 3.141592653589793;  // 15-16 digits %lf
    // double is more precise than float

    bool e = true;       // true or false(1 byte) %d, print->1

    char f = 100;            // -128 to 127, %d: 그대로, %c: 아스키코드값
    unsigned char g = 254;   // 0 to 255 (부호가 없는)

    short int h = 32767;     // (-32768 to 32767)  %d  (==short)
    unsigned short int i = 65535;  // 0 to 65535    %d  (==unsigned short)

    int j = 2147483647;      // -2147483648 to 2147483647  %d  (==long int)
    unsigned int k = 4294967295;  // 0 to 4294967295  %u

    long long int l = 9223372036854775807;  // -9 quintillion to +9 quintillion  %lld
    unsigned long long int m = 1839083083098309835U;  // 0 to 18 quintillion   %llu

    // 범위 초과 시 overflow, 제일 작은 값으로.

    printf("%c\n%s\n%f\n%lf\n%d\n%c\n%c\n%d\n%d\n%d\n%u\n%lld\n%llu\n", a, b, c, d, e, f, g, h, i, j, k, l, m);

    return 0;
}