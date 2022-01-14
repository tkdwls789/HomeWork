// 00.HomeWork220114.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.


#include <iostream>


void ToUpper(const char* _Left, char* _Right)
{
	int iCount = 0;
	for (int i = 0; i < 100; i += 1)
	{
		if ('a' <= _Left[i] && 'z' >= _Left[i])
			_Right[i] = _Left[i]- 32;

		else
			_Right[i] = _Left[i];
		
	}

}

int main()
{
	char Text[100] = "";
	ToUpper("pP1231dcwsec qweA8Asd", Text);
	//      "PP1231DCWSEC"
	printf_s(Text);



}

