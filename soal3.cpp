#include <stdio.h>
#include <conio.h>
using namespace std;
int main()
{
    float c=89.88,m,E;
    printf("Perhitungan dengan rumus E=mc2 by Yayan yr\n");
    printf(".,.,.,.,.,.,.,.,.,.,..,.,.,.,.,.,..,.,.,...,.\n");
    printf("masukan massa (kg):");scanf("%f",&m);
    E=m*c*c;
    printf("E=%.2f*%.2f*%.2f=%.2f J",m,c,c,E);
    getch();
}
