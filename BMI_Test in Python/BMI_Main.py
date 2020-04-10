# coding: utf-8

import sys
sys.path.append("C:/Users/309al/OneDrive/Desktop/Programming/Work Space/BMI_Test in Python")
import BMI_Calculation

def BMI_Information():
    print("안녕하세요! 본 프로그램은 BMI 측정을 도와주고 있습니다.")
    Height = input("당신의 키(cm)를 입력해주세요.")
    Height *= 0.01
    Weight = input("당신의 몸무게(kg)를 입력해주세요.")

    Result = BMI_Calculation.BMI_Formula
    print("당신의 BMI 수치는 %d이고" % Result)

    if Result >= 25:
        print("결과는 비만입니다.")
    elif Result >= 23:
        print("결과는 과체중입니다.")
    elif Result >= 18.5:
        print("결과는 정상입니다.")
    else:
        print("결과는 저체중입니다.")