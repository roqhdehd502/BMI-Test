#include <stdio.h>
#include "BMI_Formula.h"

void main()
{
	double weight, height, result, grade; // ������, Ű ������ ����
	// double convert = height * 0.01; // Ű ���� ��ȯ. cm������ Ű�� m������ ȯ��		
		   
	printf("�ȳ��ϼ���. �� ���α׷��� BMI������ ���� ���α׷��Դϴ�.\n");
	printf("�������� ������̴� ��Ȯ�� ������ ���ϽŴٸ� �α� ���Ǽ� �� ���� �湮�� �ٶ��ϴ�.\n");
	printf("\n");

	printf("����� Ű�� �����ּ���. (ex. 181)\n");
    scanf("%lf", &height);
	height *= 0.01;
	printf("����� �����Ը� �����ּ���. (ex. 83)\n");
	scanf("%lf", &weight); // %lf: Long floating point. �ε� �Ҽ��� ����Ʈ

	result = bmi(height,weight);
	printf("����� BMI ��ġ�� %.1f �̰� ", result); // %.1f: float ������ �Ǽ� ����� ǥ���մϴ�. (�Ҽ��� ù ° �ڸ����� ǥ��)
	grade = bmi_grade(result);
	printf("%c�ܰ��Դϴ�.\n", grade);
	printf("�׻� �ǰ��� �Ϸ� ��������~\n");
}