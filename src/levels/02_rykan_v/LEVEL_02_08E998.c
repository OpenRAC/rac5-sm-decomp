/* LEVEL_02:0x08E998 -- placement copy of LEVEL_08_090130.c. */
extern int func_08E9E0(int mask);
extern char *D_0020B21C;

void func_08E998(int mask, int value)
{
    if (func_08E9E0(mask) != 0)
        *(int *)(D_0020B21C + 0x1d0) = value;
}
