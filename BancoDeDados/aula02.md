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

   ## Entidade 5: Livros
   | Título                | Autor            | Gênero      | Ano de Publicação |
   |-----------------------|------------------|-------------|-------------------|
   | "1984"                | George Orwell    | Ficção      | 1949              |
   | "Dom Casmurro"        | Machado de Assis | Romance     | 1899              |
   | "Harry Potter"        | J.K. Rowling     | Fantasia    | 1997              |
   | "Pai Rico, Pai Pobre" | Robert T. Kiyosaki | Educação   | 1997              |
   | "O Senhor dos Anéis"  | J.R.R. Tolkien   | Fantasia    | 1954              |
   | "O Pequeno Príncipe"  | Antoine de Saint-Exupéry | Infantil | 1943              |
   | "Cem Anos de Solidão" | Gabriel García Márquez | Ficção  | 1967              |
   | "O Alquimista"        | Paulo Coelho     | Autoajuda   | 1988              |
   | "A Culpa é das Estrelas" | John Green   | Romance     | 2012              |
   | "O Hobbit"            | J.R.R. Tolkien   | Fantasia    | 1937              |

   ## Entidade 6: Cidades e Países
   | Cidade           | País          | População (milhões) | Continente    |
   |------------------|---------------|---------------------|---------------|
   | Tóquio           | Japão         | 37.5                | Ásia          |
   | Nova York        | Estados Unidos | 8.4                 | América       |
   | Londres          | Reino Unido   | 8.9                 | Europa        |
   | São Paulo        | Brasil        | 12.3                | América       |
   | Pequim           | China         | 21.5                | Ásia          |
   | Cairo            | Egito         | 9.2                 | África        |
   | Sydney           | Austrália     | 5.3                 | Oceania       |
   | Moscou           | Rússia        | 12.5                | Europa        |
   | Mumbai (Bombaim) | Índia         | 20.4                | Ásia          |
   | Cidade do México | México        | 21.7                | América       |

   ## Entidade 7: Jogos de Vídeo Game
   | Título                | Plataforma  | Gênero      | Ano de Lançamento |
   |-----------------------|-------------|-------------|-------------------|
   | "The Legend of Zelda: Breath of the Wild"  | Nintendo Switch  | Ação-Aventura | 2017 |
   | "Grand Theft Auto V"                      | PS4, Xbox One   | Ação          | 2013 |
   | "Minecraft"                               | Multiplataforma | Sandbox       | 2011 |
   | "Fortnite"                                | Multiplataforma | Battle Royale | 2017 |
   | "FIFA 22"                                 | PS5, Xbox Series X/S, PC | Esportes | 2021 |
   | "Super Mario Odyssey"                     | Nintendo Switch  | Plataforma     | 2017 |
   | "Call of Duty: Warzone"                  | Multiplataforma  | FPS            | 2020 |
   | "Assassin's Creed Valhalla"              | PS5, Xbox Series X/S, PC | Ação-Aventura | 2020 |
   | "Among Us"                                | Multiplataforma | Festa          | 2018 |
   | "Red Dead Redemption 2"                  | PS4, Xbox One   | Ação-Aventura | 2018 |

   ## Entidade 8: Times de Futebol
   | Time              | País          | Liga        | Ano de Fundação |
   |-------------------|---------------|-------------|-----------------|
   | Barcelona         | Espanha       | La Liga     | 1899            |
   | Manchester United | Inglaterra    | Premier League | 1878         |
   | Bayern de Munique | Alemanha      | Bundesliga  | 1900            |
   | Flamengo          | Brasil        | Brasileirão | 1895            |
   | Juventus          | Itália        | Serie A     | 1897            |
   | Paris Saint-Germain | França      | Ligue 1     | 1970            |
   | Boca Juniors      | Argentina     | Primera División | 1905       |
   | Ajax              | Holanda       | Eredivisie  | 1900            |
   | Liverpool         | Inglaterra    | Premier League | 1892         |
   | River Plate       | Argentina     | Primera División | 1901       |

   ## Entidade 9: Planetas do Sistema Solar
   | Planeta            | Tipo        | Diâmetro (km) | Distância ao Sol (milhões de km) |
   |--------------------|------------|---------------|----------------------------------|
   | Mercúrio           | Terrestre   | 4,880         | 57.9                             |
   | Vênus              | Terrestre   | 12,104        | 108.2                            |
   | Terra              | Terrestre   | 12,742        | 149.6                            |
   | Marte              | Terrestre   | 6,779         | 227.9                            |
   | Júpiter            | Gasoso      | 139,822       | 778.3                            |
   | Saturno            | Gasoso      | 116,464       | 1,426.7                          |
   | Urano              | Gasoso      | 50,724        | 2,870.9                          |
   | Netuno             | Gasoso      | 49,244        | 4,498.3                          |
   | Plutão             | Anão        | 2,377         | 5,906                            |
   | Ceres              | Anão        | 939           | 414.7                            |

   ## Entidade 10: Marcas de Carros
   | Marca                | Fundação | País de Origem | Número de Modelos |
   |----------------------|----------|----------------|-------------------|
   | Toyota               | 1937     | Japão          | 26                |
   | Ford                 | 1903     | Estados Unidos | 21                |
   | BMW                  | 1916     | Alemanha       | 17                |
   | Chevrolet            | 1911     | Estados Unidos | 18                |
   | Honda                | 1946     | Japão          | 19                |
   | Volkswagen           | 1937     | Alemanha       | 23                |
   | Nissan               | 1933     | Japão          | 20                |
   | Mercedes-Benz        | 1926     | Alemanha       | 16                |
   | Hyundai              | 1967
