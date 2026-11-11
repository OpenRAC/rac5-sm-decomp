/* LEVEL_19:0x0B6AD8 -- placement copy of LEVEL_01_0C8590.c: passes the object to the helper with one of two codes chosen by the global mode. */
extern int D_001AFE04;
extern void func_112450(int *p, int a1);

void func_0B6AD8(int *object)
{
    if (D_001AFE04 == 1)
        func_112450(object, 0xC);
    else
        func_112450(object, 0x1D);
}
