#include "strman.h"
#include <string.h>

bool strman_starts_with(char string[], char expected_value[])
{	return !strncmp(string, expected_value, strlen(expected_value));
}

bool strman_ends_with(char string[], char expected_value[])
{	int string_length = strlen(string);
	int expected_value_length = strlen(expected_value);

	if(string_length < expected_value_length)
		return false;

	return !strcmp(string + string_length - expected_value_length, expected_value);
}
