#include <iostream>
#include <vector>

using namespace std;

vector<int> prefixSums(vector<int> A)
{
	vector<int> x(A.size() + 1, 0);

	x.at(0) = 0;

	for (unsigned int p = 1; p < A.size() + 1; p++)
	{
		x.at(p) = x.at(p - 1) + A.at(p - 1);
	}

	return x;

}

int countTotal(vector<int>A, int startIdx, int endIdx)
{
	// A: prefix sums array of an array.
	return (A.at(endIdx + 1) - A.at(startIdx));
}
/*
def passingcars(A):
	n = len(A)
	pref = prefix_sums(A)
	for p in xrange(n)
		if A[p] == 0
			total += count_total(pref,p+1,N-1)
	return total;
*/
int solution(vector<int>& A)
{
	int n = A.size();
	int total = 0;

	vector<int>pref = prefixSums(A);

	for (int p = 0; p < n; p++)
	{
		if (A.at(p) == 0)
		{
			total += countTotal(pref, p + 1, n - 1);
		}
	}

	if (total > 1000000000)
		return -1;

	return total;



}