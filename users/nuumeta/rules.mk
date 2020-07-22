SRC += nuumeta.c

NKRO_ENABLE = yes
TAP_DANCE_ENABLE = yes

# CONSOLE_ENABLE = yes
# DEBUG = yes
#BOOTMAGIC_ENABLE = full

ifeq ($(strip $(RGBLIGHT_ENABLE)), yes)
  SRC += rgb_layers.c
endif

ifeq ($(strip $(TAP_DANCE_ENABLE)), yes)
    SRC += tap_dances.c
endif
