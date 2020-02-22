#ifndef __ARDUINOAPI_ITOAS_H__
#define __ARDUINOAPI_ITOAS_H__
 
#include "cstdlib"
 
char* utoa( unsigned long value, char *string, int radix );
char* itoa( int value, char *string, int radix );
char* ultoa( unsigned long value, char *string, int radix );
char* ltoa( long value, char *string, int radix );
 
#endif /* #ifndef __ARDUINOAPI_ITOAS_H__ */