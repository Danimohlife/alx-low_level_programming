#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - allocatingn
* @width: width
* @height: height
* Return: a pointer
*/
int **alloc_grid(int width, int height)
{
	int one, jo, ht, tw;
	int **ba;

	if (width <= 0 || height <= 0)
		return (NULL);
	ba = malloc(height * sizeof(int *));
	if (ba == NULL)
	{
		free(ba);
		return (NULL);
	}
	for (one = 0; one < height; one++)
	{
		ba[one] = malloc(width * sizeof(int));
		if (ba[one] == NULL)
		{
			for (jo = one; jo >= 0; jo--)
			{
				free(ba[jo]);
			}
			free(ba);
			return (NULL);
		}
	}

	for (ht = 0; ht < height; ht++)
	{
		for (tw = 0; tw < width; tw++)
			ba[ht][tw] = 0;
	}
	return (ba);
}
