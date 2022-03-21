/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pwd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaryett <jmaryett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 17:41:53 by chudapak          #+#    #+#             */
/*   Updated: 2022/01/16 01:19:09 by jmaryett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../logic/logic.h"

void	process_pwd(t_list_commands *cmd)
{
	char	*pwd;

	pwd = getcwd(NULL, 0);
	g_error_code = errno;
	if (!pwd)
		ft_putstr_fd(strerror(g_error_code), STD_ERROR);
	else
		g_error_code = 0;
	ft_putendl_fd(pwd, STDOUT_FILENO);
	free(pwd);
	cmd->number += 0;
	return ;
}
