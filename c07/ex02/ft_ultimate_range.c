#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*ptr_range;
	int	len;
	int	i;

	i = 0;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	len = max - min - 1;
	ptr_range =(int *) malloc(len * sizeof(int));
	if (!ptr_range)
		return (-1);
	*range = ptr_range;
	while (i <= len)
	{
		ptr_range[i] = min;
		i++;
		min ++;
	}
	return(len);
}

int main(void)
{
	int *ptr = NULL;
	int min = 5;
	int max = 10;
	int rangelen = 0;

	rangelen= ft_ultimate_range(&ptr, min, max);
	if (ptr)
		for (int i = 0; i <= rangelen; i++)
			printf("taile de range = %d\n", ptr[i]);
	printf(" taille =%d", rangelen);
	return (0);
}
