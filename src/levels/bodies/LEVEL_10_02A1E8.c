extern char D_0023E540[];
extern int func_0234A8(void *ptr);
extern int func_02A1C8(int value);
extern int func_0627E8(void *ptr);
extern int func_0881B0(void);

int func_02A1E8(void)
{
    int n;

    n = *(int *)(func_0234A8(D_0023E540) + 4);
    return func_02A1C8(7) == 0
        || n != 2
        || func_0627E8(D_0023E540) != 0
        || func_0881B0() == 0x100
        || func_0881B0() == 0x80;
}
