/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isprint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 17:51:30 by Saho Kitaha       #+#    #+#             */
/*   Updated: 2023/05/26 00:06:29 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	test_ft_isprint(int c)
{
	int	ft_result;
	int	result;

	ft_result = ft_isprint(c);
	result = isprint(c);
	printf("Character  : %c\n", c);
	printf("ft_isprint : %d\n", ft_result);
	printf("isprint    : %d\n", result);
	printf("\n");
}

int	main(void)
{
	test_ft_isprint(' ');
	test_ft_isprint('~');
	test_ft_isprint('\n');
	test_ft_isprint('A');
	test_ft_isprint('$');
	return (0);
}