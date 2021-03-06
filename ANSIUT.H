#include <iostream>             //  standard iostream operations
using namespace std;
#include <limits>               //  numeric limits
#include <cmath>                //  mathematical functions
#include <cstdlib>              //  c-string functions
#include <cstddef>              //  c library language support
#include <fstream>              //  file input and output
#include <cctype>               //  character classification
#include <ctime>                //  date and time functions

bool user_says_yes();
 
enum Error_code { success, fail, range_error, underflow, overflow, fatal,
                  not_present, duplicate_error, entry_inserted, entry_found,
                  internal_error };
