#include <stdio.h>
#include <string.h>
/**
 * print_rev - revrse printing 
 * @s: the string t
 */

void print_rev(char *s)
  
{
  
  int longi = 0;
  
  int o;
  

  
  while (*s != '\0')
    
    {
      
      longi++;
      
      s++;
      
    }
  
  s--;
  
  for (o = longi; o > 0; o--)
    
    {
      
      _putchar(*s);
      
      s--;
      
    }
  

  
  _putchar('\n');
  
}
