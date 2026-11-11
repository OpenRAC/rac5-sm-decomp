/* LEVEL_23:0x0BF280 -- placement copy of LEVEL_01_0C84E0.c: runs the shared handler with entry 10 while the global mode is 1, otherwise with entry 29. */
extern int D_001D400C;
extern void func_126E58(int *p, int a1);

void func_0BF280(int *p)
{
    if (D_001D400C == 1)
        func_126E58(p, 10);
    else
        func_126E58(p, 29);
}
