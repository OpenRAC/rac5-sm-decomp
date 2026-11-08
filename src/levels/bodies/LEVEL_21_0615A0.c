/* LEVEL_21.REL:0x0615A0: guarded counter decrement and flag clear. */
extern unsigned int D_0014ADDC;

void func_0615A0(char *item)
{
    if ((*(int *)(item + 0x64) & 6) != 0) {
        char *active = *(char **)(item + 0x40);
        if (active != 0)
            --*(unsigned short *)(active + 0x42);
    }
    *(int *)(item + 0x64) &= ~6;
    D_0014ADDC--;
}

