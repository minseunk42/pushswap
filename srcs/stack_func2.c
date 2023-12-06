/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_func2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minseunk <minseunk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 17:55:56 by minseunk          #+#    #+#             */
/*   Updated: 2023/05/31 20:17:04 by minseunk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int	proc_cmd(char *cmd, t_stack st_arr[])
{
	if (!ft_strncmp(cmd, "pa\n", ft_strlen(cmd)))
		pa(st_arr);
	else if (!ft_strncmp(cmd, "pb\n", ft_strlen(cmd)))
		pb(st_arr);
	else if (!ft_strncmp(cmd, "ra\n", ft_strlen(cmd)))
		ra(st_arr);
	else if (!ft_strncmp(cmd, "rb\n", ft_strlen(cmd)))
		rb(st_arr);
	else if (!ft_strncmp(cmd, "rr\n", ft_strlen(cmd)))
		rr(st_arr);
	else if (!ft_strncmp(cmd, "rra\n", ft_strlen(cmd)))
		rra(st_arr);
	else if (!ft_strncmp(cmd, "rrb\n", ft_strlen(cmd)))
		rrb(st_arr);
	else if (!ft_strncmp(cmd, "rrr\n", ft_strlen(cmd)))
		rrr(st_arr);
	else if (!ft_strncmp(cmd, "sa\n", ft_strlen(cmd)))
		sa(st_arr);
	else if (!ft_strncmp(cmd, "sb\n", ft_strlen(cmd)))
		sb(st_arr);
	else if (!ft_strncmp(cmd, "ss\n", ft_strlen(cmd)))
		ss(st_arr);
	else
		return (-1);
	return (0);
}

void	copy_st(t_stack from[], t_stack to[])
{
	t_node	*temp;
	int		tempval[2];

	init_st(to);
	temp = from[STA].head;
	while (temp)
	{
		tempval[NUM] = temp->val[NUM];
		tempval[ORDER] = temp->val[ORDER];
		push_tail(&to[STA], tempval);
		temp = temp->next;
	}
	temp = from[STB].head;
	while (temp)
	{
		tempval[NUM] = temp->val[NUM];
		tempval[ORDER] = temp->val[ORDER];
		push_tail(&to[STB], tempval);
		temp = temp->next;
	}
}
