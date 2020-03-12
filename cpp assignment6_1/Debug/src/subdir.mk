################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/books.cpp \
../src/cpp\ assignment\ 6_1.cpp \
../src/product.cpp \
../src/tape.cpp 

OBJS += \
./src/books.o \
./src/cpp\ assignment\ 6_1.o \
./src/product.o \
./src/tape.o 

CPP_DEPS += \
./src/books.d \
./src/cpp\ assignment\ 6_1.d \
./src/product.d \
./src/tape.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/cpp\ assignment\ 6_1.o: ../src/cpp\ assignment\ 6_1.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/cpp assignment 6_1.d" -MT"src/cpp\ assignment\ 6_1.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


