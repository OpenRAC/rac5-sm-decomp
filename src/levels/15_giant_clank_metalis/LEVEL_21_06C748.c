/* LEVEL_21:0x06C748 -- placement copy of LEVEL_08_090130.c. */
extern int func_06C790(int mask);
extern char *D_0014AEDC;

void func_06C748(int mask, int value)
{
    if (func_06C790(mask) != 0)
        *(int *)(D_0014AEDC + 0x1d0) = value;
}
