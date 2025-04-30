Existem duas maneiras de se arquitetar um sistema, por *composição*, onde começamos do zero, com um ideia e uma objetivo final, e por *decomposição*, onde fazermos uma engenharia reversa, passamos de um produto existente para uma arquitetura, pegando o que outra pessoa montou para entender o funcionamento externo.
## Diagramas de sistema
Esses diagramas mostram a relação entre diversas partes do software, dando uma visão de todo o sistema, ajudando a identificar dependências e danado insights sobre o projeto de novos recursos. 
A autora recomenda quatro tipos de diagramas:
### Diagrama de contexto
É uma visão geral de como o sistema se encaixa no mundo. O objetivo é um contexto de alto nível, representando como o sistema será usado pelo cliente, o diagrama deve focar nas relações entre o dispositivo, usuários, servidores, outros dispositivos e outras entidades.

> Concentre-se nos casos de uso e nas interações globais.

Idealmente, ajuda a definir os requisitos do sistema e prever mudanças prováveis. É uma boa maneira de lembrar os objetivos do dispositivo conforme se aprofunda no desenvolvimento do software.
### Diagrama de blocos
O projeto pode ser simples no início, já que podemos representar todos seus componentes físicos de modo orientado a objeto, onde cada chip conectado ao processador é um objeto, e podemos considerar os fios que os ligam, os métodos de comunicação, como um conjunto de objetos.
O diagrama de blocos de hardware, idealmente é entregue por um engenheiro elétrico com os esquemas para fornecer uma visão simplificada do hardware. Caso contrario, se faz necessário esboçar um diagrama de blocos de software. 
Neste diagrama, todo componente de hardware é representado por um bloco, que se conecta a um bloco central que representa por sua vez o processador. E os componentes de software são representados por blocos dentro do bloco do processador, os componentes de hardware devem se conectar a blocos de software que representam o código de conexão entre este e o processador.
### Organogramas
Este representa o fluxo do sistema, permite visualizar qual componente de software deve chamar qual componente, ambos com uma comunicação, que deve ser, bidirecional, o componente chamado deve dar algum retorno a quem o chamou.
Útil para se identificar onde podemos ter conflito de acesso, onde 2 ou mais componentes de software querem chamar o mesmo componente. Assim permitindo a elaboração de estrategias para estes casos.
Sempre que algo novo é elaborado, deve se colocar no organograma e identificar assim o impacto do mesmo.
### Diagramas de camadas
Neste diagrama, representamos os componentes em camadas, começando por baixo, primeiro desenhamos blocos para as coisas que saem do processador, se achamos que vão ser complicadas de se elaborar, damos mais largura a essas.
Na próxima camada, representamos os componentes que usam diretamente os componentes da cama a baixo, visto que, esses devem se tocar, se o componente da camada anterior precisar tocar mais de um elemento e sua largura não permitir, a mesma deve ser aumentada, visto que isto ira aumentar sua complexidade.
Assim que representamos todos os componentes, o diagrama, pode nos mostrar componentes que podem ser agrupados, tanto verticalmente, componentes de duas camadas adjacentes que só tocam entre si, e horizontalmente, componentes da mesma camada que compartilhando tanto os elementos da camada superior quanto inferior. Esses agrupamentos podem ser vantajosos.
Também podemos fazer desagrupamentos, se um modulo inferior tentar tocar vários módulos superiores, pode ser vantajoso separa-lo em mais de um modulo. Inclusive se um dos processo só precisa ocorrer uma vez, assim dando controle total do equipamento ao modulo que o usará por mais tempo.
