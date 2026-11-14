# Real-Time Sensor Monitoring Station using LPC2129 (ARM7)

## 📌 Project Overview

The **Real-Time Sensor Monitoring Station** is an embedded systems project developed using the LPC2129 ARM7 microcontroller. It monitors multiple environmental parameters using different sensors and displays the sensor readings on a computer's serial terminal through UART communication.

The system uses Timer0 interrupts for multi-rate sensor scheduling, ADC for analog sensor data acquisition, and GPIO for digital sensor interfacing.

## 🎯 Objectives

- Monitor temperature, light intensity, and potentiometer voltage.
- Detect vibration and flame conditions.
- Implement Timer0 interrupt-based periodic scheduling.
- Display real-time sensor values through UART0 serial communication.
- Generate alerts using LED and buzzer outputs.

## 🛠️ Hardware Components

- LPC2129 ARM7 Microcontroller
- LM35 Temperature Sensor
- LDR (Light Dependent Resistor)
- Potentiometer
- Vibration Sensor
- Flame Sensor
- LED
- Buzzer
- Vector Trainer / Development Board
- USB-to-TTL Serial Adapter
- Connecting Wires

## 💻 Software and Tools

- Keil µVision 5
- Embedded C
- UART Serial Terminal
- LPC2129 Microcontroller

## ⚙️ Working Principle

The system uses Timer0 to generate periodic interrupts at 100 ms intervals. The interrupt acts as a time base for scheduling sensor readings.

| Sensor | Reading Interval |
|---|---|
| Temperature (LM35) | 100 ms |
| LDR | 200 ms |
| Potentiometer | 300 ms |
| Vibration Sensor | Periodic digital monitoring |
| Flame Sensor | Periodic digital monitoring |

Analog sensor values are acquired using the ADC, while vibration and flame sensors are read through GPIO digital inputs. The processed sensor data is transmitted to the computer through UART0.

## 🔄 System Architecture

1. Timer0 generates periodic interrupts.
2. The main loop checks the timer flags.
3. Analog sensors are read using ADC.
4. Digital sensors are monitored using GPIO.
5. Sensor values are processed.
6. UART0 transmits the readings to the serial terminal.
7. LED and buzzer outputs provide alerts when required.

## 📟 Expected Serial Terminal Output

```text
TEMP: 28 C
LIGHT: 50 %
POT: 3.3 %
VIBRATIONS: NO
FLAME: NO
```

*The displayed values are illustrative and depend on actual sensor readings.*

## 📚 Concepts Implemented

- ARM7 Microcontroller Programming
- Embedded C Programming
- Timer0 Configuration
- Interrupt Service Routine (ISR)
- ADC Interfacing
- GPIO Programming
- UART Serial Communication
- Multi-rate Sensor Scheduling
- Real-Time Embedded System Design

## 🚀 Future Enhancements

- Add external interrupts for faster vibration and flame detection.
- Integrate an LCD or OLED display.
- Implement data logging.
- Add wireless monitoring capabilities.
- Improve alert handling and sensor response time.

## 👨‍💻 Project Type

Embedded Systems | ARM7 | LPC2129 | Real-Time Sensor Monitoring
