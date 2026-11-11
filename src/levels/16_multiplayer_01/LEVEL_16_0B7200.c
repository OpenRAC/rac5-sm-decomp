/* LEVEL_16:0x0B7200 -- placement copy of LEVEL_01_0C8590.c: passes the object to the helper with one of two codes chosen by the global mode. */
extern int D_001AEC84;
extern void func_111DB0(int *p, int a1);

void func_0B7200(int *object)
{
    if (D_001AEC84 == 1)
        func_111DB0(object, 0xC);
    else
        func_111DB0(object, 0x1D);
}
