#include <iostream>


int lope(int* stairs, int count, int new_place = 0)
{
	//�������� ����������
	if (new_place < 0 || new_place > *stairs) return count;
	
	//���� ����
	if (new_place == *stairs) count++;

	//�������� � ����� � ���� ����
	for (int i = 1; i <= 3; i++)
	{
		lope(stairs, count, new_place + i);
	}
}


int main()
{
	int stairs = 3;
	int x = 0;
	x = lope(&stairs, x);

	std::cout << x;

	return 0;
}