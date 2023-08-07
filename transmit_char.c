#include<reg51.h>
void main(void)
{
	TMOD=0X20;     //for timer 1 mode 2
	TH1=0XFA;     //at baud rate 4800
	SCON=0X50;   
	TR1=1;      //switching on the timer 
	while(1)
	{
	 SBUF='A';    //we can change this to any character like 'B','D' etc
	 while(TI==0); 
	 TI=0;
	}
}

