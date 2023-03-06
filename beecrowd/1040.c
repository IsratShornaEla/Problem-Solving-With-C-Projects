
#include<stdio.h>
int main()
{
    float N1,N2,N3,N4,N5,AVG1,AVG2;
    scanf("%f %f %f %f",&N1,&N2,&N3,&N4);
    AVG1=(N1*2+N2*3+N3*4+N4*1)/10;
    printf("Media: %.1f\n",AVG1);
    if(AVG1>=7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if(AVG1<5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else
    {
        printf("Aluno em exame.\n");
        scanf("%f",&N5);
        printf("Nota do exame: %.1f\n",N5);
        AVG2=(AVG1+N5)/2;
        if(AVG2>=5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else if(AVG2<=4.9)
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n",AVG2);
    }
    return 0;

}
