/* LEVEL_10:0x0883D0 -- placement copy of LEVEL_08_090130.c. */
extern int func_088418(int mask);
extern char *D_001FF25C;

void func_0883D0(int mask, int value)
{
    if (func_088418(mask) != 0)
        *(int *)(D_001FF25C + 0x1d0) = value;
}
