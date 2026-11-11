extern int func_0901A8(int mask);
extern char *D_0023F11C;

void func_090130(int mask, int value)
{
    if (func_0901A8(mask) != 0)
        *(int *)(D_0023F11C + 0x1d0) = value;
}
