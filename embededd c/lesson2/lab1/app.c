#include "uart.h"
unsigned char string_name[100] ="lern-in-depth:<shobaky>";
unsigned char const string_name1[100] ="lern-in-depth:<shobaky>";
void main (void)
{
	uart_send_string (string_name);
}