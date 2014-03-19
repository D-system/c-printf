/*
** tools.c for  in /u/epitech_2012/brenne_t/cu/rendu/c/my_printf
** 
** Made by thomas brennetot
** Login   <brenne_t@epitech.net>
** 
** Started on  Sun Dec 23 18:43:39 2007 thomas brennetot
** Last update Tue Dec 25 19:01:46 2007 thomas brennetot
*/

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include "my_printf.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}

void	my_put_nbr(int nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      my_put_nbr(-nb);
    }
  else
    {
      if (nb < 10)
	my_putchar(nb + '0');
      else
	{
	  my_put_nbr(nb/10);
	  my_putchar((nb%10) + '0');
	}
    }
  return;
}

void	my_putstr(char *str)
{
  while (*str != '\0')
    {
      write(1, str, 1);
      str++;
    }  
}

