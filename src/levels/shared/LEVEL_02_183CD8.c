/* LEVEL_02:0x183CD8 -- resets the object's state block: mode byte 2, owner, two zeroed words. */
int func_183CD8(char *object)
{
    char *state;

    state = *(char **)(object + 0x58);
    *(unsigned char *)(state + 0xE) = 2;
    *(char **)(state + 0x10) = object;
    *(int *)(state + 0x14) = 0;
    *(int *)(state + 0) = 0;
    return 1;
}
