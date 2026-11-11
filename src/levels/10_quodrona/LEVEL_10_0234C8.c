/* LEVEL_10:0x0234C8 -- placement copy of LEVEL_01_023CC8.c: looks up the item's record, reports a lookup failure when its field at +0x40 is zero, and returns that field. */
extern char D_002156F8[];
extern int func_023F90(int x, int y);
extern void func_0B4E10(char *msg, int code, unsigned int v);

int func_0234C8(char *item)
{
    int value;

    value = *(int *)(func_023F90(*(int *)(item + 0x9a0), *(int *)(item + 0xf8)) + 0x40);
    if (value == 0)
        func_0B4E10(D_002156F8, -0x3C, 0xFFFFFFFF);
    return value;
}
