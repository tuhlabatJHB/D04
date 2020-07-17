/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_interative_factorial.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuhlabat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 15:13:10 by tuhlabat          #+#    #+#             */
/*   Updated: 2020/07/17 12:08:35 by tuhlabat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_factorial(int nb)
{
	int i = nb, fact = 1;
		while (nb / i != nb)
		{
			fact = fact * i;
			i--;
		}
	return fact;
}
int main()
{
	int num = 5;
	printf("factoial of %d is %d", num, (num));
	return 0;
}
