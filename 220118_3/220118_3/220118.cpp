#include <stdio.h>

// 사용자 정의 자료형

typedef struct _tagMyST
{
	int a;
	float f;
}MYST;

typedef struct _tagBig
{
	MYST k;
	int i;
	char c;
}BIG;

int main()
{
	// 구조체
	MYST t;
	t.a = 10;
	t.f = 10.2312f;

	int iSize = sizeof(MYST);
	return 0;
}