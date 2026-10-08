#include<stdio.h>
int main()
{
int math,phy,chem,eng,tam;
scanf("%d%d%d%d%d",&math,&phy,&chem,&eng,&tam);
printf("enter the math marks:=%d",math);
printf("enter the eng marks:=%d",eng);
printf("enter the chem marks:=%d",chem);
printf("enter the phy marks:=%d",phy);
printf("enter the tam marks:=%d",tam);
printf("the total of 5 subjects is:=%d",(math+phy+eng+chem+tam));
printf("the average of all 5 subjects:=%d",(math+phy+eng+chem+tam)/5);
return 0;
}
