#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

char S[1000000] = { 0 }, T[26] = { 0 };

int main(void) {
	int S_len = 0, T_len = 0, T_count = 0, final_count = 0;

	scanf("%s", S);
	scanf("%s", T);

	S_len = strlen(S); T_len = strlen(T);

	char* ptr = S;
	char* moving_ptr = S;

	while (ptr!=NULL) {
		T_count = 0;
		ptr = moving_ptr;
		for (int i = 0; i < T_len && ptr != NULL; i++){ // T�� ��������
			ptr = strchr(ptr, T[i]); //ã�°���
			if (ptr != NULL) { //������ ������ ī��Ʈ
				T_count += 1;
				*ptr = '1';
				ptr++;
				if (i==0)
					moving_ptr = ptr;
			}
			else{ //�ϳ��� ������ ����
				printf("%d", final_count);
				return 0;
			}
		}
		final_count += 1;
	}
	printf("%d", final_count);
	return 0;
}