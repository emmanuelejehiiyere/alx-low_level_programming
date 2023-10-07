#include "main.h"
/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr2;
	char *old_ptr;
	unsigned int count;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptr2 = malloc(new_size);
	if (!ptr2)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (count = 0; count < new_size; count++)
			ptr2[count] = old_ptr[count];
	}

	if (new_size > old_size)
	{
		for (count = 0; count < old_size; count++)
			ptr2[count] = old_ptr[count];
	}

	free(ptr);
	return (ptr2);
}
