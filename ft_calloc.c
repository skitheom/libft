/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakitaha <sakitaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 01:44:24 by sakitaha          #+#    #+#             */
/*   Updated: 2023/05/19 02:09:06 by sakitaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

/*
calloc関数は、大きさがsizeのオブジェクトのnmemb個分の配列の領域を割り付ける。
そして、その領域のすべてのビットを0で初期化する。

The	calloc(void) function contiguously allocates enough space
for count objects that are size bytes of memory each
and returns a pointer to the allocated memory.
The allocated memory is filled with bytes of value zero.
*/

void	*calloc(size_t count, size_t size)
{
	void	*buf;

	buf = 0;
	buf = (void *)malloc(count * size);
	if (!buf)
		return (0);
	return (buf);
}

int	main(void)
{
	size_t	count1;
	size_t	size1;
	int		*array1;
	size_t	count2;
	size_t	size2;
	int		*array2;

	// テストケース1: 正常な動作を確認する
	count1 = 5;
	size1 = sizeof(int);
	array1 = (int *)calloc(count1, size1);
	if (!array1)
	{
		for (size_t i = 0; i < count1; i++)
		{
			printf("%d ", array1[i]); // ゼロ初期化されていることを確認
		}
		free(array1);
	}
	printf("\n");
	// テストケース2: サイズが0の場合
	count2 = 10;
	size2 = 0;
	array2 = (int *)calloc(count2, size2);
	if (!array2)
	{
		printf("Allocation failed.\n"); // サイズ0の場合は失敗することを確認
	}
	return (0);
}
