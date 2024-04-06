#ifndef cas_value_h
#define cas_value_h

#include "common.h"

// Defining a new struct and manipulation
// functions each time we need a dynamic array
// of a different type is a chore. We could cobble
// together some preprocessor macros to fake
// generics, but that’s overkill for clox. We won’t
// need many more of these.

typedef double Value;

typedef struct
{
    int capacity;
    int count;
    Value *values;
} ValueArray;

void initValueArray(ValueArray *array);
void writeValueArray(ValueArray *array, Value value);
void freeValueArray(ValueArray *array);
void printValue(Value value);

#endif