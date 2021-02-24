#include "binomial.h"
 
Binomial::Binomial(float c1, int p1, float c2,int p2)
{
   cof1 = c1;
   cof2 = c2;
   if (p1 < 1)
       expo1 = 1;
   else
       expo1 = p1;
   if (p2 < 1)
       expo2 = 1;
   else
       expo2 = p2;
}
float Binomial::GetCoefficient(int index)
{
   if (index == 1)
       return cof1;
   else if (index == 2)
       return cof2;
   else
       return -1;
}
int Binomial::GetPower(int index)
{
   if (index == 1)
       return expo1;
   else if (index == 2)
       return expo2;
   else
       return -1;
}
int Binomial::SetPower(int index, int value)
{
   if (index == 1)
   {
       if (value < 1)
           expo1 = 1;
       else
           expo1 = value;
       return 0;
   }
   else if (index == 2)
   {
       if (value < 1)
           expo2 = 1;
       else
           expo2 = value;
       return 0;
   }
   else
   {
       return -1;
   }
}
int Binomial::Add(Binomial &B)
{
   if (expo1 == B.expo1 && expo2 == B.expo2)
   {
       cof1 += B.cof1;
       cof2 += B.cof2;
       return 0;
   }
   else
   {
       return -1;
   }
}
void Binomial::Multiply(float num)
{
   cof1 *= num;
   cof2 *= num;
}
void Binomial::Multiply(float monoCoeff, int monoPow)
{
   cof1 *= monoCoeff;
   expo1 += monoPow;
   cof2 *= monoCoeff;
   expo2 += monoPow;
}
