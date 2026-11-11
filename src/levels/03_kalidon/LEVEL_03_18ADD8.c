/* LEVEL_03:0x18ADD8 -- rebases the object's info word (+4 of the block at +0x54) by the global offset when it is set; then sets the tint (+0x68), the float at +0x70, the byte pair at +0x76/+0x77 and flag bits in +0x64, marks the linked effect block (found through the table at +0x40 and the byte at +0x44) with flag 0x40, clears +0x45 and returns 1 (0 when the info word was empty). */
extern int D_0021F414;

static __inline__ int Rebase(int *slot)
{
    int v;

    v = *slot;
    if (v == 0) {
        return 0;
    }
    *slot = D_0021F414 + v;
    return 1;
}

int func_18ADD8(char *object)
{
    int *info;
    char *table;
    int *entry;
    int *block;

    info = *(int **)(object + 0x54);
    if (!Rebase(info + 1)) {
        return 0;
    }
    *(unsigned int *)(object + 0x68) = 0xFF4F4F4FU;
    *(float *)(object + 0x70) = 75.0f;
    *(unsigned char *)(object + 0x77) = 0x32;
    *(unsigned char *)(object + 0x76) = 0x32;
    *(unsigned int *)(object + 0x64) |= 0x800040U;
    table = *(char **)(*(char **)(object + 0x40) + 4);
    entry = *(int **)(table + *(unsigned char *)(object + 0x44) * 0x34 + 4);
    block = (int *)entry[3];
    *(unsigned int *)((char *)block + 0x68) |= 0x40;
    *(unsigned char *)(object + 0x45) = 0;
    return 1;
}
