#define _CRT_SECURE_NO_WARNINGS
#define MAX_KEY_LENGTH 10
#define MAX_TEXT_LENGTH 100
#include <stdio.h>
#include <string.h>

int main(void)
{
	char key[MAX_KEY_LENGTH] = { 0 }, encoded_text[MAX_TEXT_LENGTH] = { 0 };
	scanf("%s", key);
	scanf("%s", encoded_text);

	int num_of_cols = strlen(key);
	int num_of_rows = strlen(encoded_text) / num_of_cols;
	char first_matrix[MAX_TEXT_LENGTH/MAX_KEY_LENGTH][MAX_KEY_LENGTH] = { 0 };
	char last_matrix[MAX_TEXT_LENGTH / MAX_KEY_LENGTH][MAX_KEY_LENGTH] = { 0 };
	
	for (int col = 0; col < num_of_cols; col++) //암호문을 행 단위로 first_matrix에 끼워넣기
		for (int row = 0; row < num_of_rows; row++)
			first_matrix[row][col] = encoded_text[row+col*num_of_rows];

	int key_order = 0; //first_matrix를 last_matrix에 끼워넣을 때 필요한 키 순서 찾기
	int key_length = num_of_cols;
	int sorted_key[MAX_KEY_LENGTH] = { 0 };
	for (int i = 'A'; i < 'Z'; i++) 
		for (int j = 0; j < key_length; j++)
			if (i == key[j])
			{
				sorted_key[j] = key_order;
				key_order++;
			}

	for(int col=0; col<num_of_cols; col++) //first_matrix를 열 단위로 last_matrix에 끼워넣기
		for (int row = 0; row < num_of_rows; row++)
			last_matrix[row][col] = first_matrix[row][sorted_key[col]];

	for (int row = 0; row < num_of_rows; row++) //평문 출력하기
		for (int col = 0; col < num_of_cols; col++)
			printf("%c", last_matrix[row][col]);
	
	return 0;
}