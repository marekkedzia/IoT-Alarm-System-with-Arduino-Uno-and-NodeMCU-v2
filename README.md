### Project Plan: WATCHER360  

#### Project Description:  
WATCHER360 is an advanced home security system built on the Arduino platform. It provides comprehensive protection by combining anti-burglary features, monitoring, and threat warning systems. It was designed to ensure the safety of residents while offering ease of use and flexible configuration options.  

#### Main Features and Components:  
1. **Alarm System**: A siren is activated when a break-in is detected, alerting residents and deterring potential intruders.  
2. **Smoke and Gas Sensors**: Detect fire hazards and gas leaks, providing additional safety.  
3. **Motion Sensors**: Detect movement around the device, enhancing monitoring effectiveness.  
4. **Wireless Communication**: The system uses WiFi modules to communicate with a server, which sends SMS notifications to the owner.  

#### List of Components Used:  
1. **Arduino Uno**: The central system controller.  
2. **NodeMcu v2**: Provides server connectivity.  
3. **RFID Card Reader RC522**: For authorization and system deactivation.  
4. **PIR Motion Sensors (HC-SR501)**: For motion detection.  
5. **Smoke and Gas Sensors (MQ-2)**: For environmental hazard monitoring.  
6. **Alarm Siren**: To warn of intrusion.  
7. **Powerbank**: To power the system.  

#### Technologies Used:  
1. **Node.js + Express**: For the server backend, deployed on Google Cloud Platform (GCP).  
2. **SMS Gateway**: For sending notifications to the owner.  

#### System Architecture:  
1. **Arduino Uno** serves as the system's central controller, managing sensors and the WiFi module.  
2. **NodeMcu v2** connects Arduino to the server on GCP, transmitting sensor data.  
3. **The GCP server** processes data, logs events, and sends SMS notifications to the owner.  
