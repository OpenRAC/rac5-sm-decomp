/* LEVEL_10:0x140780 -- placement copy of LEVEL_02_148C70.c: turns the offset stored in the object's setup block into a pointer by adding the global base, clears the done byte, sets the byte at +0x76 to 0x20 and returns 1. */
extern int D_0020F9F4;

int func_140780(char *object)
{
    int *slot;

    slot = *(int **)(object + 0x54);
    if (*slot != 0) {
        *slot = D_0020F9F4 + *slot;
    }
    *(unsigned char *)(object + 0x45) = 0;
    *(unsigned char *)(object + 0x76) = 0x20;
    return 1;
}
