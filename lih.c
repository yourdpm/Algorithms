#include <stdio.h>
void myfunC(int x) {
	if (x > 0)
	myfunC(--x);
	printf("%d, ", x);
}
int main() {
	myfunC(5);
	int a=5;
	printf("%d", --a);
	return 0;
	
}
