/* FRONTEND:0x0185C8 -- placement copy of LEVEL_01_0C8590.c: passes the object to the helper with one of two codes chosen by the global mode. */
extern int D_0003048C;
extern void func_0229A0(int *p, int a1);

void func_0185C8(int *object)
{
    if (D_0003048C == 1)
        func_0229A0(object, 0xC);
    else
        func_0229A0(object, 0x1D);
}
