#include "class.h"

int nk(int n, int k)
{
	if (k == 1){
		return n;
	}
	return n*nk(n, k - 1);

}