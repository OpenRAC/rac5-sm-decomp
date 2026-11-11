/* LEVEL_03:0x0C8378 -- placement copy of LEVEL_01_0C8590.c: passes the object to the helper with one of two codes chosen by the global mode. */
extern int D_0021928C;
extern void func_133AA8(int *p, int a1);

void func_0C8378(int *object)
{
    if (D_0021928C == 1)
        func_133AA8(object, 0xC);
    else
        func_133AA8(object, 0x1D);
}
