#include <stdio.h>

int main()
{
	
	int length;
	int height;
	char what;
    float wide;
	
    printf("�غ��� ���̸� �Է��Ͻʽÿ�:\n");
    scanf("%d",&length);
    printf("���̸� �Է��Ͻʽÿ�\n");
    scanf("%d",&height);
    wide=0.5*length*height;
    printf("%f\n",wide);
    fflush(stdin);
    printf("����Ͻðڽ��ϱ�?");
    scanf("%c", &what);
    	while(what=='Y' || what == 'y')
    	{
    		printf("�غ��� ���̸� �Է��Ͻʽÿ�:\n");
            scanf("%d",&length);
            printf("���̸� �Է��Ͻʽÿ�\n");
            scanf("%d",&height);
            wide=0.5*length*height;
            printf("%f\n",wide);
            printf("����Ͻðڽ��ϱ�?");
            scanf("%c",what);
		}
	
	return 0;
}
	
