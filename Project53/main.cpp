#include <iostream>
#include <string>

using namespace std;
#define DEFAULT_SIZE 100'000

void test01() {
	for (int i = 0; i < 100'000'000; i++);
}

void test02() {
	for (int i = 0; i < 1'000'000'000; i++);
}

int main() {
	long long start = time(NULL);
	test01();

	long long finish = time(NULL);
	cout << "test01 running with " << finish - start << "seconds" << "\n";
	
	start = time(NULL);
	test02();

	finish = time(NULL);
	cout << "test02 running with " << finish - start << "seconds";

	return 0;
}