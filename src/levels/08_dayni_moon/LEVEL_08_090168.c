/* LEVEL_08:0x090168 -- placement copy of LEVEL_08_090130.c. */
extern int func_0901A8(int mask);
extern char *D_0023F11C;

void func_090168(int mask, int value)
{
    if (func_0901A8(mask) != 0)
        *(int *)(D_0023F11C + 0x108) = value;
}
