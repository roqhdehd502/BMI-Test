

/* FFMI = �����淮(kg) / Ű^2(m)
Ű�� 180cm �̻��� ����� ���� ���� FFMI = FFMI + (6.0 x (Ű(m) - 1.8))*/


// �Լ� �ʿ����
/*
int FFMI_Sex(char Sex, char Male, char Female)
{
	if (Sex == 'M') { // ���� �����̶��
		Male = Sex; // ������ �������� ����
	}
	else {
		Female = Sex; // �ƴϸ� �������� ����
	}

	return Sex;
} 
*/



/*
int FFMI_ExFat(char Sex, char Male, double Weight, double Height, double ExFat)
{
	if (Sex == Male) { // �����϶�
		ExFat = (1.10 * Weight) - (128 * ((Weight * Weight) / (Height * Height))); // �������� �����淮 ����(Ű�� cm������ ���)
	}
	else { // �����϶�
		ExFat = (1.07 * Weight) - (128 * ((Weight * Weight) / (Height * Height))); // �������� �����淮 ����(Ű�� cm������ ���)
	}

	return ExFat;
}
*/

// char male, exfat �����ΰ� �ʿ����
double FFMI_ExFat(char sex, double Weight, double Height)
{
	double exfat;

	if (sex == 'M') { // �����϶�
		exfat = (1.10 * Weight) - (128 * ((Weight * Weight) / (Height * Height))); // �������� �����淮 ����(Ű�� cm������ ���)
	}
	else { // �����϶�
		exfat = (1.07 * Weight) - (128 * ((Weight * Weight) / (Height * Height))); // �������� �����淮 ����(Ű�� cm������ ���)
	}
	return exfat;
}


/*
int FFMI_Formula(double Height, double ExFat, double FFMI)
{
	if (Height < 1.8) { // ���� �Է��� Ű�� 1.8m �̸��̶��
		FFMI = ExFat / (Height * Height); // ������ ������ ����
	}
	else FFMI = (ExFat / (Height * Height)) + (6.0 * (Height - 1.8)); // �ƴ϶�� ������ FFMI ������ ����

	return FFMI;
}
*/

// ffmi�� �μ��γ�����ȵ� �ʱ�ȭ�������� �������ϴ�. ���������������
int FFMI_Formula(double Height, double ExFat)
{
	double FFMI;
	if (Height < 1.8) { // ���� �Է��� Ű�� 1.8m �̸��̶��
		FFMI = ExFat / (Height * Height); // ������ ������ ����
	}
	else FFMI = (ExFat / (Height * Height)) + (6.0 * (Height - 1.8)); // �ƴ϶�� ������ FFMI ������ ����

	return FFMI;
}


/*
int FFMI_Grade(double FFMI, double Grade)
{
	if (FFMI >= 30) printf("�๰���� �Ұ����� ��ġ");
	else if (FFMI >= 28) printf("���򷲷� ��ǻ� �Ұ����� ����");
	else if (FFMI >= 26) printf("���̴� Ȥ�� �ؼҼ��� Ÿ�� ������ ����");
	else if (FFMI >= 23) printf("���򷲷� �ٴٸ��� �ִ� �Ѱ����");
	else if (FFMI >= 21) printf("�Ϲ����� �ſ� ���� ����");
	else if (FFMI >= 18) printf("��� ����");
	else printf("��� ����");

	return Grade;
}
*/

// grade ���� �μ��� �����ʿ���� // ���� ���ڿ��� �޾Ƽ� ���ο��� ����Ұ�
void FFMI_Grade(double FFMI)
{
	if (FFMI >= 30) printf("�๰���� �Ұ����� ��ġ�Դϴ�.");
	else if (FFMI >= 28) printf("���򷲷� ��ǻ� �Ұ����� �����Դϴ�.");
	else if (FFMI >= 26) printf("���̴� Ȥ�� �ؼҼ��� Ÿ�� ������ �����Դϴ�.");
	else if (FFMI >= 23) printf("���򷲷� �ٴٸ��� �ִ� �Ѱ�����Դϴ�.");
	else if (FFMI >= 21) printf("�Ϲ����� �ſ� ���� �����Դϴ�.");
	else if (FFMI >= 18) printf("��� �����Դϴ�.");
	else printf("��� �����Դϴ�.");
}

