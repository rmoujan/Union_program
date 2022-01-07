/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 07:47:45 by rmoujan           #+#    #+#             */
/*   Updated: 2022/01/07 20:05:58 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int ft_check1(int i, int j, char *ptr)
{
    int k;
    
    k = 0;
    if (i == j && ptr[i] == ptr[j])
    {
            //here I am checking the char is already outputed in the command line or not
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

int ft_check2(int m, char *ptr)
{
    int k;
    
    k = 0;
            //here I am checking the char is already outputed in the command line or not
    while (k < m)
    {
        if (ptr[k] == ptr[m])
        {
            return (0);
        }
        k++;
    }
   return (1);
}

int check_str1(char *str, char c)
{
    int i;
	int j;
	int flag;

	i = 0;
	j = 0;
	flag = 0;
//check the char of the second string ::
	while (str[j] != '\0')
	{
	    //check the char of the second string is in the first string
	    if (str[j] == c)
	    {
	        flag = 1;
	    }
	    j++;
	} 
	return (flag);
}

int main(int argc, char *argv[])
{
	int i;
	int j;
    int m;
    
	i = 0;
	j = 0;
	m = 0;
	printf("argc == %d\n",argc);
	printf("argv 0 == %s\n",argv[0]);
	printf("argv 1 == %s\n",argv[1]);
	printf("argv 2 == %s\n",argv[2]);
	//If the number of arguments is not 2, the program displays \n :
// 	if (argc <= 2)
// 	{
// 	    write (1, "\n", 1);
// 	    return (0);
// 	}

	//Note: I handle each string lonely and the treatement of the 2 strings is seperate
	//check the first string :
    //here I am outputing the first string without double :
    //// the start of the check the first string :
	while (argv[1][i] != '\0')
	{
	    j = i;
	   	while (argv[1][j] != '\0')
	   	{

	   	    if (argv[1][i] == argv[1][j] && i >= j)
	   	    {
	   	        if (ft_check1(i, j, argv[1]) == 1)
	   	        {
	   	            //I am outputing here
	   	            write(1, &argv[1][i], 1);
	   	        }
	   	    }
	   	   j++;
	   	} 
	   	i++;
	}
	// the end of the check the first string
	
	//******
	
    //check the second string ::
	while (argv[2][m] != '\0')
	{
	    if (check_str1(argv[1], argv[2][m]) == 0)
	    {
	        //should check is the char already outputed in the second string or not
	        if (ft_check2(m,argv[2]) == 1)
	        {
    	        write (1, &argv[2][m], 1);
	        }
	    }
	   	m++;
	}
	write (1, "\n", 1);

    // the end of the check the second string
	
	return (0);
}
