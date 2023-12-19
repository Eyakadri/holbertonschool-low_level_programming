#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: key
 * @size: size of the array
 * Return: index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash = 0;
unsigned long int idx = 0;

hash = hash_djb2(key);
idx = hash % size;
return (idx);
}
