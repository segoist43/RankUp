#include <stdio.h>
int main(void) {
	int scan[5];
	int rank[5] = {1, 1, 1, 1, 1};
	int i, j;
	
	printf("�� �� ���� �ټ����� �Է��Ͻÿ�.\n\n");
	
	for(i=0; i<5; i++)
		/*scan�� 1���� �ּ��� �迭�� ���� �޾� �����Ѵ�.*/
		
		scanf("%d", &scan[i]);
	printf("\n");
	
	for(i=0; i<5; i++)
		for(j=0; j<5; j++)
			/*
			Bubble-sort ������� ������ ���Ѵ�.
			�ش� ����� �������� ����̴�. 
			*/
			
			if(scan[i] < scan[j])
				rank[i]++;
				
	printf("��\t����\n");
				
	for(i=0; i<5; i++)
		/*���ߴ� ������ �ҷ����� ���� �ݺ����̴�.*/
		
		printf("%d\t%d\n", scan[i], rank[i]);
}
