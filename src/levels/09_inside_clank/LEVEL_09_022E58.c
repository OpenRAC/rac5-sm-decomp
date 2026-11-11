/* LEVEL_09:0x022E58 -- placement copy of LEVEL_01_023CC8.c: looks up the item's record, reports a lookup failure when its field at +0x40 is zero, and returns that field. */
extern char D_001F6378[];
extern int func_023920(int x, int y);
extern void func_0B0EE8(char *msg, int code, unsigned int v);

int func_022E58(char *item)
{
    int value;

    value = *(int *)(func_023920(*(int *)(item + 0x9a0), *(int *)(item + 0xf8)) + 0x40);
    if (value == 0)
        func_0B0EE8(D_001F6378, -0x3C, 0xFFFFFFFF);
    return value;
}
