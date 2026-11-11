extern char D_00221EC0[];
extern int func_022248(void *ptr);
extern int func_0287D8(int value);
extern int func_060778(void *ptr);
extern int func_080CC0(void);

int func_0287F8(void)
{
    int n;

    n = *(int *)(func_022248(D_00221EC0) + 4);
    return func_0287D8(7) == 0
        || n != 2
        || func_060778(D_00221EC0) != 0
        || func_080CC0() == 0x100
        || func_080CC0() == 0x80;
}
