/* LEVEL_18:0x078FC0 -- placement copy of LEVEL_08_090130.c. */
extern int func_079008(int mask);
extern char *D_001A570C;

void func_078FC0(int mask, int value)
{
    if (func_079008(mask) != 0)
        *(int *)(D_001A570C + 0x1d0) = value;
}
