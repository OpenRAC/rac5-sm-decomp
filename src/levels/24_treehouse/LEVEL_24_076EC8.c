/* LEVEL_24.REL:0x076EC8: guarded counter decrement and flag clear. */
extern unsigned int D_001C6DDC;

void func_076EC8(char *item)
{
    if ((*(int *)(item + 0x64) & 6) != 0) {
        char *active = *(char **)(item + 0x40);
        if (active != 0)
            --*(unsigned short *)(active + 0x42);
    }
    *(int *)(item + 0x64) &= ~6;
    D_001C6DDC--;
}

