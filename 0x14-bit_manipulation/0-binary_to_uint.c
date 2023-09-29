#include "complete.h"

/**
 * binary_to_uint - convert binary to int
 * @b: binary string
 *
 * Return: Number
 */
unsigned int binary_to_uint(const char *b)
{
	int len, m;
	uint sum = 0;

	if (!b)
		return (sum);

	len = slen(b);
	if (!valid(b))
		return (0);

	for (m = 0, len--; b[m]; m++, len--)
		if (b[m] == '1')
			sum += 1 * (1 << len);

	return (sum);
}
