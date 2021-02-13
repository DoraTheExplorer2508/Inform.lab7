#include <stdio.h>
#define MOD 211

int generator(int f1, int f2, int f3) {
	int f = (f1 + f2 + f3) % MOD;
	return f;
}
