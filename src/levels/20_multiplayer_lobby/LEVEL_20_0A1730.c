/* LEVEL_20:0x0A1730 -- placement copy of LEVEL_01_0C8590.c: passes the object to the helper with one of two codes chosen by the global mode. */
extern int D_00111364;
extern void func_0E4B98(int *p, int a1);

void func_0A1730(int *object)
{
    if (D_00111364 == 1)
        func_0E4B98(object, 0xC);
    else
        func_0E4B98(object, 0x1D);
}
