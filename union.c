/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 07:47:45 by rmoujan           #+#    #+#             */
/*   Updated: 2022/01/07 18:15:46 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int ft_check(int i, char *ptr, int j)
{
    int k;
    
    k = 0;
    if (i == j && ptr[i] == ptr[j])
    {
        // check is the char already exit or not
        return (1);
    }
    while (ptr[k] != '\0' && k <= i)
   {
       if (ptr[k] == ptr[i])
       {
           return (0);
       }
    k++;
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
	    j = 0;
	   	while (argv[1][j] != '\0')
	   	{

	   	    if (argv[1][i] == argv[1][j] && i >= j)
	   	    {
	   	        if (ft_check(i, argv[1], j) == 1)
	   	        {
	   	            write(1, &argv[1][i], 1);
	   	        }
	   	       //printf(" ft_check == %d \n",ft_check(i, argv[1]));

	   	        //printf(" i and j equal zero i == %d and j == %d \n",i,j);
	   	        
	   	    }
	   	   j++;
	   	} 
	   	i++;
	}

	return (0);
}