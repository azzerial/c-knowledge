#ifndef LOGGER_H
#define LOGGER_H

#include <stdio.h>

#define log(format, ...) ({char s[256];sprintf(s, format, __VA_ARGS__);printf("[%s] %s at l%d: %s", __FILE__, __func__, __LINE__, s);})

#endif /* LOGGER_H */
