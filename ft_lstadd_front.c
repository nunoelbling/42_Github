/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuelblin <nuelblin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 14:53:04 by nuelblin          #+#    #+#             */
/*   Updated: 2026/04/29 15:25:35 by nuelblin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new = malloc(sizeof(t_list));
	if (!new || !lst)
		return (NULL);
	new->next = *lst;
	*lst = new;
}
