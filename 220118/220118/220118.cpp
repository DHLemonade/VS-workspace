#include <stdio.h>

int Add(int a, int b)
{
	return a + b;
}

//�Լ�

int main()
{
	int iData = Add(100, 200);

	iData = Add(300, 400);
	iData = Add(222, 400);
	iData = Add(333, 400);


	// �ݺ���
	//for (/*�ݺ��� �ʱ�ȭ*/;/*�ݺ��� ���� üũ*/;/*�ݺ��� ����*/)
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

	//�ܼ�
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
	
	// �Լ��� ����ϴ� �޸� ����
	// ���� �޸� ����

	return 0;
}

// ����Ű
// ������ ���� �ּ�		: ctrl + k, c
// ������ ���� �ּ� ����	: ctrl + k, u
// Alt Drag 

// �����
// ����� ���� : F5
// �ߴ��� ���� �� ���� : F9
// ����� ��, ���� ���� : F10
// ����� ��, ���� ����(�Լ� ����) : F11
// ����� ��, ����� �����ϱ� : Shift + F5
