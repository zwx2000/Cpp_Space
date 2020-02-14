#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printv(vector<int>& v)
{
	for (auto& i : v)
		cout << i << " ";
	cout << endl << "======================================" << endl;
}

int main()
{
	vector<int> vi;
	vi = { 1,2,3,4,5,6 };

	auto itr = find(vi.begin(), vi.end(), 1);
	if (itr == vi.end())
		cout << "find none" << endl;
	else
	{
		cout << "find" << endl;
		vi.erase(itr);
	}
	printv(vi);
	return 0;
}

int main2()
{
	int arr[3] = { 888,888,888 };
	vector<int> vi;
	vi = { 1,2,3,4,5,6 };
	vi.insert(vi.begin(), { 777,777,777 });
	printv(vi);
	vi.erase(vi.begin(), vi.begin() + 3);
	printv(vi);
	vi.resize(3);
	printv(vi);
	vi.clear();
	printv(vi);
	return 0;
}

int main1()
{
	vector<int> vi;
	vi = { 1,2,3,4,5,6 };
	vi.push_back(100);
	for (auto & i : vi)
	{
		cout << i << endl;
	}
	while (!vi.empty())
	{
		cout << vi.back() << endl;
		vi.pop_back();
	}
	cout << vi.size() << endl;
	return 0;
}