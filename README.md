# My-Starbie

# Description
The Starbie is a starter project for Half-Life Week 1. The project is a small interactive desktop pet powered by the Seeed Studio Xiao ESP32 C3 microcontroller. The original project has been augmented  by adding a piezo buzzer and changing the original 'Run' interaction to a 'Sing' interaction.  

# Getting Started
## Prerequesites

### Hardware
For a list of needed Components, please go to <a href = "https://github.com/jtylerengineering/My-Starbie/blob/main/BOM.md">BOM.md</a>. You will also need to obtain the PCB. For the Gerber flies, head to <a href=" ">Gerber Files</a>. Other than that, you will need a soldering iron and solder to wire the components to the board.

### Software
You will need to have the Arduino IDE installed in order to edit and upload any and all code to the Starbie. If you wish to change the PCB, you will need to have Kicad installed.

## Wiring


As of now, I have not printed the board. I will probably not be able to add a build tutorial until Week Six, as to put images here.

## Coding
All code is inside the Firmware folder. To use the code, you will need to open up the Arduino IDE, go to File -> Open. Then you will navigate to Starbie.ino . When you try to open the file in the IDE, you will revieve a pop up that says that it will need to create an independent folder for the code. Select Proceed, and you're all set to edit your code and upload it.

### Settings
For an explanation I could never hope to give head to https://github.com/SharKingStudios/Starbie/blob/main/Week%201%20Guide.md for information on setting up the board in the IDE.

### the Sing() Function
One of the changes I made to the original project was adding the ability to play a song. As of now, you will only be able to play one line and note at a time (if you want more than this, you will need to add more piezo buzzers). However, I did lay down the framework for putting your own song instead of my example. 

First off, the notes shown above are all in C Major, so you will need to either find a song in that key or adjust the frequencies accordingly. The syntax for writing a note into the code is as follows:
     ` tone(buzzerPin, note); `

This mostly translates to 'I want my piezo to play this note'. To change the duration of the note you would use `delay(beat * time)` The "time" here is how many beats this would be. This also applies to rests, but you would just use Arduino's `noTone()` function there.
