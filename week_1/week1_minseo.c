//
//  main.c
//  week1_minseo
//
//  Created by 홍민서 on 2022/06/19.
//

#include <stdio.h>
#include <stdbool.h> // bool을 사용하기 위한 모듈 가져오기

int main() {
    // 3. comments & escape sequences
    
    // comments
    
    // 한줄 주석입니다.
    /*
     여러 줄
     주석
     입니다.
    */
    
    // 좋아하는 음식을 소개하는 구문
    printf("I like ramyeon.\n");
    
    printf("I like ramyeon.\n\n"); // 좋아하는 음식을 소개하는 구문
    
    printf("My name is Minseo.\n\n");
    // printf("I like ramyeon.\n")
    
    // escape sequences
    
    printf("I\nlike\nramyeon.\n\n"); // \n
    printf("1\t2\t3\t\n\n");         // \t
    printf("1\t2\t3\t\n4\t5\t6\t\n7\t8\t9\t\n\n"); // \n, \t
    
    printf("\"I like ramyeon.\" - Minseo Hong\n"); // \"
    printf("I like \'ramyeon\' - Minseo Hong\n\n");  // \'
    
    
    // 4. variables
    
    int x; // declaration
    x = 7; // allocation
    int y = 10; // declaration + allocation
    
    printf("%d %d \n\n", x, y);
    
    int age = 20;
    float gpa = 3.5;
    char grade = 'B';
    char name[] = "Minseo";
    
    printf("Hello %s.\n", name);            // 문자열은 %s
    printf("You are %d years old.\n", age); // int는 %d
    printf("Your grade is %c.\n", grade);   // char는 %c
    printf("Your gpa is %f.\n\n", gpa);       // float는 %f
    
    
    // 5. data types
    
    char a = 'C';         // 단일 문자 %c
    char b[] = "Minseo";  // 문자열   %s
    
    char f = 100;          // 1바이트 (-128 ~ +127) %d 또는 %c
    // signed char f = 100;   // 본래 signed가 앞에 들어가나 생략 가능 (다른 자료형에도 적용됨)
    unsigned char g = 255; // 1바이트 (0 ~ +255)    %d 또는 %c
    
    bool e = true; // 1바이트 (true 또는 false, 1 또는 0) %d
    
    short int h = 32767;          // 2바이트 (-32,768 ~ +32,767) %d
    unsigned short int i = 65535; // 2바이트 (0 ~ +65,535)       %d
    
    long int j = 2147483647;          // 4바이트 (-2,147,483,648 ~ +2,147,483,647) %ld
    unsigned long int k = 4294967295; // 4바이트 (0 ~ +4,294,967,295)              %lu
    // long n = 2147483647;          // int 생략 가능
    // unsigned long o = 4294967295; // int 생략 가능
    
    int p = 2147483647;          // 4바이트 (-2,147,483,648 ~ +2,147,483,647) %d
    unsigned int q = 4294967295; // 4바이트 (0 ~ +4,294,967,295)              %u
    
    float c = 3.141592;            // 4바이트 (6~7자리)   %f
    double d = 3.141592653589793;  // 8바이트 (15~16자리) %lf
    
    long long int l = 9223372036854775807;  // 8바이트 (-9,223,372,036,854,775,808 ~ +9,223,372,036,854,775,807) %lld
    unsigned long long int m = 1844674407370955161; // 8바이트 (0 ~ +18,446,744,073,709,551,615) %llu
    
    printf("%c\n", a);   // char
    printf("%s\n", b);   // string
    
    printf("%c\n", f);   // char
    printf("%d\n", g);   // unsigned char
    
    printf("%d\n", e);   // bool
    
    printf("%d\n", h);   // short
    printf("%d\n", i);   // unsigned short
    
    printf("%ld\n", j);  // long
    printf("%lu\n", k);  // unsigned long
    
    printf("%d\n", p);   // int
    printf("%u\n", q);   // unsigned int
    
    printf("%f\n", c);   // float
    printf("%lf\n", d);  // double
    
    printf("%lld\n", l); // long long
    printf("%llu\n", m); // unsigned long long
    
    
    return 0;
}
