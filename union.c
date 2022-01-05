/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 07:47:45 by rmoujan           #+#    #+#             */
/*   Updated: 2022/01/05 13:07:15 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;
	int j;
	int flag;
	printf("%d\n",argc);
    if (argc <= 2)
	{
		write(1, "r\n", 2);
		return (0);
	}
	i = 0;
	j = 0;
	flag = 1;
	//halhhloh -- >halo
	while (argv[1][i] != '\0')
	{
		while (argv[1][j] != '\0')
		{
			if (argv[1][j] == argv[1][i])
			{
				if (flag == 1)
				{ 
					//printf("yes \n");
					write (1, &argv[1][i], 1);
					flag++;
				}
			}
			
		j++;
		}
	//flag = 1;
	j = 0;
	i++;
	}
	return (0);
}
