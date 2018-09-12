#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
	int ceiling = 1e6; 
	int sum = 1;
	int currentPrime = 1;
	while (currentPrime < ceiling) {
		currentPrime++;
		if (is_prime(currentPrime) == 1 && currentPrime < ceiling) {
			//printf("%d\n", currentPrime);
			sum += currentPrime;
		}
	}
	printf("%d\n", sum );
	return sum;
}

int is_prime(int num) {
    if (num <= 1) return 0;
    if (num % 2 == 0 && num > 2) return 0;
    for(int i = 3; i*i < num; i+= 2) {
        if (num % i == 0) {
         	return 0;
        }
    }
    return 1;
}

