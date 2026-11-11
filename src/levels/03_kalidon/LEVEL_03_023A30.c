/* LEVEL_03:0x023A30 -- placement copy of LEVEL_01_023CC8.c: looks up the item's record, reports a lookup failure when its field at +0x40 is zero, and returns that field. */
extern char D_00225678[];
extern int func_0244F8(int x, int y);
extern void func_0B3A20(char *msg, int code, unsigned int v);

int func_023A30(char *item)
{
    int value;

    value = *(int *)(func_0244F8(*(int *)(item + 0x9a0), *(int *)(item + 0xf8)) + 0x40);
    if (value == 0)
        func_0B3A20(D_00225678, -0x3C, 0xFFFFFFFF);
    return value;
}
