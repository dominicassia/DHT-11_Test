# DHT-11_Test
Testing multiple DHT-11 Sensors to determine the accuracy

<img src="https://lh3.googleusercontent.com/FpTd94-c-fo1DRcYY16hGLOnkOS5qpytBHnJJRolCIlcsDBe4twv1ONXZvi7PQPgZeipCSgwesBzqe9eHT3VoRhAwyE27L8vLgkdx882kZSYXVrV7MtCwE9dQ-vVCJdDA_9IZJUll7w=w2400"/>

## Contents
- [Intro]()
- [Materials]()
- [Schematic]()
- [Method]()
- [Code]()
- [Results]()

## Intro
Recently I needed temperature and humidity sensors for a project and bought a few DHT-11 sensors. 
I was curious how accurate these sensors were.
I deceided to wire a few of them up to an Arduino Nano and take some data.

## Materials

The materials list is short and sweet.

|Items|
|-----|
|DHT-11 (x3)|
|Arduino Nano|
|A few jumper wires|
|A breadboad|

## Schematic

A top-down view of the setup.

<img src="https://lh3.googleusercontent.com/4Z2IfOIe9TecgqTK3H6feayiGhptUuxzg4ODQdBVhJksHeCaU-0dO0u09sqMKyjPoWHV_JUWwd_0kpld3mcPQf1d_J5kTkYm3VtC-bvaPDLXIcFpXgYGjQc-33gTgaDYi3QpAyF3cO4=w2400"/>

## Method

My method for taking data was to collect 200 data points over a period of 200 seconds (i.e. measure from each sensor every second). To get a general sense of what the temperature should be, I took a picture of my thermostat's readout (a little more than 70°F).

<img src="https://lh3.googleusercontent.com/6f7W5OmnMJHvHyxLVma--Wml4AlYxuhVCL3TKKDK4o89DYeNrNeSG7MOAfKvy4seg72DJUJfuyoGshyjYMa7CWIrIxG8DGJJvIgE_I2iiU2vbxMNijCGUlWtf_PYVP3ffkFXa2oqOOg=w2400"/>

## Code

The code is rather simple as I used the Adafruit & DHT Library. I printed the values to the serial monitor in a CSV style format so that is could later be easily pasted into a CSV file.

[Link to test file](https://github.com/dominicassia/DHT-11_Test/blob/main/Test/Test.ino)

## Results

Overall the results were not that suprising as I was not expecting these sensors to be super accurate. It seems like the 

<img src="https://lh3.googleusercontent.com/DaRe4RjUAUE9lWRnWGhjj-v8JUWWEx5o74a-9pDRNqZWWqwAfZ6mbsNBOn5FUDLg4-9MGfp7HmHO2kkr4scnPilZYCriY0yYPf4K3pkU7U2cBPJAKzZIYUhTKvl8VFS5VXAgGusj4E8=w2400"/>

<img src="https://lh3.googleusercontent.com/RA6iu4816LoEG4B8BMkRaxj1BPji-YcyJS1W3fOTfdkIQQRgrDZ9QD7-HxouyG0rieaywTaZHmo7p0B2MHmNk_h-zKFoUQBisz0rw-cTMdNNhwVwCECTYmK4OU9hMbmgffxyHVeRhAE=w2400"/>
