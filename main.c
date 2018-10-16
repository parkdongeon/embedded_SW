#include <stdio.h>
#include "func1.h"
#include "func2.h"

void postprocess()
{
	printf("do some postprocessing\n");
}

void preprocess()
{
	printf("do some preporcessing\n");
}

void turdo_on()
{
	printf("turbo on\n");
}

void turdo_off()
{
	printf("turbo off\n");

}

int main()
{
	preprocess();
	turbo_on()
	Foo1();
	Foo2();

	turbo_off();
	postprocess();

	return 0;
}
