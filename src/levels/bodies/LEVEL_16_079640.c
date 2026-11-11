/* LEVEL_16:0x079640 -- placement copy of LEVEL_08_090130.c. */
extern int func_079688(int mask);
extern char *D_001A428C;

void func_079640(int mask, int value)
{
    if (func_079688(mask) != 0)
        *(int *)(D_001A428C + 0x1d0) = value;
}
