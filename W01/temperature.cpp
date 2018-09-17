#include<stdio.h>

int main(){
	float C,F;
	printf("請輸入華氏溫度:");
	scanf("%f",&F);	
	C=(F-32)*5/9;
	printf("%.1f F=%.1f C\n",F,C);
	return 0;	
}

/*
請輸入華氏溫度 F:
68.9F=20.5C 
 */
 #include<stdio.h>

int main(){
	float C,F;
	printf("請輸入攝氏溫度:");
	scanf("%f",&C);	
	F=C*9/5+32;
	printf("%.1f C=%.1f F\n",C,F);
	return 0;	
}

/*
請輸入攝氏溫度 C:
20.5C=68.9F
 */
