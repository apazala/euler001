#include <iostream>
#include <cstdint>

using namespace std;

int64_t summult(int k, int sup)
{
	int64_t n = sup/k;
	return n*(n+1)*k/2;
}

int main(int argc, char **argv)
{	
	
	int lim = 1000-1;
	
	int64_t ans = summult(3,lim)+summult(5,lim)-summult(3*5,lim);
	cout << ans << endl;
	
	
    return 0;
}
