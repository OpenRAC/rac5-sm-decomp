/* LEVEL_24:0x0C1E58 -- placement copy of LEVEL_01_0C8590.c: passes the object to the helper with one of two codes chosen by the global mode. */
extern int D_001D188C;
extern void func_12B1E0(int *p, int a1);

void func_0C1E58(int *object)
{
    if (D_001D188C == 1)
        func_12B1E0(object, 0xC);
    else
        func_12B1E0(object, 0x1D);
}
