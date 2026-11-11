/* LEVEL_03:0x0C82C8 -- placement copy of LEVEL_01_0C84E0.c: runs the shared handler with entry 10 while the global mode is 1, otherwise with entry 29. */
extern int D_0021928C;
extern void func_133AA8(int *p, int a1);

void func_0C82C8(int *p)
{
    if (D_0021928C == 1)
        func_133AA8(p, 10);
    else
        func_133AA8(p, 29);
}
