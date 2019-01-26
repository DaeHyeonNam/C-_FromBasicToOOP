#include <cstdlib>

int main()
{
	int * a = (int*)malloc(4); // new
	*a= 4;
	free(a); // delete
}
