/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstsort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/26 09:47:06 by mdeville          #+#    #+#             */
/*   Updated: 2018/01/04 19:23:48 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commons.h"

static t_dlist	*merge(t_dlist *a, t_dlist *b)
{
	t_dlist *head;

	if (!b)
		return (a);
	else if (!a)
		return (b);
	if (a->data < b->data)
	{
		head = a;
		head->next = merge(a->next, b);
	}
	else
	{
		head = b;
		head->next = merge(a, b->next);
	}
	return (head);
}

static void		split(t_dlist *head, t_dlist **a, t_dlist **b)
{
	t_dlist *fast;
	t_dlist *slow;

	if (!head || head->next == NULL)
	{
		*a = head;
		*b = NULL;
		return ;
	}
	slow = head;
	fast = head->next;
	while (fast)
	{
		fast = fast->next;
		if (fast)
		{
			fast = fast->next;
			slow = slow->next;
		}
	}
	*a = head;
	*b = slow->next;
	slow->next = NULL;
}

static void		merge_sort(t_dlist **head)
{
	t_dlist *a;
	t_dlist *b;

	if (!head || !*head || !(*head)->next)
		return ;
	split(*head, &a, &b);
	merge_sort(&a);
	merge_sort(&b);
	*head = merge(a, b);
}

static void		repair_links(t_dlist **head)
{
	t_dlist *curr;
	t_dlist *prev;

	curr = *head;
	while (curr->next)
	{
		prev = curr;
		curr = curr->next;
		curr->prev = prev;
	}
	(*head)->prev = curr;
	curr->next = *head;
}

void			lstsort(t_dlist **head)
{
	if (!head || !*head || (*head)->next == *head)
		return ;
	(*head)->prev->next = NULL;
	(*head)->prev = NULL;
	merge_sort(head);
	repair_links(head);
}
