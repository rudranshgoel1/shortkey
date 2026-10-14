---
title: "Shortkey"
author: "stolen_username"
description: "Planck keyboard"
created_at: "2026-10-13"
---

# 2026-10-14: Routing for LEDs

**Total time spent: 2 hours 9 minutes**

# what did i do?
- placement for each and every single sk6812 mini e
- very repetitive and boring
- played some technoblade to pass the time
- then i started with routing
- took some inspiration from a friend's keyboard with led
- started routing with the DIN and DOUT
- then with the level shifter
- one thing i did was remove a lot of old traces to make room for the new ones
- used a boatload of vias
- pcb is finished, ready to ship!

lapse recording: https://lapse.hackclub.com/timelapse/gP0H0mzeh-S5

![Screenshot_2026-10-15_at_1.47.57_AM.png](https://cdn.hackclub.com/01a13c10-9a24-712b-a9de-42966bf0bdd0/Screenshot_2026-10-15_at_1.47.57_AM.png)

# 2026-10-14: LED

**Total time spent: 48 minutes**

# what did i do?
- put up sk6812mini-e leds for well led purposes
- wired the DIN with the prevs one DOUT
- connected the VSS to GND
- added a level shifter for converting 3v3 to 5v (took a whole lot of time to wire)

lapse recording: https://lapse.hackclub.com/timelapse/gIWultcFssYH

![Screenshot_2026-10-14_at_8.54.04_PM.png](https://cdn.hackclub.com/01a13b03-82b4-7341-a2f6-2ab823f82e52/Screenshot_2026-10-14_at_8.54.04_PM.png)

# 2026-10-14: added oled display

**Total time spent: 25 minutes**

# what did i do?
- added 0.91 inch oled display for displaying pc stats or weather or anything
- it could also be a small pet on our keyboard

lapse recording: https://lapse.hackclub.com/timelapse/tEOqLwPqfHTm

![Screenshot_2026-10-15_at_1.52.35_AM.png](https://cdn.hackclub.com/01a13c15-157d-76fa-9db5-1875777a8ddd/Screenshot%202026-10-15%20at%201.52.35%E2%80%AFAM.png)
![Screenshot_2026-10-15_at_1.52.17_AM.png](https://cdn.hackclub.com/01a13c15-1474-7b54-a495-25535ada2e14/Screenshot%202026-10-15%20at%201.52.17%E2%80%AFAM.png)


# 2026-10-14: CAD

**Total time spent: 1 hour 3 minute**

# what did i do?
- cad
- hardest part was CAD, on god i hate this
- also rounded the corner with a 3mm fillet
- added m3 screws (1.5mm radius) holes in the case

lapse recording: https://lapse.hackclub.com/timelapse/gQJv3hdPhNkc

![Screenshot_2026-10-14_at_2.43.54_PM.png](https://cdn.hackclub.com/01a139b0-a9c4-72a8-a83a-9b56f2643eeb/Screenshot_2026-10-14_at_2.43.54_PM.png)![Screenshot_2026-10-14_at_2.44.09_PM.png](https://cdn.hackclub.com/01a139b0-d48e-7872-acd0-d048894a1d54/Screenshot_2026-10-14_at_2.44.09_PM.png)

# 2026-10-14: routing

**Total time spent: 42 minutes**

# what did i do?
- routed the diodes together (rows)
- routed the keys to the diodes
- routed the keys together (columns
- placed the microcontroller on the top
- routed the microcontroller one by one with the battery and rows x columns

lapse recording: https://lapse.hackclub.com/timelapse/c6oJaf_6LSh7

![Screenshot_2026-10-14_at_11.57.46_AM.png](https://cdn.hackclub.com/01a13918-8e44-7f96-81c1-bc447d011b13/Screenshot_2026-10-14_at_11.57.46_AM.png)

# 2026-10-13: Placement (omg so tiring)

**Total time spent: 42 minutes**

# what did i do?
- placement of every key and its diode
- it is so tiring + it is so repetitive
- you have to be careful to line up the squares otherwise the pcb could go wrong and the keycaps would collide with each other
- in between i realised i messed up by assigning the 2u footprint to SW_31 instead of SW_42
- but i fixed it and took care of it

lapse recording: https://lapse.hackclub.com/timelapse/8loCbSTmlrfs

![Screenshot_2026-10-14_at_1.10.33_AM.png](https://cdn.hackclub.com/01a136c8-024a-7e92-97e0-5d3e586e95d6/Screenshot_2026-10-14_at_1.10.33_AM.png)

# 2026-10-13: Started with Schematic

**Total time spent: 40 minutes**

# what did i do?
- i decided to make a planck keyboard.
- why? because its portable, cool looking, wireless (WAOW) and its better on the fingers or something (i read it somewhere 🤓)
- the matrix is 4 rows x 12 columns of keys
- in the last row, there are 11 keys as the spacebar is 2u instead of 1u
- after completing the schematic, it took me a lot of time to choose the mcu
- the xiao nrf52840 is a good option but it hasn't got the 16 gpio pins i require
- so i landed on the nice!nano v2
- i was thinking of getting a gpio extender with the xiao but that is too much effort for the same work
- also the nice!nano v2 connects to the external battery without any external voltage buck converter :)
- also setup the github repo for the same

lapse recording: https://lapse.hackclub.com/timelapse/VbLc2Q0yWHoc

![Screenshot_2026-10-14_at_12.22.44_AM.png](https://cdn.hackclub.com/01a1369c-35a1-7f7a-8f43-167d62764662/Screenshot_2026-10-14_at_12.22.44_AM.png)![Screenshot_2026-10-14_at_12.22.55_AM.png](https://cdn.hackclub.com/01a1369c-5a64-7047-8ab8-a61066b881d8/Screenshot_2026-10-14_at_12.22.55_AM.png)

