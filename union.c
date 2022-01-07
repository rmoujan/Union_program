/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 07:47:45 by rmoujan           #+#    #+#             */
/*   Updated: 2022/01/07 18:12:15 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int ft_check(int i, int j, char *ptr)
{
    int k;
    
    k = 0;
    if (i == j && ptr[i] == ptr[j])
    {
		//check is the char already exit or not
        while (ptr[k] != '\0' && k < i)
        {
            if (ptr[k] == ptr[i])
            {
                return (0);
            }
            k++;
        }
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

	   	    if (argv[1][i] == argv[1][j] && i >= j)
	   	    {
	   	        if (ft_check(i, j, argv[1]) == 1)
	   	        {
	   	            write(1, &argv[1][i], 1);
	   	        }
	   	    }
	   	   j++;
	   	} 
	   	i++;
	}

	return (0);
}