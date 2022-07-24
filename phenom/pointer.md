# 포인터 공부
---
## pointer 란?
**개념**
>포인터: **메모리 주소**를 다루는 하나의 도구

>포인터 변수: 메모리 주소를 저장하는 변수

**지정 방법**
```c
int *numPtr; // 자료형 옆에 * 을 붙임
int num1 = 10;

numPtr = &num1; // 포인터 변수에 & 를 이용해서 초기화

printf("%p\n", numPtr);
printf("%p\n", &num1);
```

실행 결과는 둘 다 동일하게 메모리 주소가 나옴 (컴퓨터마다, 실행할 때마다 달라짐)

---

## 역참조
**개념**
>메모리 주소가 있는 곳으로 이동해서 값을 가져오기

**하는 법**

```c
int *numPtr;
int num = 10;

num Ptr = &num;

printf("%d\n", *numPtr);
```

실행결과: 10</br>

**이런 것도 가능**

```c

    int *numPtr;
    int num1 = 10;

    numPtr = &num1;

    *numPtr = 20;

    printf("%d\n", *numPtr); 
    printf("%d\n", num1);
```
실행결과: 20, 20

정리하자면</br>

*변수* 는 메모리 주소를 몰라도 값을 가져오거나 저장할 수 있음</br>
*주소 연산자(&)* 는 변수의 메모리 주소를 구함</br>
*역참조 연산자( * )* 는 메모리 주소에 접근해 값을 가져오거나 저장함</br>
*포인터* 는 변수의 메모리 주소만 가져옴</br>

---

## 이중 포인터
**개념**

>(*)를 두 번 사용한 포인터

```c
int num = 10;
int *ptr1;
int *ptr2;

ptr1 = num; // num의 메모리 주소 저장
ptr2 = &ptrs; // ptr1의 메모리 주소 저장

printf("%d", **ptr2);
```
실행결과 : 10</br>

---

## 포인터와 배열 활용
**포인터를 배열처럼 활용하는 법**</br>

> malloc 함수로 메모리를 할당

```c
#include <stdlib.h> // malloc, free 함수가 있는 헤더 파일
int main()
{
    int *numPtr = malloc(sizeof(int) * 10);    // int 10개 크기만큼 동적 메모리 할당

    numPtr[0] = 10;    // 배열처럼 인덱스로 접근하여 값 할당
    numPtr[9] = 20;    // 배열처럼 인덱스로 접근하여 값 할당

    printf("%d\n", numPtr[0]);    // 배열처럼 인덱스로 접근하여 값 출력
    printf("%d", numPtr[9]);    // 배열처럼 인덱스로 접근하여 값 출력

    free(numPtr);    // 동적으로 할당한 메모리 해제(반드시 해주어야 함!)

    return 0;
}
```
실행결과: 10, 20</br>

**2차원 배열로 활용하기**</br>

```c
int **ptr = malloc(sizdof(int*) * 3); // 이중 포인터에 (int 포인터의 크기) X (세로 크기) 만큼 동적 메모리 할당

for (int i = 0; i < 3; i++){
    ptr[i] = malloc(sizeof(int) * 4); // (int 크기 * 가로 크기) 만큼 동적 메모리 할당
}

ptr[2][3] = 4;

printf("%d", ptr[2][3]);

for (int i = 0; i < 3; i++){
    free(ptr[i]); // 2차원 배열 가로 공만 메모리 해제
}

free[ptr]; // 2차원 배열 세로 공간 메모리 해제
```
실행결과: 4