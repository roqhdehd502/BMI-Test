/*BMI = ������(kg) / {����(m)*����(m)}*/

int bmi(double height, double weight)
{
	return weight / (height * height); // BMI��ġ. BMI���Ŀ� ���� ������� ���
}

int bmi_grade(double result)
{
	if (result > 30) printf("����"); // ����� ���� BMI��ġ�� �̿��ؼ� ��� �Ǵ�
	else if (result <= 30) printf("��");
	else if (result <= 25) printf("��ü��");
	else if (result <= 23) printf("����");
	else printf("��ü��");

	return result;
}