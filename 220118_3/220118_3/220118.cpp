#include <stdio.h>

// ����� ���� �ڷ���

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
	// ����ü
	MYST t;
	t.a = 10;
	t.f = 10.2312f;

	int iSize = sizeof(MYST);
	return 0;
}