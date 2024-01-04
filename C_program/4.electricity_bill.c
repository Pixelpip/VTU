#include<stdio.h>
void main()
{
    char name[10];
    float unit,mtrc=100;
    printf("enter your name: ");
    scanf("%s",name);
    printf("enter electricity units consumed: ");
    scanf("%f",&unit);
    if(unit<200)
     mtrc=mtrc+(unit*0.80);
    else if(unit>200&&unit<=300)
     mtrc=mtrc+(200*0.80)+((unit-200)*0.90);
    else if(unit>300)
     mtrc=mtrc+(200*0.80)+(100*0.90)+((unit-300)*1);
    if(mtrc>=400)
     mtrc=mtrc+(mtrc*0.15);
     printf("\n Name: %s\nNumber of units consumed: %f \nMetercharge: %f\n",name,unit,mtrc);  


}
