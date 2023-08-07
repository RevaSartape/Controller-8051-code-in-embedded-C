#include<reg51.h>
void T1Delay(void);
sbit mybit=P1^5;
void main()
{
   while(1)
   {
     unsigned char i;
	   mybit=~mybit;
	   for(i=0;i<=100;i++)
	   {
	      T1Delay();
	   } 
   } 
}
void T1Delay(void)
{
   TMOD=0x02;
   TH0=0x1A;
   TR0=1;
   while(TF0==0);
   TR1=0;
   TF0=0;
}   
   