/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10953.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungyel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 02:52:44 by seungyel          #+#    #+#             */
/*   Updated: 2020/10/13 02:54:45 by seungyel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main()
{
	int a;
	int b;
	int i;

	scanf("%d",&i);
	while (i--)
	{
		scanf("%d,%d",&a ,&b);
		printf("%d\n", a+b);
	}
}
