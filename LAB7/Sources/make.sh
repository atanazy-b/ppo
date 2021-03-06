#!/bin/bash
avr-gcc -g -Os -mmcu=atmega328p -c main.cpp
avr-gcc -g -Os -mmcu=atmega328p -c stepper.cpp
avr-gcc -g -Os -mmcu=atmega328p -c led.cpp
avr-gcc -g -mmcu=atmega328p -o main.elf main.o led.o stepper.o
avr-objcopy -j .text -j .data -O ihex main.elf main.hex
avrdude -p m328p -P usb -c usbasp -U main.hex
