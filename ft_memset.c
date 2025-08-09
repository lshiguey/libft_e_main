/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshiguey <lshiguey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 15:16:42 by lshiguey          #+#    #+#             */
/*   Updated: 2025/08/09 15:46:07 by lshiguey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ponteiro, int valor, size_t qtd_b)
{
	size_t			i;
	unsigned char	*temp;

	i = 0;
	temp = (unsigned char *)ponteiro;
	while (i < qtd_b)
		temp[i++] = (unsigned char)valor;
	return (ponteiro);
}
/*
int	main(void)
{
	int	ponteiro[4];
	int	i;

	printf("sizeof(int)=%li\n", sizeof(int));
	printf("sizeof(men)=%li\n", sizeof(ponteiro));
	printf("sizeof(i)=%li\n", sizeof(i));
	ft_memset(ponteiro, 1, sizeof(ponteiro));
	i = 0;
	while (i < 4)
		printf("%i\n", ponteiro[i++]);
	return (0);
}

Passo 1: o que sizeof(ponteiro) retorna?
ponteiro é um array de 4 ints.
Supondo que sizeof(int) == 4 bytes 
(geralmente é 4 bytes em sistemas 32-bit e 64-bit).
Então: sizeof(ponteiro) = 4 * 4 = 16 bytes.

Passo 2: o que faz ft_memset(ponteiro, 1, sizeof(ponteiro))?
O ft_memset (igual ao memset) preenche byte a byte a memória 
do array com o valor 1 (o valor do parâmetro c convertido 
para unsigned char).
Ele vai escrever 16 bytes com o valor 0x01.
Em outras palavras, na memória, ponteiro vai ficar assim:
Byte index:   0    1    2    3     4    5    6    7     8
Value:      0x01 0x01 0x01 0x01  0x01 0x01 0x01 0x01  0x01
    9   10   11    12   13   14   15
 0x01 0x01 0x01  0x01 0x01 0x01 0x01

Passo 3: como o int é montado a partir desses bytes?
Cada int tem 4 bytes.
O sistema normalmente usa little endian (o byte menos 
significativo vem primeiro).
Então cada ponteiro[i] é formado pelos 4 bytes consecutivos:
ponteiro[0] = 0x01 0x01 0x01 0x01  (bytes 0-3)
ponteiro[1] = 0x01 0x01 0x01 0x01  (bytes 4-7)
ponteiro[2] = 0x01 0x01 0x01 0x01  (bytes 8-11)
ponteiro[3] = 0x01 0x01 0x01 0x01  (bytes 12-15)

Passo 4: qual o valor decimal do int formado pelos bytes 0x01 0x01 0x01 0x01?
Em little endian, o número é:
0x01 (LSB) + 0x01 << 8 + 0x01 << 16 + 0x01 << 24
= 0x01 + 0x0100 + 0x010000 + 0x01000000
= 0x01010101 (hexadecimal)
Convertendo para decimal:
0x01010101 em decimal é:
= 1 + 256 + 65536 + 16777216
= 1 + 256 + 65536 + 16777216
= 16843009

Resumo:
ft_memset escreve byte a byte.
Preencheu o array com 0x01 em todos os bytes.
Cada int (4 bytes) virou 0x01010101.
O valor decimal disso é 16843009.
Por isso, ao imprimir, você vê 16843009 para cada elemento do array.

O número hexadecimal 0x01010101 equivale ao número decimal 16843009.
Explicação:
Em hexadecimal, cada posição representa uma potência de 16. 
O número 0x01010101 pode ser decomposto da seguinte forma:
1
16^7 + 0
16^6 + 1
16^5 + 0
16^4 + 1
16^3 + 0
16^2 + 1
16^1 + 1
16^0
Calculando as potências de 16 e multiplicando pelos seus 
respectivos dígitos:
1, 16777216 + 0, 16777216 + 1, 1048576 + 0, 65536 + 1, 
4096 + 0, 256 + 1, 16 + 1, 1.
Somando os resultados: 16777216 + 1048576 + 4096 + 16 + 1 
= 16843009.

Contexto: bytes e posição no número inteiro
Um inteiro de 4 bytes (32 bits) é formado por 4 posições de 
8 bits cada, 
chamados bytes. Cada byte representa um valor de 0 a 255.

Por exemplo, imagine o inteiro como:

Byte 3 (mais significativo)	Byte 2	Byte 1	Byte 0 
(menos significativo)
b3	b2	b1	b0

Para saber o valor do inteiro, cada byte deve ser 
multiplicado pela potência 
de 256 (ou 2^8) correspondente à sua posição, assim:

inteiro
=
𝑏
0
×
256
0
+
𝑏
1
×
256
1
+
𝑏
2
×
256
2
+
𝑏
3
×
256
3
inteiro=b0×256 
0
 +b1×256 
1
 +b2×256 
2
 +b3×256 
3
 
Porque:

O byte 0 (menos significativo) vale ele mesmo (multiplicado por 
256
0
=
1
256 
0
 =1)

O byte 1 vale 256 vezes (multiplicado por 
256
1
=
256
256 
1
 =256)

O byte 2 vale 256 vezes 256 (multiplicado por 
256
2
=
65.536
256 
2
 =65.536)

O byte 3 vale 256 vezes 256 vezes 256 (multiplicado por 
256
3
=
16.777.216
256 
3
 =16.777.216)

Por que 256?
Cada byte tem 8 bits, então pode representar valores de 0 a 
2
8
−
1
=
255
2 
8
 −1=255.

Quando você “move” um byte para a esquerda na ordem dos bytes 
(na memória little endian), você está multiplicando ele por 
2
8
=
256
2 
8
 =256 para colocá-lo na posição correta.

No seu exemplo:
Você tem 4 bytes 0x01 (que é decimal 1) em sequência, 
e quer o valor do inteiro resultante:

1
×
256
0
+
1
×
256
1
+
1
×
256
2
+
1
×
256
3
=
1
+
256
+
65536
+
16777216
=
16843009
1×256 
0
 +1×256 
1
 +1×256 
2
 +1×256 
3
 =1+256+65536+16777216=16843009
De forma simplificada:
Shift left (<<) em bits é equivalente a multiplicar por potências de 2.

Cada deslocamento de 8 bits (um byte) equivale a multiplicar por 
2
8
=
256
2 
8
 =256.

Então:

c
Copiar
Editar
0x01 << 0 = 0x01 * 1 = 1
0x01 << 8 = 0x01 * 256 = 256
0x01 << 16 = 0x01 * 65536 = 65536
0x01 << 24 = 0x01 * 16777216 = 16777216
*/