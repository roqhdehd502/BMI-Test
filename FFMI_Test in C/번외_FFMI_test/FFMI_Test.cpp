#include <stdio.h>
#include "FFMI_Logic.h"

void main()
{
	// double Weight, Height, ExFat, FFMI, Grade; // Weight: 체중, ExFat: 제지방량, Height: 키, FFMI: 체지방량지수, Grade: FFMI등급											   
	// char Sex, Male, Female; // Sex: 성별, Male : 남성, Female : 여성,
	char sex;
	double Weight, Height, ExFat, FFMI; // grade 변수 필요없음

	printf("안녕하세요. 본 프로그램은 FFMI측정을 위한 프로그램입니다.\n");
	printf("FFMI는 Fat Free Mass Index의 약자로 체지방량지수를 일컫는 용어입니다.\n");
	printf("본 결과는 어느정도 운동을 하신 분들에게 비교적 정확한 결과가 나올 수 있습니다.\n");
	printf("정확한 체지방량지수를 원하신다면 인근 보건소 및 병원에서 측정하시는 것을 추천합니다.\n");
	printf("\n");

	printf("당신의 성별을 기입해주세요. (남성이시면 M, 여성이시면 F라고 적어주세요.)\n");
	scanf("%c", &sex);

	// Sex = FFMI_Sex(Sex, Male, Female); 
	// 성별 구분함수 필요없음
	printf("당신의 체중을 기입해주세요. 예) 78kg -> 78\n");
	scanf("%lf", &Weight);

	printf("당신의 키를 기입해주세요. 예) 180cm -> 180\n");
	scanf("%lf", &Height);
	printf("\n");

	// ExFat = FFMI_ExFat(Sex, Male, Weight, Height, ExFat);

	// exfat은 return 받는 변수 인수로 넣으면 안됩니다.
	ExFat = FFMI_ExFat(sex, Weight, Height);
	

	Height *= 0.01; // cm단위인 키를 m로 환산

	// FFMI = FFMI_Formula(Height, ExFat, FFMI);
	// FFMI은 return 받는 변수 인수로 넣으면 안됩니다.
	FFMI = FFMI_Formula(Height, ExFat);
	
	printf("당신의 FFMI 수치는 %.1f이고\n", FFMI);
	printf("이는 ");
	
	// Grade = FFMI_Grade(FFMI, Grade);
	// 리턴받아서 처리할일 없음
	FFMI_Grade(FFMI);

	// 입니다 FFMI_Grade() 함수에 추가
	// printf("입니다.\n");
}