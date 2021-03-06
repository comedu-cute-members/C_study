포인터
======
1. [포인터란](#포인터란)
2. [포인터 연산자(*,&)](#포인터-연산자)
3. [포인터와 배열](#포인터와-배열)
4. [ptr[i] == *(ptr+i)](#ptr[i]-==-*(ptr+i))
5. [포인터와 배열의 문자열 표현](#포인터와-배열의-문자열-표현)
6. [포인터 배열](#포인터-배열)
7. [포인터와 함수의 이해](#포인터와-함수의-이해)
8. [포인터 대상의 const선언](#포인터-대상의-const선언)
9. [포인터의 포인터](#포인터의-포인터)
10. [2차원 배열 인자 전달](#2차원-배열-인자-전달)
## 포인터란
포인터 : 주소 값이 저장되는 변수를 포인터 변수라 칭한다.
선언, 초기화 방법 : int * ptr;
```
int * ptr = &num;
```
int(주소 값을 저장할 변수num의 자료형)
ptr(포인터 변수의 이름)
&num(변수 num의 주소)

->num의 주소가 1000이라면 ptr에 1000 이 저장된다.

## 포인터 연산자

### *의 의미

```
int num = 10;
int * ptr = &num;
*ptr = 20;
```
*ptr은 포인터 변수 "ptr에 저장된 주소 값에 해당하는 위치로 접근"하라는 의미
->num에 20 이 저장된다.

### &의 의미
```
int * ptr = &num;
```
&num은 변수 num이 저장되어있는 메모리의 주소를 나타낸다.(scanf함수에서 입력 값을 저장할 변수 앞에 &를 붙이는 이유를 알 수 있다)

->즉, *&ptr은 변수 ptr과 동일한 의미


## 포인터와 배열

### 배열 선언 과정 이해

```
int arr[10];
```

1. 메모리의 어느 공간에 변수 arr이 저장된다(변수는 아니지만, 편의상 변수라 표현)
2. 메모리의 또 다른 어느 공간에 40바이트가 할당이 된다.
3. 변수 arr에는 arr[0]의 주소가 저장이 된다.

-> 배열의 이름 arr에 arr[0]의 주소가 저장이 된다. 즉, arr은 arr[0]의 주소를 저장하는 포인터라고 할 수 있는 것이다.


### 포인터와 배열의 차이

배열의 이름 arr에는 arr[0]의 주소가 저장이 되나, 포인터 변수와 달리 arr에 다른 값을 저장할 수 없다.
따라서 배열을 포인터 상수라고 칭할 수 있다.

```
int num1=0, num2=0;
int* ptr = &num1;
ptr= &num2;   //가능
int arr[0] = {0,};
arr = &num1;  //불가능
```


## ptr[i] == *(ptr+i)

양변의 식은 같은 의미를 갖는다


## 포인터와 배열의 문자열 표현
### "큰따옴표로 묶여셔 표현되는 문자열은 그 형태에 상관없이 메모리 공간에 저장된 후 그 주소 값이 반환된다."

### 1. 배열로 선언
->배열의 이름에 저장하는 주소는 변경이 불가능하나, 문자열은 수정 가능('변수 형태의 문자열')

### 2. 포인터를 기반으로 선언
```
char* ptr = "My String"; 
```
->ptr에 "M"의 주소값 저장됨
->ptr에 저장하는 주소는 변경이 가능하나, 문자열은 수정 불가('상수 형태의 문자열')


## 포인터 배열
포인터 배열: 주소 값을 요소로 갖는 배열
```
int* arr[10]
```

## 포인터와 함수의 이해

### 함수의 인자로 배열 전달

매개변수로 배열을 선언할 수 없다. 따라서 함수 내에서 배열에 접근할 수 있도록 배열의 주소 값을 전달해야 한다. 

```
int PrintArray(int* ptr, int len)
{
  for(int i=0; i<len; i++)
    printf("%d", ptr[i]);
}

int main()
{
  int arr[3] = {1,2,3};
  PrintArray(arr, 3)
}
```


### 배열을 함수의 인자로 전달?

함수의 매개변수에 포인터를 선언하고 직접 배열의 주소에 접근해야 한다.

### call-by-value와 call-by-reference  
#### call-by-value: 인자에 단순한 값을 전달(변수에 저장된 값이 복사되어 인자에 전달되기 때문에, 변수에 저장된 값은 바뀌지 않는다)

#### call-by-reference: 인자에 주소를 전달(직접 주소에 접근하여 변수에 저장된 값을 바꾸는 것이 가능하다)


## 포인터 대상의 const 선언
```
const int* ptr = &num;
```
-> num에 저장된 값을 바꾸는 것은 가능하나, ptr을 이용해서 num에 저장된 값을 바꿀 수는 없다.
```
int* const ptr = &num;
```
->ptr에 저장된 num의 주소 값을 바꿀 수 없다.


## 포인터의 포인터
포인터 변수를 가리키는 또 다른 포인터 변수를 뜻하는 것. 이중포인터, 또는 더블포인터라고 부른다.
```
int num = 10;
int* ptr = &num;
int** dptr = &ptr;  //*dptr은 ptr, **dptr은 num을 나타낸다.
```

### 포인터 배열의 포인터 형

```
int* arr[10];
```
int형 포인터 배열 arr -> int형 포인터 변수를 가리키는 arr은 더블 포인터이다.

## 2차원 배열 인자 전달

1차원 배열을 인자로 전달하기 위해선 다음과 같이 매개변수를 선언하면 된다. 배열의 포인터 형이 int형 포인터라고 가정했을 때 매개변수를 선언한 것이다.
```
Func(int* ptr)
{

}
```

### 2차원 배열의 포인터형

2차원 배열을 인자로 전달하기 위해선 2차원 배열의 포인터 형을 알 필요가 있다.
```
int arr1[3][2];
int arr2[2][3];

printf("arr1:%p\n", arr1);
printf("arr1+1:%p\n", arr1+1);
printf("arr2:%p\n", arr2);
printf("arr2+1%p\n", arr2+1);
```
위 코드의 실행 결과는 다음과 같다
```
arr1:004BFBE0
arr1+1:004BFBE8
arr2:004BFBEC0
arr2+1:004BFBCC
```
배열의 이름을 대상으로 1씩 더할 때마다 다음 행의 첫번째 요소의 주소가 출력됨을 알 수 있다.
따라서 2차원 배열에서는 가로의 길이가 다르면 포인터 형이 달라지게됨을 알 수 있다.

결론: 2차원 배열의 포인터 형에는 다음 두가지 정보가 포함되어야 한다.
* 배열이 가리키는 대상
* 가로 길이

따라서 아래의 배열
```
int arr[3][4];
```
의 포인터 형은 "가리키는 대상이 int형 변수이고 sizeof(int)x4의 크기 단위로 값이 증가하는 포인터형"이라고 할 수 있으며
```
int (*ptr)[4];
```
위와 같이 선언한다.

