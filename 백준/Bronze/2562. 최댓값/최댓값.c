#include <stdio.h>

int main(void) {
	int arr[9] = { 0, };
	for (int i = 0; i < 9; i++) {
		scanf("%d", &arr[i]);
	}
	int max = arr[0], place = 1;
	for (int i = 1; i < 9; i++) {
		if (arr[i] > max) {
			max = arr[i];
			place = i + 1;
		}
	}
	printf("%d\n%d", max, place);
	return 0; 
}