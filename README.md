# Firefighting Simulator

This project simulates a basic firefighting system using an Arduino, an ultrasonic sensor, an LED, and a servo motor. The system detects obstacles (simulating a fire) and activates a simulated water spray mechanism.

## Components

- Arduino board (e.g., Arduino Uno)
- Ultrasonic sensor (HC-SR04)
- LED
- Servo motor
- Breadboard
- Jumper wires
- Resistor (220 ohm for the LED)

## Circuit Diagram

### Connections:

- **Ultrasonic Sensor (HC-SR04)**
  - VCC to 5V
  - GND to GND
  - Trig to pin 7
  - Echo to pin 8

- **LED**
  - Anode (long leg) to pin 9 (through a 220 ohm resistor)
  - Cathode (short leg) to GND

- **Servo Motor**
  - Signal to pin 10
  - VCC to 5V
  - GND to GND

## How It Works

1. **Ultrasonic Sensor**: Measures the distance to an obstacle.
2. **LED**: Lights up when an obstacle (fire) is detected within 30 cm.
3. **Servo Motor**: Rotates to 90 degrees to simulate spraying water when a fire is detected. Resets to 0 degrees when no fire is detected.

## Usage

1. **Connect the Components**: Follow the circuit diagram and connect all the components correctly.
2. **Upload the Code**: Use the Arduino IDE to upload the provided code to your Arduino board.
3. **Power the Arduino**: Connect your Arduino to a power source.
4. **Observe**: The LED will light up and the servo motor will rotate when an obstacle is detected within 30 cm, simulating a firefighting action.

## Future Enhancements

- Add temperature or flame sensors for more accurate fire detection.
- Implement a more complex water spray mechanism with multiple servo motors.
- Integrate a buzzer for audio alerts.
- Create a web interface to monitor and control the system remotely.


## Acknowledgments

- Inspired by basic Arduino projects and tutorials available in the Arduino community.

Feel free to contribute to this project by submitting issues or pull requests.
