################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/EXTI0.c \
../src/EXTI1.c \
../src/lcd.c \
../src/main.c \
../src/sevenseg.c 

OBJS += \
./src/EXTI0.o \
./src/EXTI1.o \
./src/lcd.o \
./src/main.o \
./src/sevenseg.o 

C_DEPS += \
./src/EXTI0.d \
./src/EXTI1.d \
./src/lcd.d \
./src/main.d \
./src/sevenseg.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega16 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


