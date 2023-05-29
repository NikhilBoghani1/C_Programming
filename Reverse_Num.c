#include<stdio.h>
main() {
	int num,rem,rev=0;
	printf("Enter num - ");
	scanf("%d",&num);
	 while(num!=0){
	 	rem=num%10;
	 	rev=rev*10+rem;
	 //	printf("\n rem%d rev%d",rem,rev);
	 	num=num/10;
	 }
	 printf("\n Efter Rev Num=%d",rev);
}
