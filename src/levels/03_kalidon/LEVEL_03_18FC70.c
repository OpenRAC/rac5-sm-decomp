/* LEVEL_03:0x18FC70 -- rebases the object's info word (+4 of the block at +0x54) by the global offset when it is set; then sets the byte at +0x77 to 0x28, marks the linked effect block (found through the table at +0x40 and the byte at +0x44) with flag 0x40 and returns 1 (0 when the info word was empty). */
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

int func_18FC70(char *object)
{
    int *slot;
    char *table;
    int *entry;
    int *block;

    slot = *(int **)(object + 0x54);
    if (!Rebase(slot)) {
        return 0;
    }
    *(unsigned char *)(object + 0x77) = 0x28;
    table = *(char **)(*(char **)(object + 0x40) + 4);
    entry = *(int **)(table + *(unsigned char *)(object + 0x44) * 0x34 + 4);
    block = (int *)entry[3];
    *(unsigned int *)((char *)block + 0x68) |= 0x40;
    return 1;
}
