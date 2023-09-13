#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdio.h>
int	ft_atoi(char *str);
int	ft_isalpha(char *str);
int	ft_isdigit(char *str);
int	ft_isprint(char *str);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int	ft_strlen(char *str);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_tolower(char *str);
char	*ft_toupper(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);

#endif