################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/cpp\ assignment3_2.cpp 

OBJS += \
./src/cpp\ assignment3_2.o 

CPP_DEPS += \
./src/cpp\ assignment3_2.d 


# Each subdirectory must supply rules for building sources it contributes
src/cpp\ assignment3_2.o: ../src/cpp\ assignment3_2.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/cpp assignment3_2.d" -MT"src/cpp\ assignment3_2.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


