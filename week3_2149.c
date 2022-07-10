#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int row = 0, col = 0, change[10] = {0, };
	char key[10], key_cpy[10], code[10][10], code_arr[100], temp[1][1], temp2[1];
	scanf("%s", key); //Ű �Է�
	scanf("%s", code_arr); //��ȣ�� �Է�

	row = strlen(key); // �� ũ�� = 7��
	col = (strlen(code_arr) + row) / row; // �� ũ�� ���� = 8��, col = 9

	// ��ȣ ǥ �����
	for (int i = 0; i < row; i++) {
		code[0][i] = key[i];
		key_cpy[i] = key[i];
	}

	for (int i = 0; i < row; i++) {
		for (int j = 1; j < col; j++) {
			code[j][i] = code_arr[(j - 1) + ((col - 1) * i)];
		}
	}

	for (int step = 0; step < row - 1; step++) {
		for (int i = 0; i < row - step - 1; i++) {
			if (key[i] > key[i + 1]) { // ������ �ٲ�� �� ��
				// Ű �ٲٱ�
				temp2[0] = key[i];
				key[i] = key[i + 1];
				key[i + 1] = temp2[0];
			}
		}
	}

	for (int i = 0; i < row; i++) {
		for (int k = 0; k < row; k++) {
			if (key[i] == key_cpy[i]) continue;
			else {
				for (int j = 0; j < row; j++) {
					if (key_cpy[j + i] == key[i]) {
						temp2[0] = key[i];
						key[i] = key[i + j];
						key[i + j] = temp2[0];

						for (int l = 1; l < col; l++) {
							temp[0][0] = code[l][i];
							code[l][i] = code[l][i + j];
							code[l][i + j] = temp[0][0];
						}
						break;
					}
				}
			}
		}
	}

	for (int i = 1; i < col; i++) {
		for (int j = 0; j < row; j++) {
			printf("%c", code[i][j]);
		}
	}
}