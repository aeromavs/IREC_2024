/*
Setup:
    - define variables for g-force (e.g., gForce), height (e.g., height) and measurement timestamp (e.g., timestamp)
    - choose communication protocol with raspberry pi (Serial, I2C, SPI)
    - Initialize communication library and set baud rate (if serial)
    - Calibrate sensors according to their datasheets 

- Main Loop:
    - read g-force sensor value and convert to appropriate units (e.g., g)
    - Read height sensor value of convert to units (e.g., meters)
    - Store current timestamp 
    - Create a data packet containing gForce, height, and timestamp
    - Send data packet to Raspberry Pi using chose communication protocol 
    - Implement error handling for sensor readings and communication 
    - Add filtering or averaging to smooth sensor data, Pi responsible
    - Implement calibration routine at startup on arduino
*/