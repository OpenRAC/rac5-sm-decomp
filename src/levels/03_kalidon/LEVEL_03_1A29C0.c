/* LEVEL_03:0x1A29C0 -- resets the object: clears the word at 0x70, raises flag 0x10, rebases the record's pointer by the global offset when set, clears the 0x6C-byte block and returns 1. */
extern int D_0021F414;
extern void *memset(void *s, int c, unsigned int n);

int func_1A29C0(char *object)
{
    char *record;
    int value;

    *(int *)(object + 0x70) = 0;
    *(unsigned int *)(object + 0x64) |= 0x10;
    record = *(char **)(object + 0x54);
    value = *(int *)(record + 4);
    if (value != 0) {
        *(int *)(record + 4) = D_0021F414 + value;
    }
    memset(*(void **)(object + 0x58), 0, 0x6C);
    return 1;
}
