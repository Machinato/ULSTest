#include "libmx.h"

void mx_str_reverse(char *s)
{
	if(s == NULL) {
   		return;
  	}
	int len = mx_strlen(s);

	for(int i = 0; i < len/2; i++) {
		mx_swap_char(&s[i],&s[len-1-i]);
	}	
}
