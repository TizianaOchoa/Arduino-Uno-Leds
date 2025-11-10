# 🔆 Proyecto: Encendido y Apagado de 2 LEDs con Arduino Uno

### Materia: **Arquitectura de Computadoras**  
**Profesor:** Narciso Pérez  
**Estudiantes: Moyano Sosa Benjamin, Ochoa Tiziana**  

---

## 🧠 Descripción del proyecto

Este proyecto forma parte de la materia **Arquitectura de Computadoras** y consiste en el desarrollo de una **aplicación en Arduino Uno** que permite **encender y apagar dos LEDs de forma alternada**.  

En una segunda etapa, se realiza una **modificación del programa agregando un pulsador**, el cual, al ser presionado, cambia el tiempo de retardo (`delay`) de **1000 ms a 2000 ms**, alterando la velocidad del parpadeo de los LEDs.

---

## ⚙️ Objetivos de aprendizaje

- Comprender el funcionamiento de **entradas y salidas digitales** en Arduino.  
- Aplicar principios básicos de **arquitectura de hardware** y control secuencial.  
- Implementar un **sistema simple de control de temporización** con microcontroladores.  
- Integrar un **dispositivo de entrada (pulsador)** para modificar el comportamiento del programa.

---

## 🔩 Componentes utilizados

| Componente | Cantidad | Descripción |
|-------------|-----------|-------------|
| Arduino Uno | 1 | Placa microcontroladora principal |
| LED rojo | 1 | Indicador luminoso |
| LED verde | 1 | Indicador luminoso |
| Resistencia 220Ω | 2 | Protección para los LEDs |
| Pulsador (Push Button) | 1 | Permite modificar el retardo de parpadeo |
| Protoboard | 1 | Base de conexiones |
| Cables Dupont | Varios | Conexiones entre componentes |

---

## ⚡ Conexiones del circuito

- **LED 1 (rojo):** Pin digital 8 → Resistencia 220Ω → LED → GND  
- **LED 2 (verde):** Pin digital 9 → Resistencia 220Ω → LED → GND  
- **Pulsador:** Pin digital 7 → Pulsador → GND (utilizando resistencia interna pull-up del Arduino)

---

## 🧩 Funcionamiento del sistema

1. Los LEDs se **encienden y apagan alternadamente** con un retardo de 1 segundo.  
2. Al **presionar el pulsador**, el tiempo de retardo aumenta a 2 segundos, haciendo el parpadeo más lento.  
3. Al **soltar el pulsador**, el retardo vuelve a 1 segundo, restableciendo la velocidad inicial.

---

## 🧠 Conclusión

Este proyecto permitió comprender la **interacción entre hardware y software** mediante la programación del Arduino Uno.  
Se logró controlar **salidas digitales (LEDs)** y modificar su comportamiento a través de una **entrada digital (pulsador)**, reforzando los fundamentos de la **arquitectura de microcontroladores** y el manejo del **tiempo en sistemas embebidos**.

---

## 📂 Estructura del proyecto
```
📁 Arduino-Uno-Leds
│
├── 📂 leds sin pulsador
│ ├── leds_sin_pulsador.ino # Código para encendido y apagado alternado de LEDs
│ └── diagram.json # Diagrama de conexión (sin pulsador)
│
└── 📂 leds con pulsador
├── leds_con_pulsador.ino # Código modificado que incluye pulsador
└── diagram.json # Diagrama de conexión (con pulsador)
│
└── README.md
```
## 📂 Wokwi


**Led sin pulsador:** https://wokwi.com/projects/446073684209624065

**Led con pulsador:** https://wokwi.com/projects/446354045281817601

---
