#include <iostream>       // std::cout
#include <chrono>         // std::chrono::seconds
#include <vector>
#include <time.h>
#include <algorithm>
#include <stack>

#define VECTOR_SIZE 10000

using namespace std;


int leaderMethod1(vector<int>N)
{
	int candidate, count;

	int leader = -1;

	/*
	for (int i = 0; i < N.size(); i++)
	{
		cout << "element N: " << N.at(i);
	}
	*/



	for (int i = 0; i < N.size(); i++)
	{
		candidate = N.at(i);
		count = 0;

		for (int k = 0; k < N.size(); k++)
		{
			if (N.at(k) == candidate)
				count++;
		}

		if (count > (N.size() / 2))
			leader = candidate;
	}

	return leader;

}


int leaderMethod2(vector<int>N)
{
	int candidate;

	int count = 0;

	int leader = -1;

	sort(N.begin(), N.end());

	candidate = N.at(N.size() / 2);
	for (int i = 0; i < N.size(); i++)
	{
		if (N.at(i) == candidate)
			count++;
	}

	if (count > (N.size() / 2))
	{
		leader = candidate;
	}

	return leader;
}

int leaderMethod3(vector<int>N)
{
	int leader = -1;
	int candidate = 0;
	int count = 0;

	stack<int> S;


	for (int i = 0; i < N.size(); i++)
	{
		if ((S.empty() == false) && (S.top() != N.at(i)))
		{
			S.pop();
		}
		else
		{
			S.push(N.at(i));
		}
	}

	if (S.empty() == false)
	{
		candidate = S.top();
	}


	for (int k = 0; k < N.size(); k++)
	{
		if (N.at(k) == candidate)
			count++;
	}

		if (count > (N.size() / 2))
			leader = candidate;

	
	return leader;
}




int main()
{
	
	
	
	vector<int>N;


	srand((unsigned)time(NULL));
	int a = rand() % 20 + 1; //1 to 20
	for (int i = 0; i < VECTOR_SIZE; i++) {
		int b = rand() % 20 + 1;
		N.push_back(b);
	}
	


	
	int leader;


	auto start = chrono::steady_clock::now();
	leader = leaderMethod1(N);
	auto end = chrono::steady_clock::now();

	cout << "leader is:  " << leader << endl;

	cout << "Elapsed time in miliseconds leader1: "
		<< chrono::duration_cast<chrono::milliseconds>(end - start).count()
		<< " ns" << endl;


		 start = chrono::steady_clock::now();
		leader = leaderMethod2(N);
		 end = chrono::steady_clock::now();



	cout << "Elapsed time in miliseconds leader2: "
		<< chrono::duration_cast<chrono::milliseconds>(end - start).count()
		<< " ns" << endl;
		


	cout << "leader is:  " << leader << endl;


		start = chrono::steady_clock::now();

		leader = leaderMethod3(N);
		end = chrono::steady_clock::now();



		cout << "Elapsed time in miliseconds leader3: "
			<< chrono::duration_cast<chrono::milliseconds>(end - start).count()
			<< " ns" << endl;
		


		cout << "leader is:  " << leader << endl;


	return 0;
}