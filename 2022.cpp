#include <stdio.h>
int main(){
	unsigned int h;
	printf("Moi ban nhap chieu cao: ");
	scanf("%d", &h);
	while(h%2==0 || h <= 3){
		printf("Chieu cao khong hop le!. Moi ban nhap lai: ");
		scanf("%d", &h);
	}
	
	
	for(int i=1; i<=h;i++){
		if(i==1 || i==h || i== (h+1)/2){
			printf(" ");
		}
		else{
			printf("*");
		}
	}
	printf("\n");
	for(int j=1; j<=h; j++){
		printf("*");
	}
	printf("\n");
	for(int q=1; q<=h; q++){
		printf("*");
	}
	printf("\n");
	for(int k=1; k<=(h-1)/2; k++){
		for(int m=1; m<=k; m++){
			printf(" ");
		}
		for(int n=1; n<=h-2*k; n++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
	
}
