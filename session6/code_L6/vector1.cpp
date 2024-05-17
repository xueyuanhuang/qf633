#include <iostream>
#include <vector>
using namespace std;

int main()
{
	if (0)
	{
		vector<int> g1;

		for (int i = 1; i <= 10; i++)
			g1.push_back(i * 10);

		cout << "\nReference operator [g] : g1[2] = " << g1[2];
		cout << "\nat : g1.at(4) = " << g1.at(4);
		cout << "\nfront() : g1.front() = " << g1.front();
		cout << "\nback() : g1.back() = " << g1.back();

		// pointer to the first element
		int *pos = g1.data();

		cout << "\nThe first element is " << *pos;
	}

	if (0)
	{
		vector<int> g1;
		for (int i = 1; i <= 5; i++)
		{
			g1.push_back(i);
		}

		// std::cout << g1.begin() << std::endl;
		for (auto i = g1.begin(); i != g1.end(); ++i)
		{
			*i = *i * 2;
			std::cout << *i << std::endl;
		}

		for (auto i = g1.cbegin(); i != g1.cend(); ++i)
		{
			// *i = *i*2;
			std::cout << *i << std::endl;
		}

		for (auto i = g1.rbegin(); i != g1.rend(); ++i)
		{
			*i = *i * 2;
			std::cout << *i << std::endl;
		}

		for (auto i = g1.crbegin(); i != g1.crend(); ++i)
		{
			// *i = *i*2;
			std::cout << *i << std::endl;
		}
	}

	if (0)
	{
		vector<int> g1;
		for (int i = 1; i <= 5; ++i)
		{
			g1.push_back(i);
		}

		std::cout << g1.size() << std::endl;
		std::cout << g1.capacity() << std::endl;
		std::cout << g1.max_size() << std::endl;

		// g1.resize(5);
		g1.shrink_to_fit();
		for (auto i = g1.begin(); i != g1.end(); ++i)
		{
			std::cout << *i << std::endl;
		}
		std::cout << g1.capacity() << std::endl;

		std::cout << g1.empty() << std::endl;

		if (1 == true)
		{
			std::cout << "hah" << std::endl;
		}
	}

	if(1){
		vector<int> v;
		v.push_back(1);
		v.assign(5,10);
		for (auto i = v.begin(); i != v.end(); ++i)
		{
			std::cout << *i << std::endl;
		}
		// v.push_back(15);
		// std::cout << v[v.size()-1] << std::endl;
		// v.pop_back();
		// std::cout << v[v.size()-1] << std::endl;
		// v.insert(v.begin(), 5);
		// std::cout << v[0] << std::endl;
		// v.erase(v.begin());
		// std::cout << v[0] << std::endl;
		// v.emplace_back(14);
		// std::cout << v[v.size()-1] << std::endl;
		// v.clear();
		// std::cout << v.size() << std::endl;
		auto somewhere = v.begin() + 1;
		v.insert(somewhere, 1);
		for (auto i = v.begin(); i != v.end(); ++i)
		{
			std::cout << *i << std::endl;
		}

		
	}
	return 0;
}