#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	while (1)
	{
		printf("��ע�⣺��ĵ��Խ���һ���Ӻ�ػ���������룺��������ȡ���ػ�\n ������>:");
		scanf("%s", input);
		if (strcmp(input, "������") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}