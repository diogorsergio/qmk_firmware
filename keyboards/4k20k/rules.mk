# Teensy
USE_CHIBIOS_CONTRIB = yes

# Processor
MCU = MKL26Z64

# Bootloader
BOOTLOADER = halfkay

# Features
EXTRAKEY_ENABLE = yes
NKRO_ENABLE = yes
MOUSEKEY_ENABLE = no
CONSOLE_ENABLE = no
COMMAND_ENABLE = no
BOOTMAGIC_ENABLE = no

# Enter lower-power sleep mode when on the ChibiOS idle thread
OPT_DEFS += -DCORTEX_ENABLE_WFI_IDLE=TRUE

# Enable rotary encoders
ENCODER_ENABLE = yes

# Enable RGB Lighting
RGBLIGHT_ENABLE = yes

# Save space
LTO_ENABLE = yes