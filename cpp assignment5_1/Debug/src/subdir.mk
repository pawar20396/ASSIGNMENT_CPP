################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/cpp\ assignment5_1.cpp \
../src/date.cpp \
../src/employee.cpp \
../src/person.cpp 

OBJS += \
./src/cpp\ assignment5_1.o \
./src/date.o \
./src/employee.o \
./src/person.o 

CPP_DEPS += \
./src/cpp\ assignment5_1.d \
./src/date.d \
./src/employee.d \
./src/person.d 


# Each subdirectory must supply rules for building sources it contributes
src/cpp\ assignment5_1.o: ../src/cpp\ assignment5_1.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/cpp assignment5_1.d" -MT"src/cpp\ assignment5_1.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


