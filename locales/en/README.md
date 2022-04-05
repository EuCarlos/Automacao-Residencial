# Home automation
Projeto de Automação Residencial com Node-RED, JavaScript, Arduíno e Raspberry Pi 2a
Home Automation Project with Node-RED, JavaScript, Arduino and Raspberry Pi 2a
<p><b>ALERT:</b> This is an academic project that may contain several errors, and is being corrected and frequently updated.</p>
<p><em><b>TECHNOLOGIES USED IN THE PROJECT</b></em></p>

ChatBot Telegram | NodeRED | IBM Watson | Arduino
:---:|:---:|:---:|:---:
<img src="https://logodownload.org/wp-content/uploads/2017/11/telegram-logo.png" alt="" width="150" height="150" />| <img src="https://ww1.prweb.com/prfiles/2017/08/07/14579081/node-red.png" alt="" width="150" height="150" /> | <img src="https://miro.medium.com/max/300/1*aoImpBpbh98TafNt3iT91w.png" alt="" width="150" height="150" /> | <img src="https://cdn.freebiesupply.com/logos/thumbs/2x/arduino-logo.png" alt="" width="199" height="150" />

<p><b> PROJECT DESCRIPTION: </b> </p>
<p> The Project's objective is to be able to activate the relays on a breadboard from commands made in the Chatbot created in Telegram, for which the Arduino, IBM Watson and ChatBot nodes are created from NodeRED.</p>
<h2>THE PROJECT:</h2>

* The first step was to have created a ChatBot in telegram, using `@BotFather`, it is necessary to save the informed token to access the HTTP API.
* Now we have to install two nodes on the machine from the command prompt:
`node-red-contrib-chatbot`
`node-red-node-arduino`
* The nodes were assembled as shown in the image below:

<img src="https://raw.githubusercontent.com/EuCarlos/Automacao-Residencial/master/Imagens/nodered-imagem-projeto.png" />

* The project is storing in `flows(1).json` here in this repository. If you want to test it, just import it in your NodeRED project.
* The Demo of how the ChatBot turned out is in `Demonstration-ChatBot.mp4` in the images or in this youtube [link](https://youtu.be/l7tdQdVSZfQ).

## IBM Cloud
![IBM Cloud](https://miro.medium.com/fit/c/1838/551/1*g4OPeVwVbt0HTQo2dkV4ew.png)
All project data is stored in IBM Bluemix/IBM Cloud. A `Node-RED Starter` Application has been created. After creating the application, just implement or create the project directly in bluemix.

#### Benefits of building an application on the IBM Cloud
* More Flexible;
* Control Options;
* Tool Savings;
* Optimized work;
* Data Security;
* Speeds and Productivity.

## ARDUINO
<p align="center">
  <img width="150" src="https://eaceto.dev/wp-content/uploads/2020/03/1484328266stickers_logo_text.png">
</p>

Firmata firmware must be loaded on Arduino. See the [main documentation](https://nodered.org/docs/faq/interacting-with-arduino) for details and examples of how to use this node.
* With the IDE open, follow the path: `Files > Examples > Firmata > StandardFirmata`
* Make sure that the board and port are correctly selected, click on: `Tools > Board` and then `Tools > Port.`
* The Circuit Assembly is like this:

<p align="center">
  <img width="700" src="https://github.com/EuCarlos/Automacao-Residencial/blob/master/Imagens/Circuito.png?raw=true">
</p>

## ALTERNATIVE WITH DASHBOARD
It is a simpler and faster way of the project, for this alternative we install the `node-red-dashboard` node. With this node we can create an interface, this cancels Telegram's ChatBot as it becomes unnecessary. 
* After the node is already installed and configured, just access `http://localhost:1880/ui/` or `http://<YourApplicationName>.mybluemix.net/ui/` (if your application is on Bluemix from IBM)
* Then just connect the dashboard nodes to the Arduino nodes. The configuration for the Arduino nodes is the same as for the original project.
* Once everything is ready your interface might look like this:

<p align="center">
  <img width="700" src="https://github.com/EuCarlos/Automacao-Residencial/blob/master/Imagens/TelaUIDashboard.PNG?raw=true">
</p>
