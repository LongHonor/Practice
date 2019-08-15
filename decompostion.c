#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int decomposition(int n);

int main(){
	int n;
	int i,dcp = 0;
	int result;
	
	scanf("%d",&n);
	for(i = 1; i<=n; i++){
		dcp = decomposition(i);
		if(dcp == n){
			result = i;
			break;
		}
		else result = 0;
	}
	
	printf("%d\n",);
	
	return 0;
}

int decomposition(int n){
	int result,m = n;
	
	result = n;
	while(m/10!=0){
		result += m%10;
		m/=10;
	}
	result += m;
	
	return result;
}
