#include <stdio.h>
#include "generator.h"
#define MOD 211

void frequency() {
	long count[MOD] = { 0 };
	int counter, f1 = 1, f2 = 1, f3 = 1, f = 0, c2;
	for (counter = 0; counter < 100000; counter++) { //генерируется массив из чисел и считаются повторения
		f = generator(f1, f2, f3);
		count[f]++;
		f1 = f2;
		f2 = f3;
		f3 = f;
	}
	for (c2 = 0; c2 < MOD; c2++) {
		printf("%d %d \n", c2, count[c2]);
	}
}
