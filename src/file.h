#ifndef _FILE_H_
#define _FILE_H_

#include "shared.h"

int  file_size(const char*);
bool file_exists(const char*);
bool dir_exists(const char*);
int  is_dir(const char*);
bool is_dir_empty(const char*);
void num2human(long double, uint16_t);

#endif
