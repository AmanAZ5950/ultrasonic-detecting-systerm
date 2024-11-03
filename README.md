![image](https://github.com/user-attachments/assets/c808da10-ff04-4921-9ffe-39377e1da195)<img width="1280" alt="readme-banner" src="https://github.com/user-attachments/assets/35332e92-44cb-425b-9dff-27bcf1023c6c">

# [PROXIMITY DETECTOR USING ULTRASONIC SENSOR] 🎯


## Basic Details
### Team Name: [ROBOTICS]


### Team Members
- Team Lead: [Aman abdulla] - [saintgits college of engineering]
- Member 2: [Allen thomas alex] - [saintgits college of engineering]
- Member 3: [Name] - [College]

### Project Description
[-We can use it to trigger alarm when the object comes or sees in a certain distance
-without a certain trigger distance we can use it to measure certain distances]

### The Problem (that doesn't exist)
[imagine we are turning on the water tank pump and forgets to turn it off and the wayer overflows and our mother scolds us  ]

### The Solution (that nobody asked for)
[thats where our projects comes we can detect the surface distance and use a sound alarm to remind us]

## Technical Details
### Technologies/Components Used
For Software:
- [Languages used]
- [Frameworks used]
- [Libraries used]
- [Tools used]

For Hardware:
- [Arduino UNO,ultrasonic sensor,active buzzer, switch,LED light,9v battery as power source]
- []
- [jumpper wires (M-M/M-F),soldering kit , insulation tape]

### Implementation
For Software:
# Installation
[commands]

# Run
[commands]

### Project Documentation
For Software:

# Screenshots (Add at least 3)
![Screenshot1](Add screenshot 1 ![the initial buzzer code](https://github.com/user-attachments/assets/aefce516-6c11-4430-98ba-df7ae057760b)
(it shows the initial code of the buzzer used in the board)
)
**
![Screenshot2](part-1)![image](https://github.com/user-attachments/assets/124099ef-817d-4891-b588-bd0f411760f7)
              (part-2)![image](https://github.com/user-attachments/assets/c1834561-3d53-4293-a709-686978ff1dfb)
  the screenshot shows the code of the sensor,LED light and buzzer
*Add caption explaining what this shows*

![Screenshot3](part-1)![image](https://github.com/user-attachments/assets/360b875a-58e0-417c-968e-bab1681ddb46)
               (part-2)![image](https://github.com/user-attachments/assets/1b4c2492-bd14-4b90-995a-7bc9ccf048e9)
the screnshot shows the code of the both ultrasonic sensor with trigger distance and the buzzer
*Add caption explaining what this shows*

# Diagrams
![Workflow](Add your workflow/architecture diagram here)![image]
*Add caption explaining your workflow*

For Hardware:

# Schematic & Circuit
![Circuit](Add your circuit diagram here)        +---------------------+
       |     Arduino Uno     |
       |                     |
       |         +-------+   |
       |         |       |   |
       |         |       |   |
       |      +--+       |   |
       |      |          |   |
       |   +--+--+       |   |
       |   | HC-SR04     |   |
       |   +--+--+       |   |
       |      |          |   |
       |      |          |   |
       |   Trig      Echo|   |
       |   Pin 9      Pin 10 |
       |      |          |   |
       |      |          |   |
       |      |          |   |
       |     VCC        GND  |
       |      |          |   |
       |      |          |   |
       |      +----------+   |
       |                     |
       |    +----------+     |
       |    |          |     |
       |    |   LED    |     |
       |    +-----+----+     |
       |          |          |
       |      +---+---+      |
       |      |       |      |
       |      | Buzzer |     |
       |      +-------+      |
       |          |          |
       |          |          |
       |         GND        GND
       |          |          |
       |    +----------+     |
       |    |  Switch  |     |
       |    +-----+----+     |
       |          |          |
       |          |          |
       |         GND        GND
       |                     |
       +---------------------+

the trigger pin 9
     echo pin 10
     buzzer pin 8
     led pin 7
*Add caption explaining connections*

![Schematic](Add your schematic diagram here)
                +---------------------+
                |     Arduino Uno     |
                |                     |
                |       5V   ------+ |  
                |            |       | |
                |            |       | |
                |            |       | |
                |            |       | |
                |          +-+-+     | |
                |          |   |     | |
                |          |   |     | |
                |          |   |     | |
                |          +-+-+     | |
                |         | HC-SR04  | |
                |          +---------+ |
                |         Trig   Echo  |
                |          |        |  |
                |          |        |  |
                |          |        |  |
                |          |        |  |
                |          |        |  |
                |         +-+       |  |
                |         |         |  |
                |         |         |  |
                |         |         |  |
                |         |         |  |
                |         |         |  |
                |         |         |  |
                |         |         |  |
                |         |         |  |
                |        GND------- GND|
                |                     | |
                |                     | |
                |      +---+         | |
                |      |   |         | |
                |      | B |         | |
                |      | u |         | |
                |      | z |         | |
                |      | z |         | |
                |      | e |         | |
                |      | r |         | |
                |      +---+         | |
                |       |            | |
                |       |            | |
                |       |            | |
                |       |            | |
                |       |            | |
                |       |            | |
                |       |            | |
                |       +            | |
                |       |            | |
                |      +-+           | |
                |      | |           | |
                |      | |           | |
                |      | |           | |
                |      | |           | |
                |      | |           | |
                |      +-+           | |
                |       |            | |
                |       |            | |
                |      GND---------- GND
                |                     | |
                |                     | |

                |                     | |
                +---------------------+

*Add caption explaining the schematic*

# Build Photos
![Components](Add photo of your components here)
![image](https://github.com/user-attachments/assets/226e1dd1-e5dc-43e6-b659-1b38c785577a) - the arduino uno
![image](https://github.com/user-attachments/assets/2535e351-fe41-4c7c-9662-3990320e2788) - the switch
![image](https://github.com/user-attachments/assets/243cea47-f150-4fd0-b684-36bda76316e6) - the ultra sonic sensor
![image](https://github.com/user-attachments/assets/ab2a5376-1db3-455a-80e2-4c621b2b8730) - the LED switch and buzzer
*List out all components shown*

![Build](Add photos of build process here)

*Explain the build steps*

![Final](Add photo of final product here)
![image](https://github.com/user-attachments/assets/d0a2df18-7bc7-4b0a-9195-1b2788beae57)
![image](https://github.com/user-attachments/assets/ecd9b9cb-8d7b-430f-810f-f3eebbfb0fcb)
first we connected the arduino boadr with the systerm then connected the ultrasonic sensor then got the code from chat gtp then modified it in arduino IED and uploaded the code to the board did some trial then 
connected the buzzer then added the commands to the code then uploded it again then last we added the LED light and modified the code again then atlast addeed the code then did some trials then uploaded the code to the board
*Explain the final build*

### Project Demo
# Video
[Add your demo video link here]
https://drive.google.com/file/d/1RhPFA-meYNc7baBqcsZIJnLXRG1xWyrV/view?usp=sharing
it shows the final working of the project
*Explain what the video demonstrates*

# Additional Demos
[Add any extra demo materials/links]

## Team Contributions
- [AMAN ABDULLA]: [the software side and did the hardware assembling]
- [ALLEN THOMAS ALEX]: [The hardware side and the components assembling]
- [Name 3]: [Specific contributions]

---
Made with ❤️ at TinkerHub Useless Projects 

![Static Badge](https://img.shields.io/badge/TinkerHub-24?color=%23000000&link=https%3A%2F%2Fwww.tinkerhub.org%2F)
![Static Badge](https://img.shields.io/badge/UselessProject--24-24?link=https%3A%2F%2Fwww.tinkerhub.org%2Fevents%2FQ2Q1TQKX6Q%2FUseless%2520Projects)



