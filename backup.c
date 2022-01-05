/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 07:47:45 by rmoujan           #+#    #+#             */
/*   Updated: 2022/01/05 11:08:11 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	// exemple : 
	int i;
	int j;
	int flag;
	//first :
	// $>./a.out "rien" "cette phrase ne cache rien" | cat -e
    // rienct phas$
    //************** :::: 
	
	//second :
	//$>./a.out ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
    //df6vewg4thras$
	//************** :::
	
	printf("%d\n",argc);
	//printf("%s\n",argv[0]);
	// printf("%s \n",argv[1]);
	// printf("%s \n",argv[2]);
	//argc : le nbr de parametres passe au programme
    if (argc <= 2)
	{
		write(1, "r\n", 2);
		return (0);
	}
	//just a test :: 
	// if (argv[1][0] == '\0' || argv[2][0] == '\0')
	// {
	// printf("argv[1] == %d \n",argv[1][0]);
	// printf("argc[2]  == %d \n",argv[2][0]);
	// printf("NULL");
	// }
	i = 0;
	j = 0;
	flag = 1;
	//halloh -- >halo
	while (argv[1][i] != '\0')
	{
		while (argv[1][j] != '\0' && argv[1][i] == argv[1][j])
		{
			if (flag == 1)
			{
			write (1, &argv[1][i], 1);
			flag++;
			}
		j++;	
		}
		i++;
        j = 0;
		flag = 1;
	}
	//my objectif is working on argv[1] and argv[2] ::

	return (0);
}
*******************************
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 07:47:45 by rmoujan           #+#    #+#             */
/*   Updated: 2022/01/05 11:05:01 by rmoujan          ###   ########.fr       */
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
		printf("*yes* \n");
		while (argv[1][j] != '\0')
		{
			if (argv[1][i] == argv[1][j])
			{
				if (flag == 1)
				{
					write (1, &argv[1][i], 1);
					flag++;
				}
			}
			else
				write (1, &argv[1][i], 1);
		j++;	
		}
		i++;
        j = 0;
		//flag = 1;
	}
	return (0);
}
