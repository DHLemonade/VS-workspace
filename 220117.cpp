
#define HUNGRY	0x001
#define THIRSTY	0x002
#define TIRED	0x004
#define FIRE	0x008

#define COLD	0x010
#define POISON	0x020
// 1. ������
// 2. ��������

# define MAX_SIZE 20

// �ּ�
// ���� ����, �ڵ�� �νĵ��� �ʴ´�.

// ��������
int global = 0;


int Add(int left, int right)
{
	return left + right;
}

//�Լ�
int main()
{
		//int : �ڷ���
		//i : ������

		int data = 0;

		//�ڷ��� (ũ�� ����, byte)
		//������ : char(1), short(2), int(4), long(4), long long(8)
		//�Ǽ��� : float(4), double(8)
		 
		int i = 0;

		// 1 ����Ʈ�� ����� ǥ��
		// 256���� -> 0 ~ 255
		unsigned char c = 0;
		c = 0;
		//c = 255;
		c = -1;
		

		// 1 ����Ʈ�� ���, ���� �Ѵ� ǥ��
		// -128 ~ 0 ~ 127
		char c1 = 0;
		c1 = -1;

		// ���� ���� ã��(2�� ������)
		// �����Ǵ�  ����� ��ȣ�� ���� ��, 1�� ���Ѵ�.
		int a = 4 + 4.0;

		// ����ǥ�� ��İ� �Ǽ� ǥ�� ����� �ٸ���.
		// �Ǽ� ǥ������� ���е��� �����Ѵ�.
		// �ٶ� double(8) �ڷ����� float(4)���� �� �Ʒ��� �Ҽ������� ��Ȯ�ϰ� ǥ���� �����ϴ�.

		// ������ ��������, �Ǽ��� �Ǽ����� �����ϵ�, �� ǥ������� �� �����ڰ� ����� ��� ��������� ��ȯ����.
		float f = 10.2415f + (float)20;

		// �Ǽ��� ����� ���� ��� �Ҽ��� �ڿ� f�� �����̳� float �ڷ�������, f�� ������ ������ double �ڷ������� �����Ѵ�.


		// ������
		// ���� ������, =
		 
		// ��� ������
		// +, -, *, /, %(��ⷯ��, ������, �ǿ����ڰ� ��� ����)
		// ++, -- (���� ������)
		// �� �ܰ� ���� �Ǵ� ����
		int data = 10 + 10;
		// data = data + 20;
		data += 20;
		data = (int)(10.f / 3.f);

		data = 0;
		++data; // ����(��ġ)
		data++; // ����(��ġ)

		// ���� �����ڷ� ����ϴ� ���, ������ �켱������ ���� �������� �и���.

		data = 0;

		a = 10;
		data = ++a;
		data = a++;

		data = 0;
		data--;
		--data; 

		// �� ������
		// !(��), &&(��), ||(��)
		// ��(true), ����(false)
		// ��   : 0�� �ƴ� ��, �ַ� 1
		// ���� : 0

		bool truefalse = false;
		bool IsTrue = 100;


		IsTrue = true;
		IsTrue = !IsTrue;

		int iTrue = 0;
		iTrue != iTrue;

		iTrue = 0 && 200;
		iTrue = 0 || 0;

		// �� ������
		// ==, !=, <, <=, >, >=
		// ��, ����


		// ����
		// if, else
		if (0 && 200)
		{
			data = 100;
		}
		 
		if (data == 100)
		{

		}
		else
		{
			// if�� ������ ��� ����
		}

		switch (10)
		{
		case 10:

			break;
		case 20:

			break;
		default:

			break;
		}

		int iTest = 10;
		if (iTest == 10)
		{

		}
		else if (iTest == 20)
		{

		}
		else
		{

		}
				

		
		//switch case

		// ���� ������

		iTest == 20 ? iTest = 100 : iTest = 200;

		if (iTest == 20)
		{
			iTest = 100;
		}
		else
		{
			iTest = 200;
		}
		return 0;

		// ��Ʈ ������
		// ����Ʈ <<, >>
		unsigned char byte = 10;
		byte <<= 3; // 2^n ���
		byte >>= 1; // 2^n ���� ��

		// ��Ʈ ��(&), ��(|), xor(^), ����(~)
		// ��Ʈ ������ ������ ����
		// & �Ѵ� 1�� ��� 1
		// | �� �� �ϳ��� 1 �̸� 1
		// ^ ������ 0, �ٸ��� 1
		// ~ 1�� 0����, 0�� 1��

		unsigned int iStatus = 0;


		// ���� �߰�
		iStatus |= HUNGRY;
		iStatus |= THIRSTY;


		// ���� Ȯ�� 
		if (iStatus & THIRSTY)
		{

		}
		
		// Ư�� �ڸ� ��Ʈ ����
		iStatus &= ~THIRSTY;

		// ����
		// 1. ��������
		// 2. ��������
		// 3. ��������
		// 4. �ܺκ���


		// ��������
		int iName = 0;


		// ��ȣ �ȿ� ����� ����(�Լ�, ����)
		{
			// ������ ��Ģ
			int iName = 100;

			iName;
		}


		// �Լ�
		data = Add(10, 20);





		return 0;
}