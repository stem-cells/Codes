#include <stdio.h>

int main()
{
	int ba_price;
    int ap_price;
    int ba_num;
    int ap_num;
    int change;
    int pay;
    char check;
    int sum_price;
    int minus;
    int _minus;
    {
         
    	printf("사과를 몇 개 구매하시겠습니까?\n");
    	scanf("%d",&ap_num);
    	printf("바나나를 몇 개 구매하시겠습니까?\n");
    	scanf("%d",&ba_num);
    	sum_price = ap_num*500+ba_num*1000;
    	printf("사과 %d개 바나나 %d개 총 %d원입니다.", ap_num,ba_num,sum_price);
    	printf("얼마를 지불하시겠습니까?\n");
    	scanf("%d",&pay);
    	minus = sum_price-pay;
    	while(minus>0)
    	{
    		fflush(stdin);
    		printf("돈이 %d원 부족합니다.다시 지불하시겠습니까?(Y or N)\n",minus);
    		scanf("%c",&check);
    		if(check=='N')
    		{
    			break;
			}
			if(check=='Y')
			{
				printf("얼마를 지불하시겠습니까?\n");
    			scanf("%d",&pay);
    			minus = sum_price-pay;
    			if(pay>=sum_price)
    			{
    				printf("감사합니다. 거스름돈은%d입니다.",minus);
    				
				}
		    }
		}
		while(0>=minus)
		{
			minus = sum_price-pay;
			printf("감사합니다. 거스름돈은 %d입니다",minus); 
			break;
		}
	}
}
