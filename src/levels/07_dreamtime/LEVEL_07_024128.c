/* LEVEL_07:0x024128 -- placement copy of LEVEL_01_023CC8.c: looks up the item's record, reports a lookup failure when its field at +0x40 is zero, and returns that field. */
extern char D_00221478[];
extern int func_024BF0(int x, int y);
extern void func_0B5C98(char *msg, int code, unsigned int v);

int func_024128(char *item)
{
    int value;

    value = *(int *)(func_024BF0(*(int *)(item + 0x9a0), *(int *)(item + 0xf8)) + 0x40);
    if (value == 0)
        func_0B5C98(D_00221478, -0x3C, 0xFFFFFFFF);
    return value;
}
