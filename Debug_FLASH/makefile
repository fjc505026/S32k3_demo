################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include src/subdir.mk
-include generate/src/subdir.mk
-include board/subdir.mk
-include RTD/src/subdir.mk
-include Project_Settings/Startup_Code/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
SECONDARY_SIZE += \
FlexPWM_Pwm_Ip_Example_S32K396.siz \


# All Target
all: FlexPWM_Pwm_Ip_Example_S32K396.elf secondary-outputs

# Tool invocations
FlexPWM_Pwm_Ip_Example_S32K396.elf: $(OBJS) C:/NXP/work/FlexPWM_Pwm_Ip_Example_S32K396/Project_Settings/Linker_Files/linker_flash_s32k396.ld $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: Standard S32DS C Linker'
	arm-none-eabi-gcc -o "FlexPWM_Pwm_Ip_Example_S32K396.elf" "@FlexPWM_Pwm_Ip_Example_S32K396.args"  $(USER_OBJS)
	@echo 'Finished building target: $@'
	@echo ' '

FlexPWM_Pwm_Ip_Example_S32K396.siz: FlexPWM_Pwm_Ip_Example_S32K396.elf
	@echo 'Invoking: Standard S32DS Print Size'
	arm-none-eabi-size --format=berkeley FlexPWM_Pwm_Ip_Example_S32K396.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) ./*
	-@echo ' '

secondary-outputs: $(SECONDARY_SIZE)

.PHONY: all clean dependents

-include ../makefile.targets
