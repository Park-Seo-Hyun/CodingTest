#include <stdio.h>
#include <stdlib.h>


int main(void) {
	int n, m;
	scanf("%d %d", &n, &m);
	int* arr = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		arr[i] = i + 1;
	}
	for (int i = 0; i < m; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		int temp = arr[a - 1];
		arr[a - 1] = arr[b - 1];
		arr[b - 1] = temp;
	}
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}
