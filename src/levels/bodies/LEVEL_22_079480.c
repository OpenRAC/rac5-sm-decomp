/* LEVEL_22:0x079480 -- placement copy of LEVEL_08_090130.c. */
extern int func_0794C8(int mask);
extern char *D_001555DC;

void func_079480(int mask, int value)
{
    if (func_0794C8(mask) != 0)
        *(int *)(D_001555DC + 0x1d0) = value;
}
