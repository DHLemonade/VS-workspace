#include <stdio.h>

int Add(int a, int b)
{
	return a + b;
}

//함수

int main()
{
	int iData = Add(100, 200);

	iData = Add(300, 400);
	iData = Add(222, 400);
	iData = Add(333, 400);


	// 반복문
	//for (/*반복자 초기화*/;/*반복자 조건 체크*/;/*반복자 변경*/)
	//{

	// }

	// 0, 1, 2, 3
	/*for (int i = 0; i < 4; ++i)
	{
		if (i % 2 == 1)
		{
			continue;
		}
		printf("Output Test for\n");
	}

	int i = 0;

	while (i < 2)
	{
		printf("Output Test while\n");

		++i;
	}

	int i = 0;
	int i2 = 2;*/

	//콘솔
	//printf
	printf("abcdef %d \n", 10);
	printf("abcdef %f \n", 3.14f);

	for (int i = 0; i < 10; ++i)
	{
		printf("Output i : %d \n", i);
	}
	//scanf
	int iInput = 0;
	scanf_s("%d", &iInput)
	
	// 함수가 사용하는 메모리 영역
	// 스택 메모리 영역

	return 0;
}

// 단축키
// 지정한 구문 주석		: ctrl + k, c
// 지정한 구문 주석 해제	: ctrl + k, u
// Alt Drag 

// 디버깅
// 디버깅 시작 : F5
// 중단점 생성 및 해제 : F9
// 디버깅 중, 구문 수행 : F10
// 디버깅 중, 구문 수행(함수 진입) : F11
// 디버깅 중, 디버깅 종료하기 : Shift + F5
