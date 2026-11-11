/* LEVEL_09.REL:0x079268: guarded counter decrement and flag clear. */
extern unsigned int D_001DFF5C;

void func_079268(char *item)
{
    if ((*(int *)(item + 0x64) & 6) != 0) {
        char *active = *(char **)(item + 0x40);
        if (active != 0)
            --*(unsigned short *)(active + 0x42);
    }
    *(int *)(item + 0x64) &= ~6;
    D_001DFF5C--;
}

