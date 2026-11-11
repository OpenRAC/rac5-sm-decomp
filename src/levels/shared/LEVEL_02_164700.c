/* LEVEL_02:0x164700 -- clears a byte of the object and a word of its state block, returns 1. */
int func_164700(char *object)
{
    char *state = *(char **)(object + 0x58);

    *(unsigned char *)(object + 0x45) = 0;
    *(int *)(state + 0x10) = 0;
    return 1;
}
