#include <iostream>


int ToInt(const char* _Left)
{
	int Stringlen = 0;	// 문자열 길이 출력
	for (int i = 0; 0 != _Left[i]; i += 1)
	{
		Stringlen += 1;
	}


	int result = 1;		// 문자열 길이를 기준으로 10의제곱
	for (int i = 0; i < Stringlen - 1; i++)
	{
		result *= 10;
	}
	if (Stringlen == 0)
		result = 1;

	int Value = 0;		// 입력받은 문자열을 Value변수에 숫자로 변경
	for (int i = 0; i < Stringlen; i += 1)
	{
		if ('0' <= _Left[i] && '9' >= _Left[i])
		{
			Value += (_Left[i] - 48) * result;
		}
		result /= 10;
	}


	return Value;
}

int main()
{
	int Value = ToInt("15815");
	int a = 0;


}