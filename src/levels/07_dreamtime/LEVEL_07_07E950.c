/* LEVEL_07.REL:0x07E950: guarded counter decrement and flag clear. */
extern unsigned int D_0020A45C;

void func_07E950(char *item)
{
    if ((*(int *)(item + 0x64) & 6) != 0) {
        char *active = *(char **)(item + 0x40);
        if (active != 0)
            --*(unsigned short *)(active + 0x42);
    }
    *(int *)(item + 0x64) &= ~6;
    D_0020A45C--;
}

