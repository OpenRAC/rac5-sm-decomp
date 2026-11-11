/* LEVEL_04:0x0CDDA8 -- placement copy of LEVEL_01_0C8590.c: passes the object to the helper with one of two codes chosen by the global mode. */
extern int D_0021A0CC;
extern void func_141B60(int *p, int a1);

void func_0CDDA8(int *object)
{
    if (D_0021A0CC == 1)
        func_141B60(object, 0xC);
    else
        func_141B60(object, 0x1D);
}
