// HomeWork220117.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>


int StringCount(const char* _Text)
{
	int Count = 0;
	for (int i = 0; 0 != _Text[Count]; i += 1)
	{
		Count += 1;
	}
	return Count;
}

int CountFirst(const char* _Text, int _Start, const char* _FindStr)
{
	int Strlen = StringCount(_Text);
	int Count = 0;

	if (0 > _Start || Strlen < _Start)
	{
		return -1;
	}

	for (int i = 0; _Start < Strlen; i += 1)
	{
		if (*_FindStr == _Text[_Start])
		{
			return Count + 1;
		}
		Count += 1;
		_Start += 1;
	}



}

int CountLast(const char* _Text, int _End, const char* _FindStr)
{
	int Strlen = StringCount(_Text);
	if (0 > _End || Strlen < _End)
	{
		return -1;
	}

	int Count = 0;
	while (*_FindStr != _Text[_End])
	{
		Count += 1;
		_End -= 1;

	}

	return Count;


}


int main()
{

	{
		int Count = CountFirst("aaa eee sd eee gfhq", 15, "eee");

	}
	{
		int Count = CountLast("aaa eee asdfasd eee qweqweqw", 20, "eee");
	}



}
