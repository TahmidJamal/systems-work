#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
	int ceiling = 1e3;
	int sum = 0;
	for (int i = 3; i < ceiling; i++) {
		if ( i % 3 == 0 || i % 5 == 0) {
			//printf("%d\n", i );
			sum += i;
		}
	}
	printf("%d\n", sum );
	return 0;
}