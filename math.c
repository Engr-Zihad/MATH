#include <stdio.h>
#include <math.h>
int main(){
   double a,b;
    printf("enter two number :");
    scanf("%lf%lf",&a,&b);
    double sum=a+b;
    double sub=a-b;
    double mul=a*b;
    double div=a/b;
    double mod=fmod(a,b);
    double power=pow(a,b);
    printf("the addition is:%lf\n",sum);
    printf("the subtraction is:%lf\n",sub);
    printf("the multiplication is:%lf\n",mul);
    printf("the division is:%lf\n",div);
    printf("the modulus is:%lf\n",mod);
    printf("the power is:%lf\n",power);
    return 0;

}