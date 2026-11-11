/* LEVEL_21:0x0A8BD8 -- placement copy of LEVEL_01_0C8590.c: passes the object to the helper with one of two codes chosen by the global mode. */
extern int D_0015588C;
extern void func_0F45A8(int *p, int a1);

void func_0A8BD8(int *object)
{
    if (D_0015588C == 1)
        func_0F45A8(object, 0xC);
    else
        func_0F45A8(object, 0x1D);
}
