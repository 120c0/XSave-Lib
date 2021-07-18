<h1 align="center">XSave-Lib 1.2.0 - Coding</h1>
<hr>

## XSave<<std::uint32_t>>
  <p>
    O máximo de caracteres do buffer
  <p>

## addData(const string, const string)
  <p>
    O primeiro parâmetro, é o endereço e o segundo o valor. </br>
    Essa função salva dados no arquivo do <strong>banco de dados (file.dl)</strong>.
  <p>
  
## getData(const string)
  <p>
    O parâmetro recebe o endereço. </br>
    Pega o valor de um endereço de um elemento, no banco de dados.
  <p>
  
## loadFile(const string)
  <p>
    Carrega o buffer do banco de dados, de um arquivo <strong>*.dl</strong>
  </p>
  
## getLines()
  <p>
    Retorna um vetor com as linhas do banco de dados.</br>
    Parte para manipulação externa.
  </p>

# Progresso
- [ ] Criptografia para "dificultar" acesso direto ao arquivo.
- [ ] Salvar uma array de valores em um endereço.
