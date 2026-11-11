/* LEVEL_08:0x0D3408 -- placement copy of LEVEL_01_0C84E0.c: runs the shared handler with entry 10 while the global mode is 1, otherwise with entry 29. */
extern int D_00249ACC;
extern void func_146C18(int *p, int a1);

void func_0D3408(int *p)
{
    if (D_00249ACC == 1)
        func_146C18(p, 10);
    else
        func_146C18(p, 29);
}
