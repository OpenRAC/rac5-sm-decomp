/* LEVEL_22:0x0B6A40 -- placement copy of LEVEL_01_0C8590.c: passes the object to the helper with one of two codes chosen by the global mode. */
extern int D_0015FF8C;
extern void func_10CBB0(int *p, int a1);

void func_0B6A40(int *object)
{
    if (D_0015FF8C == 1)
        func_10CBB0(object, 0xC);
    else
        func_10CBB0(object, 0x1D);
}
