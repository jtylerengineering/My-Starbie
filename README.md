# My-Starbie
<img width="1084" height="629" alt="Starbie_render" src="https://github.com/user-attachments/assets/7bf6d541-2385-4fb8-9a92-fd5c8dbeab1b" />

# Description
The Starbie is a starter project for Half-Life Week 1. The project is a small interactive desktop pet powered by the Seeed Studio Xiao ESP32 C3 microcontroller. The original project has been augmented  by adding a piezo buzzer and changing the original 'Run' interaction to a 'Sing' interaction.  

# Getting Started
## Prerequesites

### Hardware
For a list of needed Components, please go to <a href = "https://github.com/jtylerengineering/My-Starbie/blob/main/BOM.md">BOM.md</a>. You will also need to obtain the PCB. For the Gerber flies, head to <a href=" ">Gerber Files</a>. Other than that, you will need a soldering iron and solder to wire the components to the board.

### Software
You will need to have the Arduino IDE installed in order to edit and upload any and all code to the Starbie. If you wish to change the PCB, you will need to have Kicad installed.

## Wiring
<img width="1123" height="794" alt="Starbie" src="https://github.com/user-attachments/assets/9f24af7c-2bae-4297-a7a1-3f1119065d82" />

As of now, I have not printed the board. I will probably not be able to add a build tutorial until Week Six, as to put images here. However, I can at least discuss how the sound system is wired up.

<img width="650" height="467" alt="Screenshot 2026-10-11 at 8 27 06 AM" src="https://github.com/user-attachments/assets/85180d0a-e33b-4d99-8372-d2f3729c3535" />

The simple explanation is that the potentiometer is wired to Digital Pin 7 on the XIAO board. This is where the input voltage is. Then the positive lead on the buzzer is wired into the wiper pin of the potentiometer. Both components are grounded using a ground pool on the PCB.

## Installing Firmware
To download the firmware for the Starbie, go to <a href="https://github.com/jtylerengineering/My-Starbie/blob/main/Starbie_firmware/Starbie.ino">Starbie.ino</a>.

### Settings
An explanation for setting up for an upload will be added during week six.

### the Sing() Function
One of the changes I made to the original project was adding the ability to play a song. As of now, you will only be able to play one line and note at a time (if you want more than this, you will need to add more piezo buzzers). However, I did lay down the framework for putting your own song instead of my example. 

<img width="681" height="317" alt="notes_code" src="https://github.com/user-attachments/assets/a7a50cdd-d2b5-4eb6-9964-86d0a1be8fb7" />

First off, the notes shown above are all in C Major, so you will need to either find a song in that key or adjust the frequencies accordingly. The syntax for writing a note into the code is as follows:
     ` tone(buzzerPin, note); `

This mostly translates to 'I want my piezo to play this note'. To change the duration of the note you would use `delay(beat * time)` The "time" here is how many beats this would be. This also applies to rests, but you would just use Arduino's `noTone()` function there.

# License
this project is not under any sort of license.

