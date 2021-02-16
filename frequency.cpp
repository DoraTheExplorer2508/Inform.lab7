#include <stdio.h>
#include "generator.h"
#define MOD 211
#define N 100000

void frequency() {
	int count[MOD] = { 0 };
	int i, m, f;
	for (i = 0; i < N; i++) {
		f = generator();
		count[f]++;
	}
	for (m = 0; m < MOD; m++) {
		printf("%d %d\n", m, count[m]);
	}
}
