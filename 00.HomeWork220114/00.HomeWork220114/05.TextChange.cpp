#include <iostream>



void TextChange(char* _Text, const char* _Prev, const char* _Next)
{

	for (int i = 0; i < 100; i += 1)
	{
		if (_Text[i] == *_Prev && _Text[i + 1] == *_Prev)
		{
			_Text[i] = *_Next;
			_Text[i+1] = *_Next;
		}

	}

}

int main()
{

	char Text[100] = "aa, bb, aa, bb aa aa aa aaaaaaa ccdffeds";

	TextChange(Text, "aa", "fff");
	printf_s(Text);
	// "fff, bb, fff, bb fff fff fff fffffffffa ccdffeds";

}