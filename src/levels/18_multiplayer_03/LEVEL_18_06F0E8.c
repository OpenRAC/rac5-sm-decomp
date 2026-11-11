/* LEVEL_18.REL:0x06F0E8: guarded counter decrement and flag clear. */
extern unsigned int D_001A560C;

void func_06F0E8(char *item)
{
    if ((*(int *)(item + 0x64) & 6) != 0) {
        char *active = *(char **)(item + 0x40);
        if (active != 0)
            --*(unsigned short *)(active + 0x42);
    }
    *(int *)(item + 0x64) &= ~6;
    D_001A560C--;
}

