# Shortkey Setup

## 1. Wire the controller

Connect the nice!nano v2 as follows. Pin numbers are the Pro Micro-style labels printed on the board.

| Signal                         | Pin                                              |
| ------------------------------ | ------------------------------------------------ |
| Matrix rows 0-3                | 21, 20, 19, 18                                   |
| Matrix columns 0-11            | 15, 14, 16, 10, 9, 8, 7, 6, 5, 4, 1, P1.07       |
| OLED SDA, SCL                  | 2, 3                                             |
| SK6812mini-e data in           | 0                                                |

Diodes run column to row. P1.07 is the unlabeled pad in the middle of the nice!nano.

Number the keys left to right, top to bottom, and chain the LEDs in that same order so that LED n sits under key n. Power the OLED from 3.3V and share ground with the LED chain.

## 2. Create the repository

1. Create a new GitHub repository.
2. Copy the contents of this folder into it, keeping the directory layout.
3. Commit and push.

## 3. Build

GitHub Actions builds the firmware automatically on every push, using `build.yaml`.

1. Open the Actions tab of the repository and select the latest run.
2. Download the `firmware` artifact and unzip it.

## 4. Flash

1. Connect the nice!nano over USB.
2. Double-tap the reset button. A drive named `NICENANO` appears.
3. Copy the `.uf2` file onto that drive. The board restarts on its own.

## 5. Pair

1. Open the Bluetooth settings on your computer or phone and connect to `Planck`.
2. Hold Lower and Raise together to reach the Adjust layer. `BT_SEL 0` to `BT_SEL 4` select one of five Bluetooth profiles, and `BT_CLR` clears the current profile.
3. If the keyboard fails to connect, press `BT_CLR`, remove the old entry from the host's Bluetooth list, and pair again.

## Changing the configuration

- Keymap: `config/planck_wireless.keymap`
- Feature options: `config/planck_wireless.conf`
- OLED text: `src/custom_status_screen.c`
- Pin assignments: `boards/shields/planck_wireless/planck_wireless.overlay` and `boards/shields/planck_wireless/boards/nice_nano_nrf52840_zmk.overlay`
