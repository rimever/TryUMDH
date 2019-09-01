#include <conio.h>

#include "Leak.h"


void heapleak()

{
	CLeak* p;

	p = new CLeak();
}


int main()

{
	_getch();

	for (int i = 0; i < 100; i++)

	{
		heapleak();
	}

	_getch();

	return 0;
}
