/* LEVEL_05:0x0859C0 -- placement copy of LEVEL_08_090130.c. */
extern int func_085A08(int mask);
extern char *D_001E55DC;

void func_0859C0(int mask, int value)
{
    if (func_085A08(mask) != 0)
        *(int *)(D_001E55DC + 0x1d0) = value;
}
