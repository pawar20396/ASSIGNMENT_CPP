################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/circle.cpp \
../src/cpp\ assignment6_2.cpp \
../src/rectangle.cpp \
../src/square.cpp 

OBJS += \
./src/circle.o \
./src/cpp\ assignment6_2.o \
./src/rectangle.o \
./src/square.o 

CPP_DEPS += \
./src/circle.d \
./src/cpp\ assignment6_2.d \
./src/rectangle.d \
./src/square.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/cpp\ assignment6_2.o: ../src/cpp\ assignment6_2.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/cpp assignment6_2.d" -MT"src/cpp\ assignment6_2.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


