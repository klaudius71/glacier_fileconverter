#include <stdio.h>
#include <cassert>
#include "Converter.h"

int main(int argc, char* argv[])
{
	if (argc < 2)
		return -1;

	printf("%s\n", argv[1]);

	Converter::Convert(argv[1]);
	return 0;
}