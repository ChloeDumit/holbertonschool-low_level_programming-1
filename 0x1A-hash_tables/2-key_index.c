#include "hash_tables.h"

/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */

 unsigned long int key_index(const unsigned char *key, unsigned long int size)
 {
    unsigned long int result;

	result = hash_djb2(key);
	return (result % size);
 }