/* LEVEL_04:0x023948 -- placement copy of LEVEL_01_023CC8.c: looks up the item's record, reports a lookup failure when its field at +0x40 is zero, and returns that field. */
extern char D_002260F8[];
extern int func_0242A8(int x, int y);
extern void func_0B9328(char *msg, int code, unsigned int v);

int func_023948(char *item)
{
    int value;

    value = *(int *)(func_0242A8(*(int *)(item + 0x9a0), *(int *)(item + 0xf8)) + 0x40);
    if (value == 0)
        func_0B9328(D_002260F8, -0x3C, 0xFFFFFFFF);
    return value;
}
