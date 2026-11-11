/* LEVEL_21:0x0A8B28 -- placement copy of LEVEL_01_0C84E0.c: runs the shared handler with entry 10 while the global mode is 1, otherwise with entry 29. */
extern int D_0015588C;
extern void func_0F45A8(int *p, int a1);

void func_0A8B28(int *p)
{
    if (D_0015588C == 1)
        func_0F45A8(p, 10);
    else
        func_0F45A8(p, 29);
}
