programa
{
	funcao inicio ()
	{
    const real MARGEM_SEGURANCA = 1.2
    real consumo_medio_crianca = 0.1, consumo_medio_adulto = 0.3, qtde_carne
    inteiro qtde_criancas, qtde_adultos

		escreva("Informe a quantidade de crianças: ")
    leia(qtde_criancas)
    escreva("Informe a quantidade de aultos: ")
		leia(qtde_adultos)
    
    qtde_carne = ((consumo_medio_crianca * qtde_criancas) + (consumo_medio_adulto * qtde_adultos)) * MARGEM_SEGURANCA
    escreva("Quantidade total de carne para o churrasco é: ", qtde_carne, "kg")
	}
}