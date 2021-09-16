




#include <bits/stdc++.h>
using namespace std;


void func_to_handle_mem_leak()
{
	int* ptr = new int(5);


	delete (ptr);
}


int main()
{

	
	func_to_handle_mem_leak()

		return 0;
}
