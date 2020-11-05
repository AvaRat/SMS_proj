/* ***************************************
* projekt00 : symulacja komputerowa *
*************************************** */
#include "stm32f10x.h"

void foo(void);

int main ( void ) {

unsigned int counter=0;
for(counter=0; counter<=20; counter++)
{
	foo();
}		
	
return 0;
}

void foo () {
static char text [175] = "TRUTYLJRUYRBUBFUFUHZAPQDFJHMEHEJVJAMOMYMOGTMFUDDIBHJDAJMUQXOILPVDZQSLDFLRRXDMLEMRRXERLZMHRUIGUWXMATYNJQYLLSHVAEBXZSSYQVDQRTJYVESMLQFXYHWJKMBWTXPKMSJWAWNSZRADLGMPKATHLIQBKAMABD";
//static char text [175] = "XFZDYKTLUHUQGBJDVCVBEJOEOUYUSLOFRCUVETHLBTEOUYSKRYQEXCELRCGMBJDHMOTRSTQRDUQEWUVFEHLLWDDTBPFDGEFSXCSMVHMEWQMZSJZYKYOVEVQMQJEOIYLDKKHMUFLVZTEUOJBFSCGVUYWWIEBDWAXGMKEKRNORGGACWDO";
static unsigned int i = 1;
static char * buforp [4] = {0};
char bufor [4] = "";

if(i == 1) 
{
	buforp [0] = & text [13];
	buforp [1] = & text [01];
	buforp [2] = & text [19];
	buforp [3] = & text [90];
} else 
{
	buforp [0] += 1;
	buforp [1] += 2;
	buforp [2] += 3;
	buforp [3] += 4;
}
bufor [0] = * buforp [0];
bufor [1] = * buforp [1];
bufor [2] = * buforp [2];
bufor [3] = * buforp [3];
++i; // tutaj warto postawic pulapke
if(i==11 || i==16 || i==21)
{
	int a=0;
}

}
