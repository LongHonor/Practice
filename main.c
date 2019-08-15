#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int blackJack(int n, int m, int *ar);

int main(){
	int n, m;
	int *ar;
	int max = 0,i;
	
	scanf("%d%d",&n, &m);
	
	ar = (int *)malloc(sizeof(int)*n);
	if(ar==NULL){
		printf("not enough memory\n");
		return -1;
	}
	
	for(i = 0; i<n;i++){
		scanf("%d",&ar[i]);
	}
	
	max = blackJack(n,m,ar);
	
	printf("%d\n",max);
	
	return 0;
}

int blackJack(int n, int m, int *ar){
	int sum = 0,i,j,k;
	int tmp;
	
	for(i = 0; i < n-2; i++){
		for(j = i+1; j<n-1; j++){
			for(k = j+1; k<n;k++){
				tmp = ar[i] + ar[j] + ar[k];
				if(tmp>sum&&tmp<=m){
					sum = tmp;
				}
			}
		}
	}
	
	return sum;
}
