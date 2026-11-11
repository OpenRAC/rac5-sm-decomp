/* LEVEL_05:0x0C6B38 -- placement copy of LEVEL_01_0C8590.c: passes the object to the helper with one of two codes chosen by the global mode. */
extern int D_001EFF8C;
extern void func_131058(int *p, int a1);

void func_0C6B38(int *object)
{
    if (D_001EFF8C == 1)
        func_131058(object, 0xC);
    else
        func_131058(object, 0x1D);
}
