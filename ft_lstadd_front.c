/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:19:58 by idabligi          #+#    #+#             */
/*   Updated: 2022/11/01 10:56:38 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = (*lst);
	(*lst) = new;
}

void pr(void *content)
{
	printf("%s -> ", (char *)content);
}

// int main()
// {
// 	t_list *a = ft_lstnew("A");
// 	t_list *b = ft_lstnew("B");
// 	t_list *c = ft_lstnew("C");
// 	t_list *d = ft_lstnew("D");
// 	t_list *tt = ft_lstnew("ZZZ");
// 	ft_lstadd_front(&a, tt);

// 	t_list *z = ft_lstnew("X");
// 	ft_lstadd_front(&tt, z);
	
// 	a->next = b;
// 	b->next = c;
// 	c->next = d;
// 	// ft_lstadd_back(&z, ft_lstnew("LAST"));
// 	ft_lstiter(z, &pr);
// }