/* LEVEL_08:0x1C96F8 -- initialises the object's state block (vtable, self pointer, copied value), resolves the object's slot reference against the global table and picks the state flag and the object byte from whether the resolved entry is live; returns 1. */
extern char D_00272398[];
extern char *D_0024FC54;

static __inline__ int Resolve(int *slot)
{
    char *entry;

    if (*slot == 0) {
        return 0;
    }
    entry = D_0024FC54 + *slot;
    if (*(int *)(entry + 0x40) == 0) {
        *slot = 0;
        return 0;
    }
    *slot = (int)entry;
    return 1;
}

int func_1C96F8(char *object)
{
    int *state;
    int *slot;

    state = *(int **)(object + 0x58);
    slot = *(int **)(object + 0x54);
    state[0] = (int)D_00272398;
    state[8] = (int)(state + 9);
    *(float *)(state + 15) = *(float *)(object + 0x34);
    if (Resolve(slot)) {
        state[1] = 0;
        *(unsigned char *)(object + 0x45) = 1;
    } else {
        state[1] = 1;
        *(unsigned char *)(object + 0x45) = 0;
    }
    return 1;
}
