## DESIGN PATTERNS

### 1. Creational - Singleton:

### Para que serve?

<p>O padrão Singleton serve para modelar recursos que, conceitualmente, devem possuir no máximo uma instância de uma classe durante a execução de um programa</p>

### Problema?

<p>void f() {
  Logger log = new Logger();
  log.println("Executando f");
  ...
}<br>
void g() {
  Logger log = new Logger();
  log.println("Executando g");
  ...
}<br>
void h() {
  Logger log = new Logger();
  log.println("Executando h");
  ...
}

<br><br>
Neste exemplo, não é adequado a proliferação de objetos Logger. Em vez disso, gostaríamos que existisse, no máximo, uma única instância dessa classe e que ela fosse usada em todas as partes do sistema que precisam registrar algum evento.
</p>

### Solução?

<p>A solução do problema anterior consiste em transformar a classe Logger em uma cflasse com no máximo uma instância.</p>
<img width="500px" src="https://github.com/taisbarbosa/bsc3period/blob/main/software_engineering/design_patterns/uml_singleton.png">
<p>O código exemplo em Java pode ser acessado <a href="https://github.com/taisbarbosa/bsc3period/blob/main/software_engineering/design_patterns/singleton_java/Main.java">aqui</a>.</p>
<p>Explicação:<br>A classe Logger possui um construtor padrão privado, que não permite que qualquer código fora dessa classe tente chamar new Logger().<br>Quando os métodos segunites precisam dessa instância, é chamado o método público e estático getInstance(), assim as três chamadas retornam a mesma instância de Logger.</p>

### 2. Structural - Bridge:

### Para que serve?

<p>O padrão Bridge serve para dividir uma classe grande ou um conjunto de classes intimamente ligadas em hierarquias que podem ser desenvolvidas independentemente.</p>

### Problema?

<p>Suponhamos uma classe Forma geométrica com um par de subclasses. Queremos estender essa hierarquia de classe para incorporar novas características, tal como cor Azul e Vermelha. Contudo, já que nós já temos duas subclasses, é preciso criar quatro combinações de classe, como CírculoAzul, CirculoVermelho, QuadradoAzul e QuadradoVermelho. Adicionar mais formas ou mais características, faria a hierarquia crescer exponêncialmente. Um problema comum da herança de classe.</p>

### Solução?

<p>Preferir composição ao invés de herança é uma boa alternativa para solucionar esse problema. Isso significa que vamos extrair uma das dimenções que estamos tentando estender a classe em uma hierarquia de classe separada, para que as classes originais referenciem um objeto da nova hierarquia.<br>
Este exemplo ilustra como o padrão Bridge pode ajudar a dividir o código monolítico de uma aplicação que gerencia dispositivos e seus controles remotos:
<img src="https://refactoring.guru/images/patterns/diagrams/bridge/example-en.png"><br>
<a href="https://github.com/taisbarbosa/bsc3period/blob/main/software_engineering/design_patterns/bridge_java/Demo.java">Código exemplo em Java</a><br>
Explicação:<br>Este exemplo segue o diagrama anterior, mostra a separação entre as classes de controles remotos e dispositivos que eles controlam.<br>Device é uma classe com os atributos e métodos para todos dispositivos que herdam dela, como Radio e TV que estão implementados no exemplo, ou seja, Radio e TV são Device.<br> No entanto <a href="https://github.com/taisbarbosa/bsc3period/tree/main/software_engineering/design_patterns/bridge_java/remotes">as classes referentes aos controles</a> são compostas por Device.
</p>

### 3. Behavioral - State:

### Para que serve?

<p>O padrão State serve para alterar o comportamento de um objeto, dado que seu estado interior mudou.</p>

### Problema?

<p>Máquina de Estado Finito: em qualquer dado momento, há um número finito de estados que um programa possa estar.<br>Máquinas de estado são geralmente implementadas com muitos operadores de condicionais (if ou switch) que selecionam o comportamento apropriado dependendo do estado atual do objeto. Suponhamos por exemplo, uma classe Documento, documento pode estar em três estados: Rascunho, Moderação e Publicado. A função publicar nesse caso teria um comportamento diferente em cada estado.</p>
<p>A maioria dos métodos em um programa como esse, iria conter condicionais que selecionam o comportamento apropriado de um método de acordo com o estado. A desvantagem é a complexidade na hora da manutenção, qualquer mudança na lógica de transição pode necessitar de mudanças de condicionais de estado em todos os métodos.</p>

### Solução?

<p>O padrão sugere a criação de novas classes para todos os estados possíveis, e os comportamentos específicos dos estados estarão dentro dessas classes.</p>
<p>O objeto original referencia um dos objetos de estado que representa o estado atual, e toda a responsabilidade relacionada aos estados cabe ao objeto estado. Segue UML representativa desse conceito:</p>
<img src="https://upload.wikimedia.org/wikipedia/commons/thumb/e/e8/State_Design_Pattern_UML_Class_Diagram.svg/400px-State_Design_Pattern_UML_Class_Diagram.svg.png">
