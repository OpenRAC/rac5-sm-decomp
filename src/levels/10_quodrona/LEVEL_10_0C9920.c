/* LEVEL_10:0x0C9920 -- placement copy of LEVEL_01_0C84E0.c: runs the shared handler with entry 10 while the global mode is 1, otherwise with entry 29. */
extern int D_00209C0C;
extern void func_133560(int *p, int a1);

void func_0C9920(int *p)
{
    if (D_00209C0C == 1)
        func_133560(p, 10);
    else
        func_133560(p, 29);
}
