## Creational - Singleton:

### Para que serve?

<p>O padrão Singleton serve para modelar recursos que, conceitualmente, devem possuir no máximo uma instância de uma classe durante a execução de um programa</p>

### Problema?

<p>void f() {<br>
__Logger log = new Logger();<br>
__log.println("Executando f");<br>
__...<br>
}<br>
void g() {<br>
__Logger log = new Logger();<br>
__log.println("Executando g");<br>
__...<br>
}<br>
void h() {<br>
__Logger log = new Logger();<br>
__log.println("Executando h");<br>
__...<br>
}<br><br>
Neste exemplo, não é adequado a proliferação de objetos Logger. Em vez disso, gostaríamos que existisse, no máximo, uma única instância dessa classe e que ela fosse usada em todas as partes do sistema que precisam registrar algum evento.
</p>

### Solução?

<p>A solução do problema anterior consiste em transformar a classe Logger em uma cflasse com no máximo uma instância.</p>
<img width="500px" src="https://github.com/taisbarbosa/bsc3period/blob/main/software_engineering/design_patterns/uml_singleton.png">
<p>O código exemplo em Java pode ser acessado <a href="https://github.com/taisbarbosa/bsc3period/blob/main/software_engineering/design_patterns/singleton_java/Main.java">aqui</a>.</p>
<p>Explicação:<br>A classe Logger possui um construtor padrão privado, que não permite que qualquer código fora dessa classe tente chamar new Logger().<br>Quando os métodos segunites precisam dessa instância, é chamado o método público e estático getInstance(), assim as três chamadas retornam a mesma instância de Logger.</p>
