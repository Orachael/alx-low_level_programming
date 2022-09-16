#include "main.h"
/**
 * jack_bauer - func that prints every minutes of the day of jack Bauer, start
 * ng from 00:00 to 23:59, min loop counts mins, while hour loop counts hours 
 * and resets mins
 * Returns: 0
 */
void jack_bauer(void)
{
  int hours = 0;
  int minutes =o;
  int hours_remainder;
  int mins_remainder;

  while (hours <= 23)
  {
  while (minutes <= 59)
    {
        hours remainder = hours % 10;
        _putchar(hours / 10 + '0');
        _putchar(hours remainder + '0')
	_putchar(':');
        _putchar(minutes / 10 + '0');
	_putchar(mins_remainder6 '0')
	 minutes++;
	_putchar('\n')
	  }
          hours++;
	  minutes=0
    }
}
  
	    
