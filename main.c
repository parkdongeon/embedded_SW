#include <stdio.h>
#include "func1.h"
#include "func2.h"

void preprocess()
{
	printf("do some preporcessing\n");
}

int main()
{
	Foo1();
	Foo2();
	preprocess()

	return 0;
}
