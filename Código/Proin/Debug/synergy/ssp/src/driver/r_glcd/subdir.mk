################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../synergy/ssp/src/driver/r_glcd/r_glcd.c 

OBJS += \
./synergy/ssp/src/driver/r_glcd/r_glcd.o 

C_DEPS += \
./synergy/ssp/src/driver/r_glcd/r_glcd.d 


# Each subdirectory must supply rules for building sources it contributes
synergy/ssp/src/driver/r_glcd/%.o: ../synergy/ssp/src/driver/r_glcd/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	C:\Renesas\e2_studio\eclipse\/../\Utilities\\/isdebuild arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -O2 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wunused -Wuninitialized -Wall -Wextra -Wmissing-declarations -Wconversion -Wpointer-arith -Wshadow -Wlogical-op -Waggregate-return -Wfloat-equal  -g3 -D_RENESAS_SYNERGY_ -I"F:\basura\e2studio gloria\Proin\synergy_cfg\ssp_cfg\bsp" -I"F:\basura\e2studio gloria\Proin\synergy_cfg\ssp_cfg\driver" -I"F:\basura\e2studio gloria\Proin\synergy\ssp\inc" -I"F:\basura\e2studio gloria\Proin\synergy\ssp\inc\bsp" -I"F:\basura\e2studio gloria\Proin\synergy\ssp\inc\bsp\cmsis\Include" -I"F:\basura\e2studio gloria\Proin\synergy\ssp\inc\driver\api" -I"F:\basura\e2studio gloria\Proin\synergy\ssp\inc\driver\instances" -I"F:\basura\e2studio gloria\Proin\src" -I"F:\basura\e2studio gloria\Proin\src\synergy_gen" -std=c99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" -x c "$<"
	@echo 'Finished building: $<'
	@echo ' '


