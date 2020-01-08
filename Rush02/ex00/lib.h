/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 13:31:58 by rwright           #+#    #+#             */
/*   Updated: 2019/01/27 09:09:41 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H

void	ft_putstr(char *str);
void	ft_putnbr(int n);
int		ft_read(int width_height[2], char corners[3]);
void	get_top_corners(char corners[3], int width_height[2]);

#endif
