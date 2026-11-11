/* LEVEL_10.REL:0x07CE00: guarded counter decrement and flag clear. */
extern unsigned int D_001FF15C;

void func_07CE00(char *item)
{
    if ((*(int *)(item + 0x64) & 6) != 0) {
        char *active = *(char **)(item + 0x40);
        if (active != 0)
            --*(unsigned short *)(active + 0x42);
    }
    *(int *)(item + 0x64) &= ~6;
    D_001FF15C--;
}

