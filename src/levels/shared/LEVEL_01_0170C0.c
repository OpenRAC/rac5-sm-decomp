/* LEVEL_01:0x0170C0 -- sets or clears bit 3 of the indexed slot (or bit 4 of the owner word when there is no slot), then mirrors the flag into bit 11 of the owner word. */
typedef struct Slot {
    char pad_00[0x18];
    unsigned char flags;
    char pad_19[3];
} Slot;

typedef struct State {
    char pad_00[0x58];
    Slot *slots;
} State;

typedef struct Owner {
    char pad_00[0x64];
    int flags;
} Owner;

void func_0170C0(Owner *owner, int enabled, State *state, unsigned char index)
{
    if (state != 0 && index != 0xFF) {
        if (enabled != 0) {
            char *slot = (char *)state->slots + index * 0x1C;
            slot[0x18] |= 8;
        } else {
            char *slot = (char *)state->slots + index * 0x1C;
            slot[0x18] &= ~8;
        }
    } else {
        owner->flags = (owner->flags & ~0x10) | ((enabled & 1) << 4);
    }
    owner->flags = (owner->flags & ~0x800) | ((enabled & 1) << 11);
}
