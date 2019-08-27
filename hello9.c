#include <stdio.h>

/* Program for processing 5 values*/

int main   () {

   int v1 , v2 , v3 , v4 , v5 ; /*  Defining values */
   int g1,g2,g3,l1,l2,l3,gr,lr;
  
  printf ("Enter 5 values\n");
  scanf ("%d%d%d%d%d", &v1,&v2,&v3,&v4,&v5);
  
  if (v1>=v2) { g1 = v1; };
  if (v2>v1) { g1 = v2; };
  
  if (v3>=v4) { g2 = v3; };
  if (v4>v3) { g2 = v4; };
  
  if (g1>=g2) { g3 = g1; };
  if (g2>g1) { g3 = g2; };
  
  if (v5>=g3) { gr = v5; };
  if (g3>v5) { gr = g3; };
  
  printf ( "Greatest value is: %d\n", gr);
  
  if (v1<=v2) { l1 = v1; };
  if (v2<v1) { l1 = v2; };
  
  if (v3<=v4) { l2 = v3; };
  if (v4<v3) { l2 = v4; };
  
  if (l1<=l2)   { l3 = l1; };
  if (l2<l1)   { l3 = l2; };
  
  if (v5<=l3)  { lr = v5; };
  if (l3<v5)  { lr = l3; };
  
  printf ("Least value is: %d", lr);
  
  return 0;




}
