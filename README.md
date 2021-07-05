<h1 align="center">XSave-Lib 1.1.0 - Remake</h1>
<hr>

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
- [ ] Salvar uma lista de valores em um endereço.
