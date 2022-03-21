#include <stdio.h>
/**
 * print_rev - revrse printing 
 * @s: the string to be printed
 */
{  
//     declare variable  
	    	        int i, len, temp;  
	    	            len = strlen(str1); // use strlen() to get the length of str string  
	    	                  
	    	                    // use for loop to iterate the string   
	    	                          for (i = 0; i < len/2; i++)  
	                                  {  
	    	                                      // temp variable use to temporary hold the string  
	    	                                              temp = str1[i];  
	    	                                                      str1[i] = str1[len - i - 1];  
	    
	                                                               str1[len - i - 1] = temp;  
	    
	                                                                   }  
	    
	      }  
