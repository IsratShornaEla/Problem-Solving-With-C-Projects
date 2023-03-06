#include<stdio.h>
int main()
{
    char str1[100],str2[100],str3[100];
    scanf("%s %s %s",&str1,&str2,&str3);
    if(str1[0] == 'v')
    {
        if(str2[0] == 'a')
        {
           if(str3[0] == 'c')
           {
               printf("aguia\n");
           }
           else
           {
               printf("pomba\n");
           }
        }
        else
        {
             if(str3[0] == 'o')
           {
               printf("homem\n");
           }
           else
           {
               printf("vaca\n");
           }
        }
    }
    if(str1[0] == 'i')
    {
        if(str2[0] == 'i')
        {
           if(str3[0] == 'm')
           {
               printf("pulga\n");
           }
           else
           {
               printf("lagarta\n");
           }
        }
        else
        {
             if(str3[0] == 'h')
           {
               printf("sanguessuga\n");
           }
           else
           {
               printf("minhoca\n");
           }
        }
    }
    return 0;

}
