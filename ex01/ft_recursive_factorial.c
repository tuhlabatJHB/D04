/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuhlabat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 12:15:29 by tuhlabat          #+#    #+#             */
/*   Updated: 2020/07/17 14:27:04 by tuhlabat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_factorial(int nb);

int main()
{
	int nb;
	
	printf("Enter a positive integer: ");
	
	scanf("%d" ,&nb);
	
	printf("Factorial of %d = %d", nb, ft_recursive_factorial(nb));
	
	return 0;
}

int ft_recursive_factorial(int nb)
{
	if (nb >= 1)
		return nb *ft_recursive_factorial(nb-1);
	else
		return 1;
}
