#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp1,*fp2;
    char c,filename1[20],filename2[20],str[30];
    printf("enter the first file name\n");
    scanf("%s",filename1);
    fflush(stdin);
    printf("enter the second file name\n");
    scanf("%s",filename2);
    fflush(stdin);
    if((fp1=fopen(filename1,"r"))==0)
    {
        printf("error opening the first file");
        exit(1);

    }
    if((fp2=fopen(filename2,"w"))==0)
    {
        printf("error opening the second file");
        exit(1);

    }
    c=fgetc(fp1);
    while(c!=EOF)
    {
        fputc(c,fp2);
        c=fgetc(fp1);

    }
    printf("contents copied to %s",filename2);
    fclose(fp1);
    fclose(fp2);


}