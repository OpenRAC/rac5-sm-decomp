/* LEVEL_01:0x088068 -- placement copy of LEVEL_08_090130.c. */
extern int func_0880B0(int mask);
extern char *D_001F625C;

void func_088068(int mask, int value)
{
    if (func_0880B0(mask) != 0)
        *(int *)(D_001F625C + 0x1d0) = value;
}
