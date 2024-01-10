#include <stdio.h>
int main()
{

    int a = 8;
    int b = 6;
    int d = 0;

    int c = a + b;
    printf(" %d", c);
    for (int i = 1; i <= 10; ++i)
    {
        d += i;
    }
    printf("Suma lu D este : %d", d);
    int numarIntreg = 42;
    float numarReal = (float)numarIntreg;

    printf("Numarul intreg: %d\nNumarul real: %f\n", numarIntreg, numarReal);
    int y= 4;
    float x=(float)y;
    printf("nr intreg este : %d \n , iar numarul float este : %f",y,x);



    float q = 3.213;
    double w= -1.890;
    double e=q+w;
    float r=e+q;
    printf("Float este : %f\nDouble este:%f\nRezultatul Double pentru e este:%f\nRezultatul Float pentru r este:%f",q,w,e,r);

char litera = 'asdfgj';
printf("char blochez :%c\n",litera);
char sir[]="Acasa";
printf("Sirul este:%s",sir);

int temp = 38;
if (temp < 36)
{
    printf("\nE frig afara sunt : %d",temp);
} else if (temp == 40)
{
    /* code */printf("\nEste o temperatura perfecta");
} else(printf("\nEste Frig"));

int t=112;
while ( t<=555)
{
    t=t+830;
}
printf("\n%d",t);

int u=0;
do
{
    u=u+10;
} while (u<1001);

printf("\nDe final nr este : %d",u);

    return 0;
    
}