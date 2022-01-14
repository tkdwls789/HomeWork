#include <iostream>

using namespace std;
void Rervers(const char* _Sorce, char* _Result)
{

	char iTemp[100] = {};


	int Stringlen = 0;
	for (int i = 0; 0 != _Sorce[i]; i += 1)
	{
		Stringlen += 1;
	}

	for (int i = 0; i < 100; i += 1)
	{
		_Result[i] = _Sorce[Stringlen-1];
		Stringlen -= 1;
	}



}

int main()
{
	char Text[100] = {};
	Rervers("0123456789", Text);
	printf_s(Text);
}