# [C 언어] 포인터, 배열, 정렬:computer:
1. 포인터, 배열, 정렬의 관계
2. 선택 정렬(Selection Sort)
3. 버블 정렬(Bubble Sort)
4. 삽입 정렬(Insertion Sort)
5. 퀵 정렬(Quick Sort)

###  1. 포인터, 배열, 정렬의 관계
- **포인터 변수**와 **배열의 이름**은 모두 이름이 존재하고, 무엇을 나타내거나 저장하는 기능을 수행한다.
- **포인터 변수**는 주소 값의 변경이 가능하고, **배열의 이름**은 주소 값의 변경이 불가능하다.
- **정렬**이란 데이터를 특정한 조건에 따라 일정한 순서가 되도록 다시 **배열**하는 일이다.  

> 유독 어려웠던 백준 정렬 문제가 기억에 남아서, 포인터보다는 **정렬**에 초점을 맞춰서 스터디 과제를 제출하게되었다.


### 2. 선택 정렬(Selection Sort)   
➡️ **가장 작은 데이터**를 찾아 **가장 앞의 데이터**와 **교환**해나가는 방식  

[동빈나 선택 정렬 강좌 바로가기](https://youtu.be/8ZiSzteFRYc)    

위 강좌에서 선택 정렬 알고리즘을 구현하는 방법은 아래 코드와 같다.
```C
#include <stdio.h>

int main(void){
	int i, j, min, index, temp;
	int array[10]={1,10,5,8,7,6,4,3,2,9};
	for(i=0; i<10; i++){
		min=9999;
		for(j=i; j<10; j++){
			if(min>array[j]){
				min=array[j];
				index=j;
			}
		}
		temp=array[i];
		array[i]=array[index];
		array[index]=temp;
	}
	for(i=0; i<10; i++){
		printf("%d ", array[i]);
  }
	return 0;
}
```

### 3. 버블 정렬(Bubble Sort)
➡️ **서로 이웃한 데이터들**을 **비교**하며 **가장 큰 데이터**를 **가장 뒤로 보내며** 정렬하는 방식   

[동빈나 버블 정렬 강좌 바로가기](https://youtu.be/EZN0Irp2aPs)   

위 강좌에서 버블 정렬 알고리즘을 구현하는 방법은 아래 코드와 같다.
```C
#include <stdio.h>

int main(void){
	int i, j, temp;
	int array[10]={1,10,5,8,7,6,4,3,2,9};
	for(i=0; i<10; i++){
		for(j=0; j<9-i; j++){
			if(array[j]>array[j+1]){
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
	for(i=0; i<10; i++){
		printf("%d ", array[i]);
	}
	return 0;
}
```

### 4. 삽입 정렬(Insertion Sort)
➡️ 두번째 데이터부터 차례로 정렬을 시작하며, **자신 앞에 정렬된 데이터들과 자신을 비교**하여 **자신에게 맞는 순서에 삽입**하는 방식   

[동빈나 삽입 정렬 강좌 바로가기](https://youtu.be/16I9Z7bS1iM)  

위 강좌에서 삽입 정렬 알고리즘을 구현하는 방법은 아래  같다.
```C
#include <stdio.h>

int main(void) {
    int i, j, temp;
    int array[10] = { 1,10,5,8,7,6,4,3,2,9 };
    for (i = 0; i < 9; i++) {
        j = i;
        while (array[j] > array[j + 1]) {
            temp = array[j];
            array[j] = array[j + 1];
            array[j + 1] = temp;
            j--;
        }
    }
    for (i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}
```

### 5. 퀵 정렬(Quick Sort)
➡️ 그룹을 나누는 기준인 **피벗**을 선택하여 **그룹 나누기**를 반복하며, 정렬하기를 반복하는 **분할 정복 방식**  

[동빈나 퀵 정렬 강좌 1 바로가기](https://youtu.be/O-O-90zX-U4)   
[동빈나 퀵 정렬 강좌 2 바로가기](https://youtu.be/gBcUO_6JXIA)   

위 강좌에서 선택 정렬 알고리즘을 구현하는 방법은 아래 코드와 같다.
```C
#include <stdio.h>

int number=10;
int data[10]={1,10,5,8,7,6,4,3,2,9};

void quickSort(int* data, int start, int end){
	if(start>=end){ //원소가 1개인 경우 
		return; 
	}
	
	int key=start;  //키는 첫번째 원소
	int i=start+1;
	int j=end;
	int temp;
	
	while(i<=j){  //엇갈릴 때까지 반복 
		while(data[i]<=data[key]){  //키 값보다 큰 값을 만날때까지
			i++;
		}
		while(data[j]>=data[key] && j>start){ //키 값보다 작은 값을 만날 때까지
			j--;			
		}
		if(i>j){  //현재 엇갈린 상태면 키 값과 교체 
			temp=data[j];
			data[j]=data[key];
			data[key]=temp;
		} else{
			temp=data[j];
			data[j]=data[i];
			data[i]=temp;
		}
	}
	quickSort(data, start, j-1);
	quickSort(data, j+1, end);
}

int main(void){
	quickSort(data, 0, number-1);
	for(int i=0; i< number; i++){
		printf("%d ", data[i]);
	}
	return 0;
}
```  
  
퀵 정렬이 필요한 경우 `#include <stdlib.h>`의 표준 정렬 함수인 `qsort()`을 이용하면 된다.  
`qsort()`함수 사용 방법은 아래 코드와 같다. 
```C
#include <stdlib.h>
void qsort(void *ptr, size_t count, size_t size, 
           int (*comp)(const void *, const void *));
```
