/* LEVEL_04:0x08B300 -- placement copy of LEVEL_08_090130.c. */
extern int func_08B348(int mask);
extern char *D_0020F71C;

void func_08B300(int mask, int value)
{
    if (func_08B348(mask) != 0)
        *(int *)(D_0020F71C + 0x1d0) = value;
}
