/* LEVEL_23:0x0BF330 -- placement copy of LEVEL_01_0C8590.c: passes the object to the helper with one of two codes chosen by the global mode. */
extern int D_001D400C;
extern void func_126E58(int *p, int a1);

void func_0BF330(int *object)
{
    if (D_001D400C == 1)
        func_126E58(object, 0xC);
    else
        func_126E58(object, 0x1D);
}
