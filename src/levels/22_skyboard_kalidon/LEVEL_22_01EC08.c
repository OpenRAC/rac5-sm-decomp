/* LEVEL_22:0x01EC08 -- placement copy of LEVEL_01_023CC8.c: looks up the item's record, reports a lookup failure when its field at +0x40 is zero, and returns that field. */
extern char D_00169BF8[];
extern int func_01F460(int x, int y);
extern void func_0A22B8(char *msg, int code, unsigned int v);

int func_01EC08(char *item)
{
    int value;

    value = *(int *)(func_01F460(*(int *)(item + 0x9a0), *(int *)(item + 0xf8)) + 0x40);
    if (value == 0)
        func_0A22B8(D_00169BF8, -0x3C, 0xFFFFFFFF);
    return value;
}
