#include <stdio.h>
#include "BMI_Formula.h"

void main()
{
	double weight, height, result, grade; // 몸무게, 키 순으로 선언
	// double convert = height * 0.01; // 키 단위 변환. cm단위인 키를 m단위로 환산		
		   
	printf("안녕하세요. 본 프로그램은 BMI측정을 위한 프로그램입니다.\n");
	printf("어디까지나 참고용이니 정확한 측정을 원하신다면 인근 보건소 및 병원 방문을 바랍니다.\n");
	printf("\n");

	printf("당신의 키를 적어주세요. (ex. 181)\n");
    scanf("%lf", &height);
	height *= 0.01;
	printf("당신의 몸무게를 적어주세요. (ex. 83)\n");
	scanf("%lf", &weight); // %lf: Long floating point. 부동 소수형 포인트

	result = bmi(height,weight);
	printf("당신의 BMI 수치는 %.1f 이고 ", result); // %.1f: float 형식의 실수 상수로 표현합니다. (소수점 첫 째 자리까지 표현)
	grade = bmi_grade(result);
	printf("%c단계입니다.\n", grade);
	printf("항상 건강한 하루 보내세요~\n");
}