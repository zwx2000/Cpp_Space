#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vi;
	vi = { 1,2,3,4,5,6 };
	vector<int>::iterator itr;
	for (auto itr = vi.crbegin(); itr != vi.crend(); ++itr)
	{
		cout << *itr << endl;
	}
	return 0;
}