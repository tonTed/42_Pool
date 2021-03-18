#include <stdio.h>
#include <time.h>

int main()
{
	// time_t start_t, end_t;
	// double diff_t;

	int i = -5;
	
	while(i++ <= 100)
	{
		printf("F%d = %d\n",i, ft_sqrt2(i));
	}
	
	i = -5;
	
	while(i++ <= 100)
	{
		printf("F%d = %d\n",i, ft_sqrt(i));
	}

	// time(&start_t);
	// i = 0;
	
	// while(++i <= 3)
	// {
	// 	ft_sqrt(2147395589);
	// }
	// time(&end_t);
	// diff_t = difftime(end_t, start_t);
	// printf("Execution time = %f\n", diff_t);

	
	// time(&start_t);
	// int j = 0;
	// while(++j <= 3)
	// {
	// 	ft_sqrt2(2147395589);
	// }
	// time(&end_t);
	// diff_t = difftime(end_t, start_t);

	// printf("Execution time = %f\n", diff_t);
	printf("F INT_MAX = %d\n", ft_sqrt(2147483647));
	printf("F INT_MIN = %d\n", ft_sqrt(-2147483648));
	printf("F INT_MAX = %d\n", ft_sqrt2(2147483647));
	printf("F INT_MIN = %d\n", ft_sqrt2(-2147483648));
	printf("F 2147395600 = %d\n", ft_sqrt(2147395600));
	printf("F 2147395600 = %d\n", ft_sqrt2(2147395600));
	return 0;
}