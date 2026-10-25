# Projeto-02---Detector-de-Passagem-com-Laser-e-LDR
Este projeto implementa um detector de passagem utilizando um laser, um sensor LDR e um buzzer. Quando um objeto interrompe o feixe de luz emitido pelo laser, a variação de luminosidade é identificada pelo Arduino, que aciona o buzzer para emitir um alerta sonoro. O sistema pode ser aplicado em alarmes e controle de acesso.

## Curso
Análise e Desenvolvimento de Sistemas

## Unidade Curricular
Sistema Embarcados

## Aluno(s)
- Nickolas Lamin

## Descrição do Projeto

Este projeto implementa um detector de passagem utilizando um sensor LDR e um módulo laser.

Quando o feixe laser é interrompido pela passagem de um objeto, a luminosidade recebida pelo LDR diminui. O Arduino identifica essa alteração e aciona um buzzer piezoelétrico, emitindo um sinal sonoro de alerta.

## Componentes Utilizados

- Arduino Uno
- LDR (Sensor de Luminosidade)
- Resistor 10kΩ
- Módulo Laser
- Buzzer Piezoelétrico
- Protoboard
- Jumpers

## Funcionamento

1. O laser permanece apontado para o LDR.
2. O LDR detecta continuamente a intensidade luminosa.
3. Quando um objeto interrompe o feixe laser:
   - O valor lido pelo LDR sofre alteração.
   - O Arduino identifica a queda de luminosidade.
   - O buzzer é acionado.
4. O buzzer permanece ativo enquanto a interrupção é detectada.

## Aplicações

- Sistemas de segurança
- Alarmes residenciais
- Controle de acesso
- Contagem de objetos

## Diagrama do Projeto

![Diagrama](imagens/diagrama-projeto2.png)

## Projeto em Funcionamento

![Funcionamento](imagens/projeto2.gif)
