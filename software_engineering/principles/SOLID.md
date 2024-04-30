<h2 align="center" style="margin-bottom:100px" width=100% >Olá, bem vindo!</h2><br>
<picture>
  <source media="(max-width: 500px)" srcset="https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcTJp6Rewfiehv7QO0cbKqf1HLKWkHNAfud2yzjDcFdYgw&s" width="130" alt="Computador">
  <img media="(min-width: 501px)" src="https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcTJp6Rewfiehv7QO0cbKqf1HLKWkHNAfud2yzjDcFdYgw&s" align="right" width="250px" alt="Computador">
</picture>
<p>O código Java dessa pasta, remete a uma absrtação de uma aula. Com classes para aula, disciplina, área de conhecimento de disciplina, professor, formação de professor, cargo, estudante, curso do estudante e a classe principal.</p>
<p>O intuito é poder criar instâncias das classes citadas e formar uma aula.</p>

### Princípios Usados
### - Single Responsiblity Principle (Princípio da responsabilidade única)
<div>
<a href="https://github.com/taisbarbosa/bsc3period/blob/main/software_engineering/principles/assets/mister/formation.java" target="_blank">Classe formation:</a> <p> Exemplo de responsabilidade única, a classe trata apenas de um objeto, ou seja, as variáveis e função tratam apenas da formação proficional.<br>As variáveis de nome, instituição, etc., são todas referentes e importantes para saber sobre formação, a função type_formation por exemplo, também.</p>
</div>

### - Prefira Composição a Herança

Nessa abstração foi utilizada a composição. Por exemplo em <a href="https://github.com/taisbarbosa/bsc3period/blob/main/software_engineering/principles/assets/mister/formation.java" target="_blank">subject</a>, onde a classe é composta pelo objeto student e pelo objeto area.
