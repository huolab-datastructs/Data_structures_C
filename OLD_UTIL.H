
#include <iostream.h> //  standard iostream operations
#include <limits.h>   //  numeric limits
#include <math.h>     //  mathematical functions
#include <stdlib.h>   //  c-string functions
#include <string.h>   //  c-string functions
#include <stddef.h>   //  c library language support
#include <fstream.h>  //  file input and output
#include <ctype.h>    //  character classification
#include <time.h>     //  date and time functions
typedef int bool;
const bool false = 0;
const bool true = 1;

bool user_says_yes();
 
enum Error_code { success, fail, range_error, underflow, overflow, fatal,
                  not_present, duplicate_error, entry_inserted, entry_found,
                  internal_error };
