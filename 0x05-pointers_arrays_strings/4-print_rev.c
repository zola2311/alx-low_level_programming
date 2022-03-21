#include <stdio.h>
/**
 * print_rev - revrse printing 
 * @s: the string to be printed
 */
{  
int i, len, temp;  
len = strlen(str1);  
for (i = 0; i < len/2; i++)  
{  
	    	                                     
	    	                                              temp = str1[i];  
	    	                                                      str1[i] = str1[len - i - 1];  
	    
	                                                               str1[len - i - 1] = temp;  
	    
	                                                                   }  
	    
	      }  
