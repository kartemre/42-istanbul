/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekart <ekart@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 21:49:53 by ekart             #+#    #+#             */
/*   Updated: 2023/09/04 22:20:36 by ekart            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int tmp;
	tmp = *a / *b;
	*b = *a % *b;
	*a = tmp;
}

int main()
{
	int x = 20;
	int y = 3;
	ft_ultimate_div_mod(&x, &y);
	printf("%d, %d", x, y);
}
