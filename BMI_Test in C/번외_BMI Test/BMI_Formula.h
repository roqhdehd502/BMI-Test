/*BMI = 몸무게(kg) / {신장(m)*신장(m)}*/

int bmi(double height, double weight)
{
	return weight / (height * height); // BMI수치. BMI공식에 의해 결과값을 계산
}

int bmi_grade(double result)
{
	if (result > 30) printf("고도비만"); // 제어문에 의해 BMI수치를 이용해서 등급 판단
	else if (result <= 30) printf("비만");
	else if (result <= 25) printf("과체중");
	else if (result <= 23) printf("정상");
	else printf("저체중");

	return result;
}