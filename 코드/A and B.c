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
         
    	printf("����� �� �� �����Ͻðڽ��ϱ�?\n");
    	scanf("%d",&ap_num);
    	printf("�ٳ����� �� �� �����Ͻðڽ��ϱ�?\n");
    	scanf("%d",&ba_num);
    	sum_price = ap_num*500+ba_num*1000;
    	printf("��� %d�� �ٳ��� %d�� �� %d���Դϴ�.", ap_num,ba_num,sum_price);
    	printf("�󸶸� �����Ͻðڽ��ϱ�?\n");
    	scanf("%d",&pay);
    	minus = sum_price-pay;
    	while(minus>0)
    	{
    		fflush(stdin);
    		printf("���� %d�� �����մϴ�.�ٽ� �����Ͻðڽ��ϱ�?(Y or N)\n",minus);
    		scanf("%c",&check);
    		if(check=='N')
    		{
    			break;
			}
			if(check=='Y')
			{
				printf("�󸶸� �����Ͻðڽ��ϱ�?\n");
    			scanf("%d",&pay);
    			minus = sum_price-pay;
    			if(pay>=sum_price)
    			{
    				printf("�����մϴ�. �Ž�������%d�Դϴ�.",minus);
    				
				}
		    }
		}
		while(0>=minus)
		{
			minus = sum_price-pay;
			printf("�����մϴ�. �Ž������� %d�Դϴ�",minus); 
			break;
		}
	}
}
