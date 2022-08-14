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
		for (int i = 0; i < T_len && ptr != NULL; i++){ // T를 돌리꺼임
			ptr = strchr(ptr, T[i]); //찾는거임
			if (ptr != NULL) { //있으면 다음꺼 카운트
				T_count += 1;
				*ptr = '1';
				ptr++;
				if (i==0)
					moving_ptr = ptr;
			}
			else{ //하나라도 없으면 종료
				printf("%d", final_count);
				return 0;
			}
		}
		final_count += 1;
	}
	printf("%d", final_count);
	return 0;
}