import pandas as pd

dados = pd.read_excel('relatorio_confeccoes_roupas.xlsx', header=1, na_values = ['0', 'NaN'])

print(dados.head())