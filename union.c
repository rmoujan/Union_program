/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 07:47:45 by rmoujan           #+#    #+#             */
/*   Updated: 2022/01/07 18:03:34 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int ft_check(int i, char *ptr, int k)
{
    int j;
    
    j = 0;
    if (i == k)
        return (1);
    while (ptr[j] != '\0' && j <= i)
   {
       if (ptr[j] == ptr[i])
       {
           return (0);
       }
    j++;
   }
   return (1);
}

int main(int argc, char *argv[])
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (argv[1][i] != '\0')
	{
	    j = i;
	   	while (argv[1][j] != '\0')
	   	{

	   	    if (argv[1][i] == argv[1][j] && i >= j && ft_check(i, argv[1], j) == 1)
	   	    {
	   	       //printf(" ft_check == %d \n",ft_check(i, argv[1]));

	   	        //printf(" i and j equal zero i == %d and j == %d \n",i,j);
	   	        write(1, &argv[1][i], 1);
	   	    }
	   	   j++;
	   	} 
	   	i++;
	}

	return (0);
}
