# My-Starbie
<img width="1084" height="629" alt="Starbie_render" src="https://github.com/user-attachments/assets/7bf6d541-2385-4fb8-9a92-fd5c8dbeab1b" />

# Description
The Starbie is a starter project for Half-Life Week 1. The project is a small interactive desktop pet powered by the Seeed Studio Xiao ESP32 C3 microcontroller. The original project has been augmented  by adding a piezo buzzer and changing the original 'Run' interaction to a 'Sing' interaction.  

# Getting Started
## Prerequesites

### Hardware
 You will also need to obtain the PCB. For the Gerber flies, head to <a href=" ">Gerber Files</a>. Other than that, you will need a soldering iron and solder to wire the components to the board. The table below is based on the components I used while designing this.
 
> [!NOTE]
> refer to Starbie BOM - Sheet 1.csv instead of Bom.csv to get an accurate count. Bom.csv is a result of the Half Life site's system, and is inaccurate to a full project.
 

| Component | Amount | Price (USD) | Link |
| --- | --- | --- | --- |
| Seeed Studio XIAO ESP32-C3 | 1 | $9.36 | <a href="https://www.aliexpress.us/item/3256807240718259.html?spm=a2g0o.productlist.0.0.33dd7473O64Rzo&mp=1&pdp_npi=6%40dis%21USD%21USD+9.36%21USD+5.36%21%21USD+5.36%21%21%21%402103094f17925851627315813e0e41%2112000040716079484%21ct%21US%218282019388%21%211%210%21&gatewayAdapt=glo2usa"> Aliexpress</a> |
| 10 kOhm Potentiometer | 1 | $0.11 | <a href= "https://www.alibaba.com/product-detail/PT10-10K-spain-potentiometer-B103_1600210333807.html">Alibaba</a> |
| 0.96 inch OLED Display | 1 | $2.78 | <a href="https://www.aliexpress.us/item/3256805954920554.html?spm=a2g0o.detail.0.0.73aa0SRG0SRG6m&mp=1&pdp_npi=6%40dis%21USD%21USD+2.78%21USD+1.09%21%21USD+1.09%21%21%21%402103117b17925861781885228e0d09%2112000035944225406%21ct%21US%218282019388%21%211%210%21&_gl=1*1veh4cy*_gcl_aw*R0NMLjE3OTE3Mjc2NjYuQ2p3S0NBanc1NnpXQmhCMEVpd0FkUE9RT2RLQnpWQTdQcnZsamVPZG4wN2ozaWRWVmZHLXhPNldWM1VNSnRFUW9aVGVzRElPT3pCbDhSb0MyS2dRQXZEX0J3RQ..*_gcl_dc*R0NMLjE3OTE3Mjc2NjYuQ2p3S0NBanc1NnpXQmhCMEVpd0FkUE9RT2RLQnpWQTdQcnZsamVPZG4wN2ozaWRWVmZHLXhPNldWM1VNSnRFUW9aVGVzRElPT3pCbDhSb0MyS2dRQXZEX0J3RQ..*_gcl_au*MTY3NjU0OTcyNi4xNzkxNzI3NjA3*_ga*MTc2OTQzNzcxNTAzOTIzMS4xNzkxNzIyNjI4Mjk3*_ga_VED1YSGNC7*czE3OTI1ODUxNzYkbzUkZzEkdDE3OTI1ODYxODUkajUyJGwwJGgw&gatewayAdapt=glo2usa">Aliexpress</a> |
| Keyboard Switches | 1 set | $0.65 | <a href="https://www.aliexpress.us/item/3256806385705423.html?spm=a2g0o.detail.0.0.2868xZNxxZNxV6&mp=1&pdp_npi=6%40dis%21USD%21USD+0.65%21USD+0.47%21%21USD+0.47%21%21%21%402103117b17925861851965563e0d09%2112000037704740809%21ct%21US%218282019388%21%211%210%21&_gl=1*103ies4*_gcl_aw*R0NMLjE3OTE3Mjc2NjYuQ2p3S0NBanc1NnpXQmhCMEVpd0FkUE9RT2RLQnpWQTdQcnZsamVPZG4wN2ozaWRWVmZHLXhPNldWM1VNSnRFUW9aVGVzRElPT3pCbDhSb0MyS2dRQXZEX0J3RQ..*_gcl_dc*R0NMLjE3OTE3Mjc2NjYuQ2p3S0NBanc1NnpXQmhCMEVpd0FkUE9RT2RLQnpWQTdQcnZsamVPZG4wN2ozaWRWVmZHLXhPNldWM1VNSnRFUW9aVGVzRElPT3pCbDhSb0MyS2dRQXZEX0J3RQ..*_gcl_au*MTY3NjU0OTcyNi4xNzkxNzI3NjA3*_ga*MTc2OTQzNzcxNTAzOTIzMS4xNzkxNzIyNjI4Mjk3*_ga_VED1YSGNC7*czE3OTI1ODUxNzYkbzUkZzEkdDE3OTI1ODYzNjYkajYwJGwwJGgw&gatewayAdapt=glo2usa">Aliexpress</a> |
| MPU6050 Tilt Sensor | 1 | $2.10 | <a href="https://www.aliexpress.us/item/3256809871479525.html?spm=a2g0o.productlist.main.2.52804922fHav3E&algo_pvid=0fbeef62-7378-48a1-adb1-371e169a90af&algo_exp_id=0fbeef62-7378-48a1-adb1-371e169a90af-1&pdp_ext_f=%7B%22order%22%3A%223447%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21USD%212.10%211.09%21%21%212.10%211.09%21%402101d3fe17917546524812582e10eb%2112000050979433010%21sea%21US%218282019388%21ABX%211%210%21n_tag%3A-29910%3Bd%3Af35780dd%3Bm03_new_user%3A-29895%3BpisId%3A5000000218032551&curPageLogUid=ErNcXavS6G41&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005010057794277%7C_p_origin_prod%3A">Aleiexpress</a> |
| Piezo Buzzer | 1 | $1.90 | <a href="https://www.aliexpress.us/item/3256807978776593.html?spm=a2g0o.productlist.main.4.68504059USJBKe&aem_p4p_detail=202610210545177614210076402460000779104&algo_pvid=b9cfe003-73af-4c05-a8ab-92390f81b2b9&algo_exp_id=b9cfe003-73af-4c05-a8ab-92390f81b2b9-3&pdp_ext_f=%7B%22order%22%3A%22133%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21USD%211.90%211.90%21%21%2112.63%2112.63%21%4021032e4e17925867176664384e0e2b%2112000044055302230%21sea%21US%218282019388%21ABX%211%210%21n_tag%3A-29910%3Bd%3Accb82ee9%3Bm03_new_user%3A-29895&curPageLogUid=14ANKVOokQq1&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005008165091345%7C_p_origin_prod%3A&search_p4p_id=202610210545177614210076402460000779104_1">Aliexpress</a> |
| DHT11 Environment Sensor | 1 | $5.76 | <a href="https://www.aliexpress.us/item/3256809040855978.html?spm=a2g0o.productlist.main.2.5337604arbm8Gt&algo_pvid=8c74fd26-a937-4906-9cb9-6d6c3bbb966c&algo_exp_id=8c74fd26-a937-4906-9cb9-6d6c3bbb966c-1&pdp_ext_f=%7B%22order%22%3A%22203%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21USD%215.75%215.75%21%21%2138.18%2138.18%21%402103128817925877811354370e0ea1%2112000048385025197%21sea%21US%218282019388%21ABX%211%210%21n_tag%3A-29910%3Bd%3Accb82ee9%3Bm03_new_user%3A-29895&curPageLogUid=QFI6nGCRqfPS&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005009227170730%7C_p_origin_prod%3A">Aliexpress</a> |
| 10 kOhm resister | 1 | $0.14 | <a href="https://www.jameco.com/z/CF1W103JRC-Jameco-ValuePro-Resistor-Carbon-Film-10k-Ohm-1-Watt-5-_2237221.html?srsltid=AU7gw4UA99z_8AuIH1aGr_tBybTi_9l5eX-QZ8F5XKKPQdWzRGTRjFpqPhA">Jameco</a> |
| PCB | 1 | $1.88 | <a href="https://jlcpcb.com/">JLPCB</a> | 
| Shipping/Fees | $17.36 |
| Total | $47.69 |


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

