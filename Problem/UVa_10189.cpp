#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	int n, m;
	int field = 1;

	while (1) {
		scanf("%d %d", &n, &m);
		if (n == 0 && m == 0)
			break;

		char board[110][110];

		for (int i = 0; i < n; i++) { 
			scanf("%s", board[i]);
		} 

		if (field > 1)
			printf("\n");

		printf("Field #%d:\n", field);

		for (int i = 0; i < n; i++) { 
			for (int j = 0; j < m; j++) { 
				if (board[i][j] == '*'){
					printf("*");
				}
				else {
					int count = 0;

					for (int changei = -1; changei <= 1; changei++) { 
						for (int changej = -1; changej <= 1; changej++) {
							int rowi = i + changei;
							int colj = j + changej;

							if (rowi >= 0 && rowi < n && colj >= 0 && colj < m) {
								if (board[rowi][colj] == '*')
									count++;
							}
						}
					}
					printf("%d", count);
				}
			}
			printf("\n");
		}
		field++;
	}

	return 0;
}
