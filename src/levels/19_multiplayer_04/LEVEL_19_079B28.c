/* LEVEL_19:0x079B28 -- placement copy of LEVEL_08_090130.c. */
extern int func_079B70(int mask);
extern char *D_001A540C;

void func_079B28(int mask, int value)
{
    if (func_079B70(mask) != 0)
        *(int *)(D_001A540C + 0x1d0) = value;
}
