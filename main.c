#include <stdio.h>
#include <math.h>

int main(void) {
  int a, b, obr,trig, eshe, n;
  double r, sin, cos, phi, r2, power, sqrty;
  printf("Натуральная часть: ");
  scanf("%d", &a);
  printf("Комплексная часть: ");
  scanf("%d", &b);
  r=sqrt(a*a+b*b);
  r2=a*a+b*b;
  sin=a/r;
  cos=b/r;
  if(b>=0) {
    phi= acos(cos);
  } else phi= -1*acos(cos);
  
 
  printf("Тригонометрическая форма: %lf( cos(%lf) + sin(%lf)*i) \n ", r, phi ,phi);
  printf("Обратное число: %lf - %lf*i \n ", a/r, b/r);
  printf("В какую степень возводить? ");
  scanf("%d", &n);
  power=n*phi;
  printf("\n Число в %d степени: %lf(cos(%lf) + sin(%lf)*i   :", n,pow(r,n), power, power);
  printf(" \n Корень какой степени? ");
  scanf("%lf", &sqrty);
  r2=pow(r,1/sqrty);
  for (int i=0; i<sqrty; i++) {
    printf ("\n %d-ый корень: ", i+1);
    double ang= phi + 2*M_PI*i/sqrty;
    printf("%lf*(cos(%lf)+ sin(%lf)*i", r2, ang, ang);
  }
  return 0;
}