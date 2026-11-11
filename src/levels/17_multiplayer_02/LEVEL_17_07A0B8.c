/* LEVEL_17:0x07A0B8 -- placement copy of LEVEL_08_090130.c. */
extern int func_07A100(int mask);
extern char *D_0019788C;

void func_07A0B8(int mask, int value)
{
    if (func_07A100(mask) != 0)
        *(int *)(D_0019788C + 0x1d0) = value;
}
