

/* FFMI = 제지방량(kg) / 키^2(m)
키가 180cm 이상인 사람을 위한 보정 FFMI = FFMI + (6.0 x (키(m) - 1.8))*/


// 함수 필요없음
/*
int FFMI_Sex(char Sex, char Male, char Female)
{
	if (Sex == 'M') { // 만약 남성이라면
		Male = Sex; // 성별을 남성으로 선언
	}
	else {
		Female = Sex; // 아니면 여성으로 선언
	}

	return Sex;
} 
*/



/*
int FFMI_ExFat(char Sex, char Male, double Weight, double Height, double ExFat)
{
	if (Sex == Male) { // 남성일때
		ExFat = (1.10 * Weight) - (128 * ((Weight * Weight) / (Height * Height))); // 남성전용 제지방량 공식(키는 cm단위로 계산)
	}
	else { // 여성일때
		ExFat = (1.07 * Weight) - (128 * ((Weight * Weight) / (Height * Height))); // 여성전용 제지방량 공식(키는 cm단위로 계산)
	}

	return ExFat;
}
*/

// char male, exfat 변수두개 필요없음
double FFMI_ExFat(char sex, double Weight, double Height)
{
	double exfat;

	if (sex == 'M') { // 남성일때
		exfat = (1.10 * Weight) - (128 * ((Weight * Weight) / (Height * Height))); // 남성전용 제지방량 공식(키는 cm단위로 계산)
	}
	else { // 여성일때
		exfat = (1.07 * Weight) - (128 * ((Weight * Weight) / (Height * Height))); // 여성전용 제지방량 공식(키는 cm단위로 계산)
	}
	return exfat;
}


/*
int FFMI_Formula(double Height, double ExFat, double FFMI)
{
	if (Height < 1.8) { // 만약 입력한 키가 1.8m 미만이라면
		FFMI = ExFat / (Height * Height); // 기존의 공식을 적용
	}
	else FFMI = (ExFat / (Height * Height)) + (6.0 * (Height - 1.8)); // 아니라면 별도의 FFMI 공식을 적용

	return FFMI;
}
*/

// ffmi는 인수로넣으면안됨 초기화전상태임 오류납니다. 넣을이유도없어요
int FFMI_Formula(double Height, double ExFat)
{
	double FFMI;
	if (Height < 1.8) { // 만약 입력한 키가 1.8m 미만이라면
		FFMI = ExFat / (Height * Height); // 기존의 공식을 적용
	}
	else FFMI = (ExFat / (Height * Height)) + (6.0 * (Height - 1.8)); // 아니라면 별도의 FFMI 공식을 적용

	return FFMI;
}


/*
int FFMI_Grade(double FFMI, double Grade)
{
	if (FFMI >= 30) printf("약물없이 불가능한 수치");
	else if (FFMI >= 28) printf("내츄럴로 사실상 불가능한 수준");
	else if (FFMI >= 26) printf("로이더 혹은 극소수의 타고난 유전자 수준");
	else if (FFMI >= 23) printf("네츄럴로 다다를수 있는 한계수준");
	else if (FFMI >= 21) printf("일반인중 매우 좋은 수준");
	else if (FFMI >= 18) printf("평균 수준");
	else printf("평균 이하");

	return Grade;
}
*/

// grade 변수 인수로 받을필요없음 // 추후 문자열로 받아서 메인에서 출력할것
void FFMI_Grade(double FFMI)
{
	if (FFMI >= 30) printf("약물없이 불가능한 수치입니다.");
	else if (FFMI >= 28) printf("내츄럴로 사실상 불가능한 수준입니다.");
	else if (FFMI >= 26) printf("로이더 혹은 극소수의 타고난 유전자 수준입니다.");
	else if (FFMI >= 23) printf("네츄럴로 다다를수 있는 한계수준입니다.");
	else if (FFMI >= 21) printf("일반인중 매우 좋은 수준입니다.");
	else if (FFMI >= 18) printf("평균 수준입니다.");
	else printf("평균 이하입니다.");
}

