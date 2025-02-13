/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   builtin_checker.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 13:45:38 by lvarela           #+#    #+#             */
/*   Updated: 2022/04/13 13:57:54 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

int			builtin_checker(char **cmd)
{
	if (cmd == NULL)
		return (0);
	if (ft_strcmp("cd", cmd))
		return (builtin_cd(cmd));
	else if (ft_strcmp("pwd", cmd))
		return (builtin_pwd(cmd));
	if (ft_strcmp("exit", cmd))
		return (builtin_exit(cmd));
	else if (ft_strcmp("echo", cmd))
		return (builtin_echo(cmd));
	else if (ft_strcmp("env", cmd))
		return (builtin_export(cmd));
	else if (ft_strcmp("export", cmd))
		return (builtin_export(cmd));
	else if (ft_strcmp("unset", cmd))
		return (builtin_unset(cmd));
	return (0);
}

// si returnea que lo es, tiene que hacerlo