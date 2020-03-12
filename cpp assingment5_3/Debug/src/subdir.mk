################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/cpp\ assingment5_3.cpp \
../src/employee.cpp \
../src/manager.cpp \
../src/sales_manager.cpp \
../src/salesman.cpp 

OBJS += \
./src/cpp\ assingment5_3.o \
./src/employee.o \
./src/manager.o \
./src/sales_manager.o \
./src/salesman.o 

CPP_DEPS += \
./src/cpp\ assingment5_3.d \
./src/employee.d \
./src/manager.d \
./src/sales_manager.d \
./src/salesman.d 


# Each subdirectory must supply rules for building sources it contributes
src/cpp\ assingment5_3.o: ../src/cpp\ assingment5_3.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/cpp assingment5_3.d" -MT"src/cpp\ assingment5_3.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


