#incldue <stdafx.h>
#include <GitTest.h>
// This  File is Test
void in_func() {
	for (int i = 0; i < 100; i++) {
		std::cout << i << std::endl;
		if (i >= 50)
			std::cout << "i is over 50 : " << i << std::endl;
		else
			std::cout << "i is under 50 : " << i << std::endl;
	}
}
int GitTest() {
	in_func();
	return 0;
}
