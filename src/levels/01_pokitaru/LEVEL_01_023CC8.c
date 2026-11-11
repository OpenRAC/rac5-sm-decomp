/* LEVEL_01:0x023CC8 -- looks up the item's record, reports a lookup failure when its field at +0x40 is zero, and returns that field. */
extern char D_0020C778[];
extern int func_024628(int x, int y);
extern void func_0B3C38(char *msg, int code, unsigned int v);

int func_023CC8(char *item)
{
    int value;

    value = *(int *)(func_024628(*(int *)(item + 0x9a0), *(int *)(item + 0xf8)) + 0x40);
    if (value == 0)
        func_0B3C38(D_0020C778, -0x3C, 0xFFFFFFFF);
    return value;
}
