################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/cpp\ assignment5_2.cpp \
../src/date2.cpp \
../src/employee2.cpp \
../src/person2.cpp 

OBJS += \
./src/cpp\ assignment5_2.o \
./src/date2.o \
./src/employee2.o \
./src/person2.o 

CPP_DEPS += \
./src/cpp\ assignment5_2.d \
./src/date2.d \
./src/employee2.d \
./src/person2.d 


# Each subdirectory must supply rules for building sources it contributes
src/cpp\ assignment5_2.o: ../src/cpp\ assignment5_2.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/cpp assignment5_2.d" -MT"src/cpp\ assignment5_2.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


