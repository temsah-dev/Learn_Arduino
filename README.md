# Learn_Arduino

This repo is a log of my journey learning Arduino. I'm documenting each batch of projects I build and what I learn from them — nothing here claims to be professional work, just steps in the learning process.

## First Batch

The first batch was 4 simple experiments, each one adding a new concept on top of the last (LEDs first, then LCD, then combining both):

### 1. Print Arabic Word on LCD
`code/1_print_arabic_word_on_lcd.ino`

Displays the word "تمساح" (crocodile) on a screen that doesn't natively support Arabic, by manually building each letter as a custom character.

**Components used:**
- Arduino board
- 16x2 LCD with I2C module (address 0x27)
- Jumper wires

### 2. LED Sequence
`code/2_led_sequence.ino`

Runs 5 LEDs in sequence: forward from the first to the last, then backward, using for loops and timed delays.

**Components used:**
- Arduino board
- 5 LEDs
- Appropriate resistors for the LEDs
- Breadboard and jumper wires

### 3. LED Sequence with LCD
`code/3_led_sequence_with_lcd.ino`

Same LED sequence idea, but with a counter on the LCD tracking how many times the loop has repeated.

**Components used:**
- Arduino board
- 5 LEDs + resistors
- 16x2 LCD with I2C module
- Breadboard and jumper wires

### 4. Race Start Countdown (3, 2, 1, GO)
`code/4_race_start_countdown_3_2_1_go.ino`

Simulates a race start countdown (ARE YOU READY → 3, 2, 1 → GO) with the LCD and LEDs reacting at each step.

**Components used:**
- Arduino board
- LEDs + resistors
- 16x2 LCD with I2C module
- Breadboard and jumper wires

## Libraries

- `Wire.h` — for I2C communication
- `LiquidCrystal_I2C.h` — for controlling the LCD over I2C

## How to Use

1. Open the sketch you want to try in the Arduino IDE.
2. Install the `LiquidCrystal_I2C` library from the Library Manager if it's not already installed.
3. Wire up the hardware according to the pin numbers in each file.
4. Upload the code to the board and check the result.

Photos and demo videos for each project are in the `images/` folder.

## License

This project is under the MIT License.
