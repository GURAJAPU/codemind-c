#include<stdio.h>
int main()
{
    int l,L,b,B,W,C,parea,farea,fence,Tot_cost;
    scanf("%d %d %d %d",&l,&b,&W,&C);
    parea=l*b;
    L=l+2*W;
    B=b+2*W;
    farea=L*B;
    fence=farea-parea;
    Tot_cost=fence*C;
    printf("%d",Tot_cost);
    return 0;
    
}