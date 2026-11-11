/* LEVEL_07:0x08A138 -- placement copy of LEVEL_08_090130.c. */
extern int func_08A180(int mask);
extern char *D_0020A55C;

void func_08A138(int mask, int value)
{
    if (func_08A180(mask) != 0)
        *(int *)(D_0020A55C + 0x1d0) = value;
}
