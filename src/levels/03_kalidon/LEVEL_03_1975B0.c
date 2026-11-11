/* LEVEL_03:0x1975B0 -- resets the object's state block: mode byte 2, owner, two zeroed words. */
void func_1975B0(char *object)
{
    char *state;

    state = *(char **)(object + 0x58);
    *(unsigned char *)(state + 0xE) = 2;
    *(char **)(state + 0x10) = object;
    *(int *)(state + 0x14) = 0;
    *(int *)(state + 0) = 0;
}
