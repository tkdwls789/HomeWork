#include <iostream>


void Cut(const char* _Sorce, int _Start, int _End, char* _Result)
{
	int iNum = 0;
	for (int i = 0; i < 100; i += 1)
	{
		if ((_Start + 48) <= _Sorce[i] && (_End + 48) >= _Sorce[i])
		{
			_Result[iNum] = _Sorce[i];
			iNum += 1;
		}
	}
}

int main()
{
	char Text[100] = {};
	Cut("0123456789", 2, 7, Text);
	printf_s(Text);
	// "234567"


}