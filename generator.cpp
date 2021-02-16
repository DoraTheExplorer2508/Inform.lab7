#include <stdio.h>
#define MOD 211

int generator() {
	static int f1 = 1, f2 = 1, f3 = 1, i, f;
	f = (f1 + f2 + f3) % MOD;
	f1 = f2;
	f2 = f3;
	f3 = f;
	return f;
}
