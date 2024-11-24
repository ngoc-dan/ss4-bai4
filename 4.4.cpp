#include <stdio.h>
int main(){
	int m,y;
	printf("nhap thang, nam : ");
	scanf("%d%d", &m,&y);
	switch( m) {
		case1 :case 3 :case 5 :case 8 :case 10 :case 12 :
			printf("31\n");
			break;
		case 4 :case 6 :case 9 :case 11 :
			printf("30\n");
			break;
		case 2 :
			if((y%400 == 0)&&(y%4 == 0 && y% 100 !=0)){
			printf("29\n");
			}
			else{
				printf("28\n");
			}
			break;
		default:
			printf("khong hop le\n");
			}
			
			return 0;
		}
