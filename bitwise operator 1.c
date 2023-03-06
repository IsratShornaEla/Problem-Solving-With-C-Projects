/* &  |   ^   <<    >>
   << left shift
   >> right shift
*/
#include<stdio.h>
int main()
{
    int a =5 , b=6, c=2 ;
    printf("%d\n%d\n%d\n%d\n%d", a&b,a|b,a^b,c<<2,c>>2);

    return 0;
}
