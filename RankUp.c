#include <stdio.h>
int main(void) {
	int scan[5];
	int rank[5] = {1, 1, 1, 1, 1};
	int i, j;
	
	printf("비교 할 정수 다섯개를 입력하시오.\n\n");
	
	for(i=0; i<5; i++)
		/*scan의 1차원 주소의 배열에 값을 받아 저장한다.*/
		
		scanf("%d", &scan[i]);
	printf("\n");
	
	for(i=0; i<5; i++)
		for(j=0; j<5; j++)
			/*
			Bubble-sort 방식으로 순위를 비교한다.
			해당 방식은 내림차순 방식이다. 
			*/
			
			if(scan[i] < scan[j])
				rank[i]++;
				
	printf("값\t순위\n");
				
	for(i=0; i<5; i++)
		/*비교했던 값들을 불러오기 위한 반복문이다.*/
		
		printf("%d\t%d\n", scan[i], rank[i]);
}
