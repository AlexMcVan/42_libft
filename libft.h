/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarie-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 13:18:01 by amarie-c          #+#    #+#             */
/*   Updated: 2021/06/29 16:48:25 by amarie-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_libft
#define DEF_libft

#include <stdlib.h>
#include <unistd.h>
int	ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nbofelements, size_t sizeofelement);
int	ft_isalnum(int character);
int	ft_isalpha(int character);
int	ft_isdigit(int character);
int	ft_isprint(int character);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
char	*ft_strchr(const char *lookin, int lookfor);
char	*ft_strdup(const char *src);
size_t	ft_strlcat(char *dest, const char *src, size_t destsize);
size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);
int	ft_strncmp(char *s1, char *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char *ft_strrchr(const char *searchin, int searchfor);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int	ft_tolower(int character);
int	ft_toupper(int character);
char	*ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);
char **ft_split(char const *s, char c);
char *ft_substr(char const *s, unsigned int start,size_t len);
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);
char *ft_itoa(int n);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
					
}				t_list;
t_list	*ft_lstnew(void *content);
void ft_lstadd_front(t_list **alst, t_list *new);
int ft_lstsize(t_list *lst);
t_list *ft_lstlast(t_list *lst);
void ft_lstadd_back(t_list **alst, t_list *new);
void ft_lstdelone(t_list *lst, void (*del)(void*));
void ft_lstclear(t_list **lst, void (*del)(void*));
#endif
