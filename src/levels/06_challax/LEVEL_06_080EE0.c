/* LEVEL_06:0x080EE0 -- placement copy of LEVEL_08_090130.c. */
extern int func_080F28(int mask);
extern char *D_001E515C;

void func_080EE0(int mask, int value)
{
    if (func_080F28(mask) != 0)
        *(int *)(D_001E515C + 0x1d0) = value;
}
