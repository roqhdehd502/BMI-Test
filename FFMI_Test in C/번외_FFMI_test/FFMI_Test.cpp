#include <stdio.h>
#include "FFMI_Logic.h"

void main()
{
	// double Weight, Height, ExFat, FFMI, Grade; // Weight: ü��, ExFat: �����淮, Height: Ű, FFMI: ü���淮����, Grade: FFMI���											   
	// char Sex, Male, Female; // Sex: ����, Male : ����, Female : ����,
	char sex;
	double Weight, Height, ExFat, FFMI; // grade ���� �ʿ����

	printf("�ȳ��ϼ���. �� ���α׷��� FFMI������ ���� ���α׷��Դϴ�.\n");
	printf("FFMI�� Fat Free Mass Index�� ���ڷ� ü���淮������ ���´� ����Դϴ�.\n");
	printf("�� ����� ������� ��� �Ͻ� �е鿡�� ���� ��Ȯ�� ����� ���� �� �ֽ��ϴ�.\n");
	printf("��Ȯ�� ü���淮������ ���ϽŴٸ� �α� ���Ǽ� �� �������� �����Ͻô� ���� ��õ�մϴ�.\n");
	printf("\n");

	printf("����� ������ �������ּ���. (�����̽ø� M, �����̽ø� F��� �����ּ���.)\n");
	scanf("%c", &sex);

	// Sex = FFMI_Sex(Sex, Male, Female); 
	// ���� �����Լ� �ʿ����
	printf("����� ü���� �������ּ���. ��) 78kg -> 78\n");
	scanf("%lf", &Weight);

	printf("����� Ű�� �������ּ���. ��) 180cm -> 180\n");
	scanf("%lf", &Height);
	printf("\n");

	// ExFat = FFMI_ExFat(Sex, Male, Weight, Height, ExFat);

	// exfat�� return �޴� ���� �μ��� ������ �ȵ˴ϴ�.
	ExFat = FFMI_ExFat(sex, Weight, Height);
	

	Height *= 0.01; // cm������ Ű�� m�� ȯ��

	// FFMI = FFMI_Formula(Height, ExFat, FFMI);
	// FFMI�� return �޴� ���� �μ��� ������ �ȵ˴ϴ�.
	FFMI = FFMI_Formula(Height, ExFat);
	
	printf("����� FFMI ��ġ�� %.1f�̰�\n", FFMI);
	printf("�̴� ");
	
	// Grade = FFMI_Grade(FFMI, Grade);
	// ���Ϲ޾Ƽ� ó������ ����
	FFMI_Grade(FFMI);

	// �Դϴ� FFMI_Grade() �Լ��� �߰�
	// printf("�Դϴ�.\n");
}