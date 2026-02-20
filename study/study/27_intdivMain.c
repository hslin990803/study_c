#include <stdio.h>
#include "27_stdiv.h"
#include "27_intdiv4.h"

int main(void) {
	Div val = IntDiv(5, 2);
	printf("¸ò : %d \n", val.quotient);
	printf("³ª¸ÓÁö : %d \n", val.remainder);

	return 0;
}