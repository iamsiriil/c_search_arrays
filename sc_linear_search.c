#include <stdio.h>

int	sc_linear_search(int *arr, int size, int nbr)
{
	int	i = 0;

	while (arr[i] != nbr && i < size) i++;

	return ((i == size) ? -1 : i);
}

int	main(void)
{
	{
		int	arr[] = {1, -5, 6, 3, 4, 2};
		int	size = sizeof(arr) / sizeof(arr[0]);

		int	nbr = 5, i = sc_linear_search(arr, size, nbr);

		(i == -1) ? printf("nbr %d not found!\n", nbr) : printf("nbr %d at index %d\n", nbr, i);
	}
	return (0);
}
