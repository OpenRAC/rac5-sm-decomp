/* LEVEL_10:0x0C99D0 -- placement copy of LEVEL_01_0C8590.c: passes the object to the helper with one of two codes chosen by the global mode. */
extern int D_00209C0C;
extern void func_133560(int *p, int a1);

void func_0C99D0(int *object)
{
    if (D_00209C0C == 1)
        func_133560(object, 0xC);
    else
        func_133560(object, 0x1D);
}
