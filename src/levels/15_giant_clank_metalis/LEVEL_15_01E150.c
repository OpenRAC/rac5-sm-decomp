/* LEVEL_15:0x01E150 -- placement copy of LEVEL_01_023CC8.c: looks up the item's record, reports a lookup failure when its field at +0x40 is zero, and returns that field. */
extern char D_00160EF8[];
extern int func_01E990(int x, int y);
extern void func_094278(char *msg, int code, unsigned int v);

int func_01E150(char *item)
{
    int value;

    value = *(int *)(func_01E990(*(int *)(item + 0x9a0), *(int *)(item + 0xf8)) + 0x40);
    if (value == 0)
        func_094278(D_00160EF8, -0x3C, 0xFFFFFFFF);
    return value;
}
