/* LEVEL_07:0x1AE0A8 -- placement copy of LEVEL_01_19BF38.c: copies a limited amount from a table entry into the state. */
extern unsigned int D_0021D574;

void func_1AE0A8(char *object, void *unused, char *state)
{
    char *target = *(char **)(object + 0x54);
    char **table = (char **)(state + 0x10);
    char **cell = table + *(int *)(state + 0x3C);
    char *entry = *cell;
    char *node;
    unsigned int amount = *(unsigned char *)(target + 0x19);
    if (*(unsigned int *)(entry + 0x38) <
        amount + *(unsigned int *)(state + 0x40)) {
        *(unsigned char *)(target + 0x20) =
            *(unsigned char *)(entry + 0x38) -
            *(unsigned char *)(state + 0x40);
        *(unsigned int *)(state + 0x40) =
            *(unsigned int *)(*(char **)((char *)table + (*(int *)(state + 0x3C) << 2)) + 0x38);
    } else {
        *(unsigned char *)(target + 0x20) = amount;
        *(unsigned int *)(state + 0x40) +=
            *(unsigned char *)(target + 0x19);
    }
    node = *(char **)(object + 0x58);
    *(char **)(node + 8) = state;
    *(unsigned int *)(node + 4) |= 1;
    *(unsigned char *)(object + 0x45) = 4;
    *(float *)(object + 0x70) = 2.5f;
    *(unsigned int *)(object + 0x64) |= 0x20;
    *(unsigned int *)(target + 0x1C) = D_0021D574;
}
