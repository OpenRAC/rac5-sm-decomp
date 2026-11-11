/* LEVEL_23:0x07DF28 -- placement copy of LEVEL_08_090130.c. */
extern int func_07DF70(int mask);
extern char *D_001C965C;

void func_07DF28(int mask, int value)
{
    if (func_07DF70(mask) != 0)
        *(int *)(D_001C965C + 0x1d0) = value;
}
