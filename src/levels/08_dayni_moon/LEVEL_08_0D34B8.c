/* LEVEL_08:0x0D34B8 -- placement copy of LEVEL_01_0C8590.c: passes the object to the helper with one of two codes chosen by the global mode. */
extern int D_00249ACC;
extern void func_146C18(int *p, int a1);

void func_0D34B8(int *object)
{
    if (D_00249ACC == 1)
        func_146C18(object, 0xC);
    else
        func_146C18(object, 0x1D);
}
