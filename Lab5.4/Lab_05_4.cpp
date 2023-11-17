#include <iostream> 
#include <cmath> 

using namespace std;

double P0(const int N, const int z)
{
	double p = 1;
	for (int i = N; i <= z; i++) {
		p *= (i * N) / (pow(i, 2) + pow(N, 2));
	}
	return p;
}

double P1(const int N, const int z, const double i)
{
	if (i > z)
		return 1;
	else
		return  (i * N) / (pow(i, 2) + pow(N, 2)) * P1(N, z, i + 1);
}

double P2(const int N, const int i)
{
	if (i < N)
		return 1;
	else
		return (i * N) / (pow(i, 2) + pow(N, 2)) * P2(N, i - 1);
}

double P3(const int z, const int N, const int i, double t)
{
	t = t * (i * N) / (pow(i, 2) + pow(N, 2));
	if (i >= z)
		return t;
	else
		return P3(z, N, i + 1, t);
}

double P4(const int N, const int i, double t)
{
	t = t * (i * N) / (pow(i, 2) + pow(N, 2));
	if (i <= N)
		return t;
	else
		return P4(N, i - 1, t);
}

int main()
{
	int  N;
	cout << "N = "; cin >> N;
	int z = 16;
	cout << "P0 = " << P0(N, z) << endl;
	cout << "P1 rec down ++ = " << P1(N, z, N) << endl;
	cout << "P2 rec down -- = " << P2(N, z) << endl;
	cout << "P3 rec up ++ = " << P3(z, N, N, 1) << endl;
	cout << "P4 rec up -- = " << P4(N, z, 1) << endl;

	return 0;
}