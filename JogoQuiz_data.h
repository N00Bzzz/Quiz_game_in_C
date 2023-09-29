typedef struct {
	char enunciado [250];
	char alternativas [250];
	int reposta_certa;
}DataPergunta;

DataPergunta Database_Perguntas [3][15] = {
 { // Level <Facil [0]
 {"Qual � o maior pa�s em �rea territorial?", "1 - R�ssia\n2 - Canad�\n3 - China\n4 - Estados Unidos\n5 - Brasil\n", 1},
 {"Quem pintou a Mona Lisa?", "1 - Pablo Picasso\n2 - Leonardo da Vinci\n3 - Salvador Dal�\n4 -  Vincent van Gogh\n5 - Michelangelo\n", 2},
 {"Qual � a montanha mais alta do mundo?", "1 - Monte Kilimanjaro\n2 - Monte Aconc�gua\n3 - Montanha K2\n4 - Monte Fuji\n5 - Monte Everest\n", 5},
 {"Qual � o metal mais abundante na crosta terrestre?", "1 - Ferro\n2 - Cobre\n3 - Alum�nio\n4 - Ouro\n5 - Prata\n", 3},
 {"Quem escreveu a obra \"Dom Quixote\"?", "1 - William Shakespeare\n2 - Friedrich Nietzsche\n3 - Machado de Assis\n4 - Miguel de Cervantes\n5 - Fyodor Dostoevsky\n", 4},
 {"Qual � o maior oceano do mundo?", "1 - Oceano Atl�ntico\n2 - Oceano �ndico\n3 - Oceano �rtico\n4 - Oceano Pac�fico\n5 - Oceano Ant�rtico\n", 4},
 {"Qual � a capital da Austr�lia?", "1 - Sydney\n2 - Melbourne\n3 - Brisbane\n4 - Canberra\n5 - Perth\n", 1},
 {"Quem foi o primeiro homem a pisar na Lua?", "1 - Buzz Aldrin\n2 - Neil Armstrong\n3 - Yuri Gagarin\n4 - Alan Shepard\n5 - John Glenn\n", 2},
 {"Quem escreveu a pe�a teatral \"Romeu e Julieta\"?", "1 - Arthur Miller\n2 - Anton Chekhov\n3 - Oscar Wilde\n4 - Tennessee Williams\n5 - William Shakespeare\n", 5},
 {"Qual � a f�rmula qu�mica da �gua?", "1 - H2SO4\n2 - NaCl\n3 - H2O\n4 - CO2\n5 - H2O2\n", 3},
 {"Qual � o maior planeta do sistema solar?", "1 - Marte\n2 - J�piter\n3 - Terra\n4 - V�nus\n5 - Saturno\n", 2},
 {"Qual � a cidade conhecida como \"Cidade Luz\"?", "1 - Roma\n2 - Paris\n3 - Nova York\n4 - T�quio\n5 - Londres\n", 2},
 {"Quem foi o primeiro presidente do Brasil?", "1 - Juscelino Kubitschek\n2 - Get�lio Vargas\n3 - Jos� Sarney\n4 - Tancredo Neves\n5 - Marechal Deodoro da Fonseca\n", 5},
 {"Qual � a capital da Argentina?", "1 - Buenos Aires\n2 - Santiago\n3 - Lima\n4 - Bogot�\n5 - Montevid�u\n", 1},
 {"Qual � o maior deserto do mundo?", "1 - Deserto de Gobi\n2 - Deserto da Ar�bia\n3 - Deserto do Atacama\n4 - Deserto do Saara\n5 - Deserto da Patagonia\n", 4}
 },
 { // Level <M�dio> [1]
 {"Qual � o pa�s com o maior n�mero de fusos hor�rios?", "1 - Estados Unidos\n2 - Fran�a\n3 - China\n4 - Canad�\n5 - Austr�lia\n", 2},
 {"Qual � o nome do fil�sofo grego considerado o pai da filosofia ocidental?", "1 - Arist�teles\n2 - Plat�o\n3 - Her�clito\n4 - S�crates\n5 - Pit�goras\n", 4},
 {"Em qual per�odo da Pr�-Hist�ria os seres humanos come�aram a desenvolver a agricultura?", "1 - Neol�tico\n2 - Paleol�tico\n3 - Mesol�tico\n4 - Era do Gelo\n5 - Idade dos Metais\n", 1},
 {"Qual � o autor do livro \"1984\", que descreve um futuro dist�pico governado por um regime totalit�rio?", "1 - Aldous Huxley\n2 - Margaret Atwood\n3 - George Orwell\n4 - Ray Bradbury\n5 - J.R.R. Tolkien\n", 3},
 {"Qual � o nome do cientista que desenvolveu a teoria da relatividade?", "1 - Isaac Newton\n2 - Niels Bohr\n3 - Marie Curie\n4 - Galileo Galilei\n5 - Albert Einstein\n", 5},
 {"Quem foi o l�der pol�tico sul-africano e ativista contra o apartheid, vencedor do Pr�mio Nobel da Paz em 1993?", "1 - Nelson Mandela\n2 - Robert Mugabe\n3 - Fidel Castro\n4 - Martin Luther King Jr.\n5 - Desmond Tutu\n", 1},
 {"Qual � o nome do cientista que formulou a teoria da evolu��o das esp�cies por sele��o natural?", "1 - Alexander Fleming\n2 - Gregor Mendel\n3 - Charles Darwin\n4 - Louis Pasteur\n5 - Thomas Edison\n", 3},
 {"EQual � o nome do maior desfiladeiro do mundo, localizado no rio Colorado, nos Estados Unidos?", "1 - Bryce Canyon\n2 - Zion Canyon\n3 - Antelope Canyon\n4 - Grand Canyon\n5 - Canyonlands\n", 4},
 {"Quem pintou a famosa obra \"Guernica\", retratando o bombardeio da cidade espanhola durante a Guerra Civil Espanhola?", "1 - Henri Matisse\n2 - Claude Monet \n3 - Salvador Dal�\n4 - Vincent van Gogh\n5 - Pablo Picasso\n", 5},
 {"Qual � o nome do tratado que estabeleceu as bases para a Uni�o Europeia?", "1 - Tratado de Roma\n2 - Tratado de Maastricht\n3 - Tratado de Lisboa\n4 - Tratado de Versalhes\n5 - Tratado de Vars�via\n", 2},
 {"Qual � o monte mais alto localizado fora do continente asi�tico?", "1 - Monte Aconc�gua\n2 - Monte McKinley (Denali)\n3 - Monte Elbrus\n4 - Monte Vinson\n5 - Monte Kilimanjaro\n", 1},
 {"Quem foi o primeiro imperador romano?", "1 - Augusto\n2 - Tib�rio\n3 - Cal�gula\n4 - Nero\n5 - J�lio C�sar\n", 5},
 {"Qual � o nome do pintor renascentista italiano que criou a obra \"O Nascimento de V�nus\"?", "1 - Michelangelo\n2 - Leonardo da Vinci\n3 - Botticelli\n4 - Raphael\n5 - Caravaggio\n", 3},
 {"Qual � a capital da Hungria?", "1 - Budapeste\n2 - Vars�via\n3 - Praga\n4 - Bucareste\n5 - Zagreb\n", 1},
 {"Qual � o maior arquip�lago do mundo?", "1 - Filipinas\n2 - Jap�o\n3 - Maldivas\n4 - Indon�sia\n5 - Nova Zel�ndia\n", 4}
 },
 { // Level <Dif�cil> [2]
 {"Qual pa�s possui o maior n�mero de vulc�es ativos?", "1 - Indon�sia\n2 - Jap�o\n3 - Chile\n4 - It�lia\n5 - Filipinas\n", 1},
 {"Qual � a montanha mais alta da �frica?", "1 - Monte Everest\n2 - Mont Blanc\n3 - Kilimanjaro\n4 - Monte McKinley\n5 - Aconc�gua\n", 3},
 {"Qual � o metal mais pesado na tabela peri�dica?", "1 - Ouro\n2 - Chumbo\n3 - Platina\n4 - Ur�nio\n5 - Osmio\n", 5},
 {"Qual foi o primeiro pa�s a enviar um ser humano ao espa�o?", "1 - Estados Unidos\n2 - China\n3 - R�ssia\n4 - Fran�a\n5 - Alemanha\n", 3},
 {"Em que ano foi fundada a Microsoft?", "1 - 1975\n2 - 1985\n3 - 1995\n4 - 2005\n5 - 2015\n", 1},
 {"Qual � a velocidade da luz no v�cuo?", "1 - 150.000 km/s\n2 - 300.000 km/s\n3 - 200.000 km/s\n4 - 250.000 km/s\n5 - 350.000 km/s\n", 2},
 {"Qual � o livro mais vendido da hist�ria, excluindo a B�blia?", "1 - O Pequeno Pr�ncipe\n2 - O Senhor dos An�is\n3 - O Alquimista\n4 - Dom Quixote\n5 - Harry Potter e a Pedra Filosofal\n", 4},
 {"Qual � o pa�s com a maior expectativa de vida m�dia?", "1 - Jap�o\n2 - Su��a\n3 - Austr�lia\n4 - Canad�\n5 - Singapura\n", 5},
 {"Quem pintou a obra \"A Noite Estrelada\"", "1 - Pablo Picasso\n2 - Vincent van Gogh\n3 - Leonardo da Vinci\n4 - Salvador Dal�\n5 - Claude Monet\n", 2},
 {"Quem foi o primeiro presidente dos Estados Unidos?", "1 - Abraham Lincoln\n2 - George Washington\n3 - Thomas Jefferson\n4 - John F. Kennedy\n5 - Franklin D. Roosevelt\n", 2},
 {"Qual � a maior cidade da Am�rica Latina em popula��o?", "1 - Cidade do M�xico, M�xico\n2 - Buenos Aires, Argentina\n3 - Rio de Janeiro, Brasil\n4 - S�o Paulo, Brasil\n5 - Lima, Peru\n", 4},
 {"Qual � o maior rio do mundo em volume de �gua?", "1 - Rio Nilo\n2 - Rio Yangtz�\n3 - Rio Mississippi\n4 - Rio Ganges\n5 - Rio Amazonas\n", 5},
 {"Qual � a moeda oficial do Jap�o?", "1 - Yuan\n2 - D�lar\n3 - Euro\n4 - Iene\n5 - Libra\n", 4},
 {"Qual � a cidade mais populosa do mundo?", "1 - T�quio, Jap�o\n2 - Xangai, China\n3 - Mumbai, �ndia\n4 - S�o Paulo, Brasil\n5 - Cidade do M�xico, M�xico\n", 1},
 {"Qual � o maior estado brasileiro em �rea territorial?", "1 - Minas Gerais\n2 - Bahia\n3 - Amazonas\n4 - Mato Grosso\n5 - S�o Paulo\n", 3}
 } };
