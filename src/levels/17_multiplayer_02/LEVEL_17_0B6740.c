/* LEVEL_17:0x0B6740 -- placement copy of LEVEL_01_0C8590.c: passes the object to the helper with one of two codes chosen by the global mode. */
extern int D_001A2284;
extern void func_111328(int *p, int a1);

void func_0B6740(int *object)
{
    if (D_001A2284 == 1)
        func_111328(object, 0xC);
    else
        func_111328(object, 0x1D);
}
