/*
 * GccApplication2.c
 *
 * Created: 29-06-2022 12:50:26
 * Author : mathu
 */ 

 #define F_CPU 1000000UL
 #include<avr/io.h>
 #include<util\delay.h>
 int main(){
	 DDRA=0xFF;
	 while(1){
		 
		 PORTA=0x01;
		 _delay_ms(2000);
		 PORTA=0x00;
		 _delay_ms(2000);
	 }
	 return 0;
 }

