<h1 align="center">XSave-Lib 1.1.1 - Remake</h1>
<hr>
## Correções
  <p>
     1 - Correção para quem tem perfeccionismo.
  </p>

## addDataInfo(const string&, const string &)
  <p>
    O primeiro parâmetro, é o endereço e o segundo o valor. </br>
    Essa função salva dados no arquivo do <strong>banco de dados</strong>.
  <p>
  
## getDataInfo(const string)
  <p>
    O parâmetro recebe o nome do endereço. </br>
    Pega o valor de um endereço do banco de dados.
  <p>
  
## loadFile(const string)
  <p>
    Carrega o buffer do banco de dados, por um arquivo <strong>*.dl</strong>
  </p>
  
## getLines()
  <p>
    Retorna um vetor com as linhas do banco de dados.
  </p>


# Progresso
- [X] Refatoraçao na classe XSave (1.0.0).
- [ ] Criptografia para dificultar acesso direto ao arquivo.
<<<<<<< HEAD
- [ ] Salvar uma lista de valores em um endereço.
=======
- [ ] Salvar uma lista de valores em um endereço.
>>>>>>> ecd7a1bbacffedbfffcba4e44c9eb29280cc094a
