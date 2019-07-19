#include <iostream>
#include <vector>

using namespace std;


vector<int> prefixSums(vector<int> A)
{
	vector<int> x(A.size()+1,0);

	x.at(0) = 0;

	for (int p = 1; p < A.size() + 1; p++)
	{
		x.at(p) = x.at(p - 1) + A.at(p - 1);
	}

	return x;

}


int main()
{

	vector<int>x;

	x = prefixSums(vector<int>{ 1,2,3,4,5,6 });

	return 1;
}