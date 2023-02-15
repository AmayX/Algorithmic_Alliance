#include <chrono>
#include <iostream>
using namespace std;
using namespace std::chrono;

void fun()
{
	int sum=0;
	for (int i=1;i<=1000;i++)
	sum+=i;
	cout<<sum<<"\n";
}

int main()
{
	auto start = high_resolution_clock::now();
	fun();
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);
	cout << "Time taken: "<< duration.count() << " microseconds" << endl;
	return 0;
}
