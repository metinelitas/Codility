// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

#include <stack>
#include <vector>

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
	int candidate = 0;
	unsigned int count = 0;
	int index = -1;

	stack<int> S;

// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

#include <stack>
#include <vector>

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
	int candidate = 0;
	unsigned int count = 0;
	int index = -1;

	stack<int> S;


	for (unsigned int i = 0; i < A.size(); i++)
	{
		if ((S.empty() == false) && (S.top() != A.at(i)))
		{
			S.pop();
		}
		else
		{
			S.push(A.at(i));
		}
	}

	if (S.empty() == false)
	{
		candidate = S.top();
	}


	for (unsigned int k = 0; k < A.size(); k++)
	{
		if (A.at(k) == candidate)
		{
		    index = k;
			count++;
		}
	}

		if (count > (A.size() / 2))
		{
            return index;
		}

    return -1;	
}
	for (unsigned int i = 0; i < A.size(); i++)
	{
		if ((S.empty() == false) && (S.top() != A.at(i)))
		{
			S.pop();
		}
		else
		{
			S.push(A.at(i));
		}
	}

	if (S.empty() == false)
	{
		candidate = S.top();
	}


	for (unsigned int k = 0; k < A.size(); k++)
	{
		if (A.at(k) == candidate)
		{
		    index = k;
			count++;
		}
	}

		if (count > (A.size() / 2))
		{
            return index;
		}

    return -1;	
}