/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristianamarcu <cristianamarcu@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 19:23:05 by cmarcu            #+#    #+#             */
/*   Updated: 2022/02/26 11:47:42 by cristianama      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include <stdlib.h>
# include <stdio.h>
# include <readline/readline.h>
# include <stdbool.h>

/*
* Hay que declarar todas las listas antes de definirlas para que el *next pueda
* ser del tipo de la lista
*/
typedef struct s_cmd_line t_cmd_line;
typedef struct s_token t_token;

struct s_cmd_line
{
	char 		*str;
	t_cmd_line	*next;
};

struct s_token
{
	char *str;
	t_type type;
	bool exp;
	t_token *next;
};

typedef enum quote
{
	NONE,
	SINGLE,
	DOUBLE,
	END
}	t_quote;

typedef enum token_type
{
	NONE,
	ARG,
	BUILTIN,
	REDIR_OUT, //<
	HERE_DOC, //<<
	LIMITOR,//Palabra después de <<
	REDIR_IN, //>
	APPEND, //>>


	END
}	t_type;

#endif
