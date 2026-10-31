/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaakoub <marvin@42.fr>                    +#+  +#+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 18:22:00 by ilaakoub          #+#    #+#             */
/*   Updated: 2026/10/30 10:44:35 by ilaakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	check(long res, int s)
{
	int		t;
	long	r;

	t = 5;
	r = 0;
	r = res * t;
	if (r / t != res)
	{
		if (s < 0)
			return (0);
		return (-1);
	}
	return (res);
}

int	ft_atoi(const char *str)
{
	long	res;
	int		sign;
	int		i;
	
	res = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (check((res * sign), sign));
}

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "libft.h"

// int main(void)
// {
//     const char *tests[] = {
//         "2147483648",
//         "-2147483649",
//         "999999999999999999999999",
//         "-999999999999999999999999",
//         "00000000000000000000000042"
//     };

//     int i = 0;

//     while (i < 5)
//     {
//         printf("Input: [%s]\n", tests[i]);
//         printf("atoi:    %d\n", atoi(tests[i]));
//         printf("ft_atoi: %d\n", ft_atoi(tests[i]));
//         printf("-------------------\n");
//         i++;
//     }
//     return (0);
// }

int main()
{
	printf("atoi:    %d\n", atoi("999999999999999999999999"));
    printf("ft_atoi: %d\n", ft_atoi("999999999999999999999999"));
}