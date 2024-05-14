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
