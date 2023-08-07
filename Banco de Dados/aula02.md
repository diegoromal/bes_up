# Atividade Prática

1. É um sistema organizado para armazenar e gerenciar informações, de maneira estrurada, com o objetivo de facilitar a manipulação e consulta.
2. Dado é uma representação bruta, sem contexto. Por exemplo, se eu falo "Amarelo", a palavra sozinha não tem como saber o contexto.
   Informação: É o resultado da organização dos dados, colocados em contexto. Por exemplo, "Camisa Amarela", isso tem uma infromação relevante para uma possível análise.
   Conhecimento: É a aplicação de forma significativa da informação, com o conhecimento podemos resolver problemas ou tomar decisões.
3. Organização de Dados: Sistemas de arquivos possuem organização hierárquica, enquanto SGDB é feito com tabelas relacionais e têm um esquema bem definido.
   Acesso aos Dados: Sistemas de arquivos precisam que cada aplicação implemente o mecânismo de acesso aos dados, enquanto no SGDB o acesso é centralizado e padronizado.
   Controle de Redundância: Com Sistemas de arquivos a redundância pode ocorrer, pois cada aplicação pode ter suas próprias cópias dos dados. O SGBD oferece um controle mais rigoroso pois as informações são armazenadas em tabelas normalizadas e relacionadas.
   Segurança e Controle de Acesso: No Sistema de arquivos, a aplicação que é responsável pela implementação da segurança e controle, no SGBD já existem recursos mais avançados de segurança.
   Em resumo o SGBD é mais compleco e poderoso que o sistema de arquivos.
4. Usuários finais, DBA's, programadores, analistas, auditores.
5. A NETFLIX usa noSQL para armazenar metadados e informações relacionadas à conteúdo, que permite armazenar e recuperar os dados de forma escalável. Eles utilizam noSQL para gerenciar grandes volumes de dados.
6. ## Entidade 1: Filmes Clássicos
   | Título                  | Gênero     | Diretor           | Ano de Lançamento |
   |-------------------------|------------|-------------------|-------------------|
   | O Poderoso Chefão       | Crime      | Francis Ford Coppola | 1972              |
   | Casablanca              | Romance    | Michael Curtiz    | 1942              |
   | Cidadão Kane            | Drama      | Orson Welles      | 1941              |
   | Laranja Mecânica        | Ficção Científica | Stanley Kubrick   | 1971              |
   | O Encouraçado Potemkin  | Drama      | Sergei Eisenstein | 1925              |
   | Psicose                 | Suspense   | Alfred Hitchcock  | 1960              |
   | Cidadão Quatrocentão    | Comédia    | Frank Capra       | 1934              |
   | Blade Runner           | Ficção Científica | Ridley Scott      | 1982              |
   | Ladrões de Bicicletas   | Drama      | Vittorio De Sica  | 1948              |
   | Apocalypse Now         | Drama      | Francis Ford Coppola | 1979              |

   ## Entidade 2: Países e Capitais
   | País                | Continente | Capital        | População (milhões) |
   |----------------------|------------|----------------|---------------------|
   | Brasil               | América do Sul | Brasília       | 212                 |
   | Japão                | Ásia       | Tóquio         | 126                 |
   | Austrália            | Oceania    | Canberra       | 25                  |
   | Itália                | Europa     | Roma           | 60                  |
   | Canadá               | América do Norte | Ottawa         | 38                  |
   | Egito                | África     | Cairo          | 99                  |
   | México               | América do Norte | Cidade do México | 129                 |
   | Argentina           | América do Sul | Buenos Aires   | 45                  |
   | Alemanha           | Europa     | Berlim         | 83                  |
   | China                | Ásia       | Pequim         | 1445                |

   ## Entidade 3: Alimentos e Calorias
   | Alimento             | Tipo        | Calorias (por 100g) | Preço (R$) |
   |-----------------------|------------|---------------------|------------|
   | Maçã                   | Fruta      | 52                  | 2.50       |
   | Frango                 | Proteína   | 165                 | 8.00       |
   | Batata Frita           | Lanche     | 312                 | 5.00       |
   | Iogurte                | Laticínio  | 58                  | 3.20       |
   | Salmão                 | Peixe      | 208                 | 15.00      |
   | Espinafre              | Vegetal    | 23                  | 1.80       |
   | Sorvete                | Sobremesa  | 207                 | 6.50       |
   | Arroz                  | Carboidrato | 130                 | 4.00       |
   | Queijo                 | Laticínio  | 402                 | 10.00      |
   | Chocolate              | Doce       | 546                 | 4.80       |

   ## Entidade 4: Animais e Habitat
   | Animal               | Classe     | Habitat          | População (milhões) |
   |-----------------------|------------|------------------|---------------------|
   | Leão                  | Mamífero   | Savana           | 20                  |
   | Tubarão Branco        | Peixe      | Oceano           | 3                   |
   | Águia                 | Ave        | Montanhas        | 1                   |
   | Elefante              | Mamífero   | Selva            | 0.4                 |
   | Tartaruga Marinha     | Réptil     | Oceano           | 0.5                 |
   | Tigre                 | Mamífero   | Floresta         | 3                   |
   | Golfinho              | Mamífero   | Oceano           | 0.6                 |
   | Coelho                | Mamífero   | Campos           | 1                   |
   | Crocodilo             | Réptil     | Pântanos         | 0.8                 |
   | Lobo                  | Mamífero   | Floresta         | 0.2                 |
