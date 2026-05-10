#include <iostream>
#include <string>

using namespace std;
#define DEFAULT_SIZE 100'000

void test01() {
	for (int i = 0; i < 1'000'000; i++);
}

void test02() {
	for (int i = 0; i < 10'000'000; i++);
}

int main() {
	long long start = time(NULL);

	return 0;
}