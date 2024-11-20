# Arduino_LED_Traffic_Light_Simulation
This project demonstrates a basic traffic light simulation using an Arduino Uno and three LEDs (red, yellow, and green). The LEDs are connected to digital pins, and the code sequentially lights them up to mimic the behavior of a traffic light. Additionally, the status of the LEDs is displayed on the serial monitor for debugging and visualization.

## 📋 Project Description
### 📌 Objective
The goal is to control three LEDs connected to the Arduino Uno, simulating the operation of a traffic light by turning the LEDs on and off in a specific sequence.

### 📌 How It Works
Setup Phase:

The LEDs are connected to digital pins 2, 3, and 4 of the Arduino Uno.
These pins are initialized as OUTPUT in the setup() function.
Execution Loop:

The green LED turns on while the others remain off for 200 milliseconds.
The yellow LED turns on next, while the others turn off for 200 milliseconds.
Finally, the red LED turns on, turning off the others for another 200 milliseconds.
This sequence continuously loops.
Serial Monitor:

A message is printed to the serial monitor each time an LED is turned on, providing real-time feedback.
## 🧰 Components Used
1 Arduino Uno
1 Green LED
1 Yellow LED
1 Red LED
3 Resistors (220Ω recommended for each LED)
Jumper wires
Breadboard
## ⚡ Pin Connections
Red LED: Connect to digital pin 4 through a resistor.
Yellow LED: Connect to digital pin 2 through a resistor.
Green LED: Connect to digital pin 3 through a resistor.
Ensure the cathodes (short legs) of the LEDs are connected to GND.

## 💻 How to Use
Connect the components to the Arduino Uno as described in the Pin Connections section.
Upload the code to the Arduino using the Arduino IDE.
Open the Serial Monitor at a baud rate of 9600 to observe status messages.
Watch the LEDs light up in the sequence: green → yellow → red.
## 🚀 Possible Extensions
Adjustable Timing: Add potentiometers or buttons to change the duration of each light.
Pedestrian Crossing: Add a button and another LED to simulate pedestrian crossing functionality.
Buzzer: Include a buzzer to simulate traffic light sound signals.
## 📜 License
This project is open-source and was created as an educational example to simulate traffic light behavior using Arduino. Feel free to modify and use it as needed. 😊
