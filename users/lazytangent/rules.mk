SRC += lazytangent.c

NKRO_ENABLE = yes
UNICODE_COMMON = yes
LEADER_ENABLE = yes
CAPS_WORD_ENABLE = yes
MOUSEKEY_ENABLE = yes

# Command's default bindings (LSFT+RSFT) conflict with the default binding for
# caps-word, so it's disabled until I find that I want to use it.
COMMAND_ENABLE = no
