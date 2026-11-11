/* LEVEL_09:0x084A20 -- placement copy of LEVEL_08_090130.c. */
extern int func_084A68(int mask);
extern char *D_001E005C;

void func_084A20(int mask, int value)
{
    if (func_084A68(mask) != 0)
        *(int *)(D_001E005C + 0x1d0) = value;
}
