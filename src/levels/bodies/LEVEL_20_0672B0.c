/* LEVEL_20:0x0672B0 -- placement copy of LEVEL_08_090130.c. */
extern int func_0672F8(int mask);
extern char *D_0010696C;

void func_0672B0(int mask, int value)
{
    if (func_0672F8(mask) != 0)
        *(int *)(D_0010696C + 0x1d0) = value;
}
