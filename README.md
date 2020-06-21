# Automação Residencial
Projeto de Automação Residencial com Node-RED, JavaScript, Arduíno e Raspberry Pi 2a
<p><b>Atenção:</b> Isso é um projeto academico que pode contém varios erros, e está sendo corrigido e atualizado aos poucos.</p>
<p><em><b>TECNOLOGICAS UTILIZADAS NO PROJETO</b></em></p>

ChatBot Telegram | NodeRED | IBM Watson | Arduino
:---:|:---:|:---:|:---:
<img src="https://logodownload.org/wp-content/uploads/2017/11/telegram-logo.png" alt="" width="150" height="150" />| <img src="https://ww1.prweb.com/prfiles/2017/08/07/14579081/node-red.png" alt="" width="150" height="150" /> | <img src="https://miro.medium.com/max/300/1*aoImpBpbh98TafNt3iT91w.png" alt="" width="150" height="150" /> | <img src="https://cdn.freebiesupply.com/logos/thumbs/2x/arduino-logo.png" alt="" width="199" height="150" />

<p><b> DESCRIÇÃO DO PROJETO: </b> </p>
<p> O Objetivo do Projeto é conseguir acionar os relés em uma protoboard apartir de comandos feitos no Chatbot criado no Telegram, para isso é criado os nós do Arduino, IBM Watson e ChatBot apartir do NodeRED.</p>
<h2> O PROJETO:</h2>

* Primeiro passo que foi feito é ter criado um ChatBot no telegram, apartir do `@BotFather`, é preciso guardar o token informado para acessar o HTTP API.
* Agora temos que instalar dois nós a maquina pelo prompt de comando:
`node-red-contrib-chatbot`
`node-red-node-arduino`
* Os nós foram montados conforme mostra a imagem abaixo:

<img src="https://raw.githubusercontent.com/EuCarlos/Automacao-Residencial/master/Imagens/nodered-imagem-projeto.png" />

* O projeto está armazendo em `flows (1).json` aqui neste repositorio. Caso queira testar é só importa no seu projeto no NodeRED.
* A Desmotração de como ficou o ChatBot está em `Demostracao-ChatBot.mp4` nas imagens ou neste [link](https://youtu.be/l7tdQdVSZfQ) do youtube.
* O firmware Firmata deve ser carregado no Arduino. Consulte a [documentação principal](https://nodered.org/docs/faq/interacting-with-arduino) para obter detalhes e exemplos de como usar este nó.

## IBM Cloud
<img src="https://miro.medium.com/fit/c/1838/551/1*g4OPeVwVbt0HTQo2dkV4ew.png" />
Todos os dados do projeto estão armazendos no IBM Bluemix/IBM Cloud. Foi criado uma Aplicação `Node-RED Starter`. Depois de criado a aplicação é só implementar ou criar o projeto diretamente no bluemix.
## Vantagens
* Mais Flexivel;
* Opções de Controle;
* Economia de Ferramentas;
* Trabalho Otimizado;
* Segurança de Dados;


## LICENÇA

MIT License

Copyright (c) 2020 Carlos Alves

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
