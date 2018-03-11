#include <stdio.h>

int main()
{
	
	int length;
	int height;
	char what;
    float wide;
	
    printf("밑변의 길이를 입력하십시오:\n");
    scanf("%d",&length);
    printf("높이를 입력하십시오\n");
    scanf("%d",&height);
    wide=0.5*length*height;
    printf("%f\n",wide);
    fflush(stdin);
    printf("계속하시겠습니까?");
    scanf("%c", &what);
    	while(what=='Y' || what == 'y')
    	{
    		printf("밑변의 길이를 입력하십시오:\n");
            scanf("%d",&length);
            printf("높이를 입력하십시오\n");
            scanf("%d",&height);
            wide=0.5*length*height;
            printf("%f\n",wide);
            printf("계속하시겠습니까?");
            scanf("%c",what);
		}
	
	return 0;
}
	
