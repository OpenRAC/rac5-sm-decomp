/* LEVEL_10:0x17F3E0 -- resets the object's state block, tags it with the shifted global id and reports success. */
extern unsigned int D_002A11E8;

int func_17F3E0(char *object)
{
    char *state;

    state = *(char **)(object + 0x58);
    *(int *)(state + 0x5C) = 0;
    *(unsigned char *)(state + 0x60) = 0;
    *(int *)(state + 0x64) = 0;
    *(int *)(state + 0x68) = 0;
    *(int *)(state + 0x6C) = 0;
    *(unsigned int *)(state + 0x70) = (D_002A11E8 << 16) | 0xE0007045U;
    *(unsigned char *)(object + 0x45) = 0;
    return 1;
}
