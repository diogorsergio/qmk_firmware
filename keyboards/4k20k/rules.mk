# Teensy
USE_CHIBIOS_CONTRIB = yes

# Processor
MCU = MKL26Z64

# Enter lower-power sleep mode when on the ChibiOS idle thread
OPT_DEFS += -DCORTEX_ENABLE_WFI_IDLE=TRUE

# Enable rotary encoders
ENCODER_ENABLE = yes

# Enable RGB Lighting
RGBLIGHT_ENABLE = yes

# Save space
LTO_ENABLE = yes