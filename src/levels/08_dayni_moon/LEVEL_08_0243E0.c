/* LEVEL_08:0x0243E0 -- placement copy of LEVEL_01_023CC8.c: looks up the item's record, reports a lookup failure when its field at +0x40 is zero, and returns that field. */
extern char D_002563F8[];
extern int func_024EA8(int x, int y);
extern void func_0BEA10(char *msg, int code, unsigned int v);

int func_0243E0(char *item)
{
    int value;

    value = *(int *)(func_024EA8(*(int *)(item + 0x9a0), *(int *)(item + 0xf8)) + 0x40);
    if (value == 0)
        func_0BEA10(D_002563F8, -0x3C, 0xFFFFFFFF);
    return value;
}
