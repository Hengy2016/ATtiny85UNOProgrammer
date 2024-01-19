#ATtiny85 UNO programmer

![3d board](/docs/3d_view.png)

Simple little board for an ATtiny85 programmer for a UNO

Status LEDs are based on the default pinouts in ATTinyCore board as per the ArduinoISP example sketch
copied here :
>
>// Put an LED (with resistor) on the following pins:
>
>// 9: Heartbeat   - shows the programmer is running
>
>// 8: Error       - Lights up if something goes wrong (use red if that makes sense)
>
>// 7: Programming - In communication with the target
>

Really simple circuit

![Circuit](/docs/schematic.png)

Select resistors to give your prefered LED brightness.

Capacitor values are as recommended but anything similar will work - i used 47 uF for the electrolytic and it was fine. 

The blue LED is on the ATtiny85 digital pin 3 - I use it as a quick check that the an ATtiny85 is ok by uploading a script that pulses that output. I also tend to use that pin as a digital out so it is a good visual check that the chip has been programmed successfully.
