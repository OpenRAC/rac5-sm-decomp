/* LEVEL_20.REL:0x05EA28: guarded counter decrement and flag clear. */
extern unsigned int D_0010686C;

void func_05EA28(char *item)
{
    if ((*(int *)(item + 0x64) & 6) != 0) {
        char *active = *(char **)(item + 0x40);
        if (active != 0)
            --*(unsigned short *)(active + 0x42);
    }
    *(int *)(item + 0x64) &= ~6;
    D_0010686C--;
}

